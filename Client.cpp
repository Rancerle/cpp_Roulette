#include "Square.h"
#include <cstdlib>

Square Squares[36];

void setSquares();
void printBoard();


int main()
{
	int wins = 0;
	int losses = 0;
	int keepPlay = 0;
	int roullete;
	int goAhead;
	int betOn;
	int spin;
	int pickANumber;

	setSquares();

	while (keepPlay == 0)
	{
		pickANumber = 0;
		betOn = 0;
		printBoard();
		cout << endl;

		cout << "You have won " << wins << " times and lost " << losses << " times." << endl;
		cout << endl;

		while ((betOn < 1) || (betOn > 6))
		{
			cout << "What would you like to bet on?" << endl;
			cout << "1) A number?" << endl;
			cout << "2) A Color? " << endl;
			cout << "3) A row?" << endl;
			cout << "4) A Colum?" << endl;
			cout << "5) Even or Odd?" << endl;
			cout << "6) a side of the board?" << endl;
			cout << endl;
			cin >> betOn;
			cout << endl;
			if ((betOn < 1) || (betOn > 6))
			{
				cout << "I'm Sorry, but that was not one of the given options." << endl;
				cout << endl;
			}

		}
		
		spin = rand() % 37;

		switch (betOn)
		{
		case 1:
			cout << "Pick a number from 0 to 36!: ";
			cin >> pickANumber;
			if((pickANumber >= 0) && (pickANumber <= 36))
			{
				if (pickANumber == Squares[spin - 1].getNumber())
				{
					cout << "Nice! You Win!" << endl;
					wins++;
					cout << endl;
				}
				else
				{
					cout << "Aww man! You lost!" << endl;
					losses++;
					cout << endl;
				}
			}
			else
			{
				cout << "I'm sorry but that is not one of the squares." << endl;
				cout << endl;
			}
			break;
		case 2:
			cout << "Pick a color (1 = red, 2 = black): ";
			cin >> pickANumber;
			if ((pickANumber >= 1) && (pickANumber <= 2))
			{
				if (pickANumber == 1)
				{
					if (Squares[spin - 1].getColor() == RED)
					{
						cout << "Nice! You Win!" << endl;
						wins++;
						cout << endl;
					}
					else
					{
						cout << "Aww man! You lost!" << endl;
						losses++;
						cout << endl;
					}
				}
				else
				{
					if (Squares[spin - 1].getColor() == BLACK)
					{
						cout << "Nice! You Win!" << endl;
						wins++;
						cout << endl;
					}
					else
					{
						cout << "Aww man! You lost!" << endl;
						losses++;
						cout << endl;
					}
				}
			}
			else
			{
				cout << "I'm sorry but that is not one of the colors." << endl;
				cout << endl;
			}
			break;
		case 3:
			cout << "Pick a row number from 1 to 12!: ";
			cin >> pickANumber;
			if ((pickANumber >= 1) && (pickANumber <= 12))
			{
				if (pickANumber == Squares[spin - 1].getRow())
				{
					cout << "Nice! You Win!" << endl;
					wins++;
					cout << endl;
				}
				else
				{
					cout << "Aww man! You lost!" << endl;
					losses++;
					cout << endl;
				}
			}
			else
			{
				cout << "I'm sorry but that is not one of the Rows." << endl;
				cout << endl;
			}
			break;
		case 4:
			cout << "Pick a Colum number from 1 to 3!: ";
			cin >> pickANumber;
			if ((pickANumber >= 1) && (pickANumber <= 3))
			{
				if (pickANumber == Squares[spin - 1].getColum())
				{
					cout << "Nice! You Win!" << endl;
					wins++;
					cout << endl;
				}
				else
				{
					cout << "Aww man! You lost!" << endl;
					losses++;
					cout << endl;
				}
			}
			else
			{
				cout << "I'm sorry but that is not one of the Colums." << endl;
				cout << endl;
			}
			break;
		case 5:
			cout << "Do you want even or odd (1 = odd, 2 = even): ";
			cin >> pickANumber;
			cout << endl;
			if ((pickANumber >= 1) && (pickANumber <= 2))
			{
				if (pickANumber == 1)
				{
					if (Squares[spin - 1].getNumber() % 2 != 0)
					{
						cout << "Nice! You Win!" << endl;
						wins++;
						cout << endl;
					}
					else
					{
						cout << "Aww man! You lost!" << endl;
						losses++;
						cout << endl;
					}
				}
				else
				{
					if (Squares[spin - 1].getNumber() % 2 == 0)
					{
						cout << "Nice! You Win!" << endl;
						wins++;
						cout << endl;
					}
					else
					{
						cout << "Aww man! You lost!" << endl;
						losses++;
						cout << endl;
					}
				}
			}
			else
			{
				cout << "I'm sorry but that is not one of the squares." << endl;
				cout << endl;
			}
			break;
		case 6:
			cout << "Do you want the lesser half or greater (1 = lesser, 2 = greater): ";
			cin >> pickANumber;
			cout << endl;
			if ((pickANumber >= 1) && (pickANumber <= 2))
			{
				if (pickANumber == 1)
				{
					if (Squares[spin - 1].getNumber() <= 18)
					{
						cout << "Nice! You Win!" << endl;
						wins++;
						cout << endl;
					}
					else
					{
						cout << "Aww man! You lost!" << endl;
						losses++;
						cout << endl;
					}
				}
				else
				{
					if (Squares[spin - 1].getNumber() >= 19)
					{
						cout << "Nice! You Win!" << endl;
						wins++;
						cout << endl;
					}
					else
					{
						cout << "Aww man! You lost!" << endl;
						losses++;
						cout << endl;
					}
				}
			}
			else
			{
				cout << "I'm sorry but that is not one of the squares." << endl;
				cout << endl;
			}
			break;
		}

		cout << "Would You like to play again (0 = yes, 1 = no): ";
		cin >> goAhead;
		cout << endl;

		switch (goAhead)
		{
		case 0:
			cout << "Alright!  Let's go again!" << endl;
			cout << endl;
			break;
		default:
			cout << "Okay! Thanks for playing!" << endl;
			cout << endl;
			keepPlay = 1;
			break;
		}
	}
	return 0;
}


void printBoard()
{
	cout << "                          Roulette                      " << endl;
	cout << "******************************************************* " << endl;
	cout << "*  *03**06**09**12**15**18**21**24**27**30**33**36**C3* " << endl;
	cout << "*  **************************************************** " << endl;
	cout << "*00*02**05**08**11**14**17**20**23**26**29**32**35**C2* " << endl;
	cout << "*  **************************************************** " << endl;
	cout << "*  *01**04**07**10**13**16**19**22**25**28**31**34**C1* " << endl;
	cout << "******************************************************* " << endl;
	cout << "   *R1**R2**R3**R4**R5**R6**R7**R8**R9**R10*R11*R12*    " << endl;
	cout << "   ************************************************     " << endl;
	cout << "   * 1-18 ** EVEN ** RED  ** BLACK**  ODD ** 19-36*     " << endl;
	cout << "   ************************************************     " << endl;
}

void setSquares()
{
	Squares[0] = { 1, RED, 1, 1 };
	Squares[1] = { 2, BLACK, 1, 2 };
	Squares[2] = { 3, RED, 1, 3 };
	Squares[3] = { 4, BLACK, 2, 1 };
	Squares[4] = { 5, RED, 2, 2 };
	Squares[5] = { 6, BLACK, 2, 3 };
	Squares[6] = { 7, RED, 3, 1 };
	Squares[7] = { 8, BLACK, 3, 2 };
	Squares[8] = { 9, RED, 3, 3 };
	Squares[9] = { 10, BLACK, 4, 1 };
	Squares[10] = { 11, BLACK, 4, 2 };
	Squares[11] = { 12, RED, 4, 3 };
	Squares[12] = { 13, BLACK, 5, 1 };
	Squares[13] = { 14, RED, 5, 2 };
	Squares[14] = { 15, BLACK, 5, 3 };
	Squares[15] = { 16, RED, 6, 1 };
	Squares[16] = { 17, BLACK, 6, 2 };
	Squares[17] = { 18, RED, 6, 3 };
	Squares[18] = { 19, RED, 7, 1 };
	Squares[19] = { 20, BLACK, 7, 2 };
	Squares[20] = { 21, RED, 7, 3 };
	Squares[21] = { 22, BLACK, 8, 1 };
	Squares[22] = { 23, RED, 8, 2 };
	Squares[23] = { 24, BLACK, 8, 3 };
	Squares[24] = { 25, RED, 9, 1 };
	Squares[25] = { 26, BLACK, 9, 2 };
	Squares[26] = { 27, RED, 9, 3 };
	Squares[27] = { 28, BLACK, 10, 1 };
	Squares[28] = { 29, BLACK, 10, 2 };
	Squares[29] = { 30, RED, 10, 3 };
	Squares[30] = { 31, BLACK, 11, 1 };
	Squares[31] = { 32, RED, 11, 2 };
	Squares[32] = { 33, BLACK, 11, 3 };
	Squares[33] = { 34, RED, 12, 1 };
	Squares[34] = { 35, BLACK, 12, 2 };
	Squares[35] = { 36, RED, 12, 3 };
}