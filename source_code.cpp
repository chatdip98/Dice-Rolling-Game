#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int n, x, score = 0, count = 0, flag = 0;

	cout << "Lets play the game of Luck!!!!\nIn this game, you have to guess a number in between 1 and 6(The numbers of the dice :p).\nThe computer will guess another number.\nLets see if you get the right guess.\nIf you guess incorrectly 5 times, you will lose.\n";

	srand(time(0));

	while(flag!=1)
	{
		cout << "\nEnter a number (1 - 6): ";
		cin >> n;
		if(n<1 || n>6)
		{
			cout << "You entered a number thats not within 1-6.";
			continue;
		}
		x = 1 + (rand()%6);
		if(n == x)
		{
			cout << "You guessed right!!\nUnsuccesful attempts left: " << (5 - count) << endl;
			score++;
			continue;
		}
		else
		{
			cout << "Unlucky!! You were wrong.\n";
			count++;
			cout << "The computer thought " << x << "." << endl;
			cout << "Unsuccesful attempts left: " << (5 - count) << endl;
		}
		if(count == 5)
		{
			flag = 1;
		}
	}

	cout << "GAME OVER!!!\nYour total score is: " << score << endl;

	fflush(stdin);
	getchar();
	return 0;
}
