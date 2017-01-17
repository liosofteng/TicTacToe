
/*
* Simple Tic Tac Toe
*
* Git Hub test by Sora Hernandez and Rogelio Hernandez
* 01/17/2017
*/

#include <iostream>
#include <string>

using namespace std;

//declaring global vars
char matrix[3][3] = { '7','8','9','4','5','6','1','2','3' };
char player = 'X';

void draw() 
{
	//clear screen
	system("cls");

	//print name of games
	cout << "Tic Tac Toe!" << endl;

	//print number matrix
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void input(char player)
{
	//get player input
	int a;
	cout << "Player " + string(1,player) + " enter move: ";
	cin >> a;

/*2D matrix

//[0,0] [0,1] [0,2]
[1,0] [1,1] [1,2]
[2,0] [2,1] [2,2]

7 8 9  
4 5 6
1 2 3
*/

	//update matrix
	if (a == 1)
		matrix[2][0] = player;
	else if (a == 2)
		matrix[2][1] = player;
	else if (a == 3)
		matrix[2][2] = player;
	else if (a == 4)
		matrix[1][0] = player;
	else if (a == 5)
		matrix[1][1] = player;
	else if (a == 6)
		matrix[1][2] = player;
	else if (a == 7)
		matrix[0][0] = player;
	else if (a == 8)
		matrix[0][1] = player;
	else if (a == 9)
		matrix[0][2] = player;

}

char win()
{
	//check player 'X' rows for a win
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	
	//check player 'X' columns for a win
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';

	//check player 'X' cross for a win
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';

	//check player 'O' rows for a win
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[3][1] == 'O' && matrix[3][2] == 'O')
		return 'O';

	//check player 'O' columns for a win
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';

	//check player 'O' cross for a win
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	//default
	return 'N';
}

void tooglePlayer()
{
	//switch player
	if (player == 'X')
	{
		player = 'O';
	}
	else
	{
		player = 'X';
	}
}

int main()
{
	draw();
	while (1)
	{
		input(player);
		draw();
		if (win() == 'X')
		{
			cout << "Player X wins!" << endl;
			break;
		}
		else if (win() == 'O')
		{
			cout << "Player O wins!" << endl;
		}
		tooglePlayer();
	}
	system("Pause");
	return 0;
}