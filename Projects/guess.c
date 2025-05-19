/*
Develop a complete "Guess the Number" console game where the computer
generates a random number, and the player has to guess it within a
certain number of attempts.

Day 17: Game Concept and Design
● Plan the game's rules and mechanics
○ The program generates a random number between 1 and 20.
○ The player has up to 5 guesses to determine the secret number.
● Design the user’s experience
○ After each guess, the program provides feedback on whether the guess was too
high or too low.
○ If the player correctly guesses the number within 5 attempts, they win.

Day 18: Game Logic and Implementation
● Capture the user input for guessing
● Generate a random number for the player to guess
● Implement game rules and win/lose conditions
○ Hint: Use if/else statements

Day 19: User Interaction and Gameplay
● Provide feedback on the correctness of guesses
● Implement the game loop for repeated play and tracking on the number of guesses.
○ Hint: Here’s where you can use the for loop!

Day 20-21: Game State and Scoring
● Manage the game state (start, playing, win, lose)
● Optional: Implement some sort of scoring. Be creative!
● Display the final results
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int score = 0;
int comp_guess ;

void guess();
void game();

int main (void)
{
	srand(time(0));
	printf("\n\n\t\t.........................Guessing game 3000...........................\n\n");
	printf("..............In this game your are to guess the random number before your guesses run out...........\n");
	printf(".........If you do so in the allocated chances given to you . You WIN if not YOU LOSE........\n");
	
	int games = 6;

	for(int i = 1; i < games;i++)
	{
		comp_guess = rand() % 21;
		game();
	}
	printf("Your total score is : %d out of 5 games \n",score);

	return 10;

}

void guess()
{		
	
	int user_guess;
	int chances = 0;

	while(chances < 6)
	{

		printf("\nYour guess: ");
		scanf("%d",&user_guess);
		getchar();

		chances++;

		if(user_guess == comp_guess)
		{
			printf("YOU WIN...😂🥳\n\n");
			score ++;
			break;
		}
		else if (user_guess < comp_guess)
		{
			printf("Alittle too low 🥶\n");
		}
		else if(user_guess > comp_guess)
		{
			printf("Alittle too high 🥵\n");
		}

		if(chances == 5)
		{
			printf("\n\n...........Out of chances...............\n\n");
			break;
		}

	}

}

void game()
{
	char play;
	printf("Play(t): \nQuit(q): \n              ");
	scanf("%c",&play);
	getchar();

		if(play == 't')
		{
			guess();
		}
		else if(play == 'q')
		{
			printf("Your total score is : %d out of 5 games. \n",score);
			exit(0);
		}
		else
		{	
			printf("Invalid character: \n");
			getchar();
			game();
		}
}


