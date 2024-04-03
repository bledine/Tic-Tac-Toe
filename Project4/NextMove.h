#pragma once
#include <iostream>


class NextMove 
{
public:
	char mainboard[3][3] = { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };
	//array<array<char, 3>, 3> mainboard = { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };
	char user;
	char comp;
	const int SIZE = 3;
	NextMove();
	NextMove(char _player, char _comp);
	bool isBoardFull(char _board[3][3]);
	bool isWinner(char _board[3][3], char player);
	int evaluateBoard(char board[3][3]);
	int minimax(char _board[3][3], int depth, bool isMaximizingPlayer);
	int findBestMove(char board[3][3]);
	void clear();

};
