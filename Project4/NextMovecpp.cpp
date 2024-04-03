#include "NextMove.h"
#include <climits>
#include <algorithm>

NextMove::NextMove(){}

NextMove::NextMove(char _player, char _comp)
{
	user = _player;
	comp = _comp;
}

bool NextMove::isBoardFull(char _board[3][3])
{
        for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                        if (_board[i][j] == ' ')
                                return false;  // There is an empty spot, board is not full
                }
        }
        return true;  // Board is full
}

bool NextMove::isWinner(char _board[3][3], char player)
{
        for (int i = 0; i < SIZE; ++i) {
                if (std::all_of(_board[i], _board[i] + SIZE, [player](char cell) { return cell == player; }) ||
                        std::all_of(_board, _board + SIZE, [player, i](char row[3]) { return row[i] == player; }))
                        return true;
        }

        return (_board[0][0] == player && _board[1][1] == player && _board[2][2] == player) ||
                (_board[0][2] == player && _board[1][1] == player && _board[2][0] == player);

}

int NextMove::evaluateBoard(char _board[3][3]) {
        if (isWinner(_board, comp)) return 1;  // AI wins
        if (isWinner(_board, user)) return -1; // Human wins
        if (isBoardFull(_board)) 
                return 0;    // It's a draw
        return INT_MIN; // Placeholder for non-terminal state
}

// The minimax algorithm
int NextMove::minimax(char board[3][3], int depth, bool isMaximizingPlayer) {
        int score = evaluateBoard(board);

        // Base cases (terminal states)
        if (score != INT_MIN) return score;

        // Recursive cases
        if (isMaximizingPlayer) {
                int maxScore = INT_MIN;
                for (int i = 0; i < SIZE; ++i) {
                        for (int j = 0; j < SIZE; ++j) {
                                if (board[i][j] == ' ') {
                                        board[i][j] = 'X';
                                        maxScore = std::max(maxScore, minimax(board, depth + 1, false));
                                        board[i][j] = ' '; // Undo the move
                                }
                        }
                }
                return maxScore;
        }
        else {
                int minScore = INT_MAX;
                for (int i = 0; i < SIZE; ++i) {
                        for (int j = 0; j < SIZE; ++j) {
                                if (board[i][j] == ' ') {
                                        board[i][j] = 'O';
                                        minScore = std::min(minScore, minimax(board, depth + 1, true));
                                        board[i][j] = ' '; // Undo the move
                                }
                        }
                }
                return minScore;
        }
}


int NextMove::findBestMove(char board[3][3]) {
        int bestScore = INT_MIN;
        int bestMoveI = -1;
        int bestMoveJ = -1;

        for (int i = 0; i < SIZE; ++i) {
                for (int j = 0; j < SIZE; ++j) {
                        if (board[i][j] == ' ') {
                                board[i][j] = 'X';
                                int moveScore = minimax(board, 0, false);
                                board[i][j] = ' '; // Undo the move

                                if (moveScore > bestScore) {
                                        bestScore = moveScore;
                                        bestMoveI = i;
                                        bestMoveJ = j;
                                }
                        }
                }
        }

        if (bestMoveI > -1 && bestMoveJ > -1) {
                mainboard[bestMoveI][bestMoveJ] = 'X'; // Make the best move
        }
        if (bestMoveI == 0 && bestMoveJ == 0)
                return 0;
        if (bestMoveI == 0 && bestMoveJ == 1)
                return 1;
        if (bestMoveI == 0 && bestMoveJ == 2)
                return 2;
        if (bestMoveI == 1 && bestMoveJ == 0)
                return 3;
        if (bestMoveI == 1 && bestMoveJ == 1)
                return 4;
        if (bestMoveI == 1 && bestMoveJ == 2)
                return 5;
        if (bestMoveI == 2 && bestMoveJ == 0)
                return 6;
        if (bestMoveI == 2 && bestMoveJ == 1)
                return 7;
        if (bestMoveI == 2 && bestMoveJ == 2)
                return 8;

        return 0;
}

void NextMove::clear()
{

}