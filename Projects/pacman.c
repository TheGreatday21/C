#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>
#include <time.h>

#define WIDTH 40
#define HEIGHT 20
#define PACMAN 'C'
#define WALL '#'
#define FOOD '.'
#define EMPTY ' '
#define DEMON 'X'

int res = 0;
int score = 0;
int pacman_x, pacman_y;
char board[HEIGHT][WIDTH];
int food = 0;
int curr = 0;

// Set terminal to raw mode
void enableRawMode() {
    struct termios term;
    tcgetattr(STDIN_FILENO, &term);
    term.c_lflag &= ~(ICANON | ECHO); // Disable canonical mode and echo
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}

// Restore terminal mode (optional on exit)
void disableRawMode() {
    struct termios term;
    tcgetattr(STDIN_FILENO, &term);
    term.c_lflag |= ICANON | ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}

// Non-blocking key press check
int kbhit() {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

char getch() {
    char buf = 0;
    read(STDIN_FILENO, &buf, 1);
    return buf;
}

void initialize() {
    srand(time(NULL));
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == 0 || j == WIDTH - 1 || j == 0 || i == HEIGHT - 1) {
                board[i][j] = WALL;
            } else {
                board[i][j] = EMPTY;
            }
        }
    }

    int count = 50;
    while (count != 0) {
        int i = rand() % HEIGHT;
        int j = rand() % WIDTH;
        if (board[i][j] != WALL && board[i][j] != PACMAN) {
            board[i][j] = WALL;
            count--;
        }
    }

    int val = 5;
    while (val--) {
        int row = rand() % HEIGHT;
        for (int j = 3; j < WIDTH - 3; j++) {
            if (board[row][j] != WALL && board[row][j] != PACMAN) {
                board[row][j] = WALL;
            }
        }
    }

    count = 10;
    while (count != 0) {
        int i = rand() % HEIGHT;
        int j = rand() % WIDTH;
        if (board[i][j] != WALL && board[i][j] != PACMAN) {
            board[i][j] = DEMON;
            count--;
        }
    }

    pacman_x = WIDTH / 2;
    pacman_y = HEIGHT / 2;
    board[pacman_y][pacman_x] = PACMAN;

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i % 2 == 0 && j % 2 == 0 && board[i][j] != WALL &&
                board[i][j] != DEMON && board[i][j] != PACMAN) {
                board[i][j] = FOOD;
                food++;
            }
        }
    }
}

void draw() {
    printf("\033[H\033[J"); // ANSI escape code to clear screen
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    printf("Score: %d\n", score);
}

void move(int move_x, int move_y) {
    int x = pacman_x + move_x;
    int y = pacman_y + move_y;

    if (board[y][x] != WALL) {
        if (board[y][x] == FOOD) {
            score++;
            food--;
            curr++;
            if (food == 0) {
                res = 2;
                return;
            }
        } else if (board[y][x] == DEMON) {
            res = 1;
        }

        board[pacman_y][pacman_x] = EMPTY;
        pacman_x = x;
        pacman_y = y;
        board[pacman_y][pacman_x] = PACMAN;
    }
}

int main() {
    enableRawMode();
    atexit(disableRawMode); // Ensure terminal mode is reset on exit

    initialize();
    char ch;
    food -= 35;
    int totalFood = food;

    printf("\n\t\t\t\tUse buttons for w(up), a(left), d(right) and s(down)\n");
    printf("\n\t\t\t\tAlso, press q to quit\n");
    printf("\n\t\t\t\tEnter Y to continue: \n");

    ch = getch();
    if (ch != 'Y' && ch != 'y') {
        printf("Exit Game! ");
        return 1;
    }

    while (1) {
        draw();
        printf("Total Food count: %d\n", totalFood);
        printf("Total Food eaten: %d\n", curr);

        if (res == 1) {
            printf("\033[H\033[J");
            printf("Game Over! Dead by Demon\nYour Score: %d\n", score);
            return 1;
        } else if (res == 2) {
            printf("\033[H\033[J");
            printf("You Win!\nYour Score: %d\n", score);
            return 1;
        }

        if (kbhit()) {
            ch = getch();
            switch (ch) {
                case 'w': move(0, -1); break;
                case 's': move(0, 1); break;
                case 'a': move(-1, 0); break;
                case 'd': move(1, 0); break;
                case 'q':
                    printf("Game Over! Your Score: %d\n", score);
                    return 0;
            }
        }

        usleep(100000); // Sleep to control game speed
    }

    return 0;
}
