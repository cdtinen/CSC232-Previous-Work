/**
 * CSC232 Data Structures
 * Missouri State University, Spring 2019
 *
 * Lab 12 - Dynamic Programming: The Jumping Game
 * @file JumpItGame.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief JumpItGame implementation.
 */

#include "JumpItGame.h"
#include <unordered_map>

JumpItGame::JumpItGame(std::vector<int> board) : gameBoard{std::move(board)} {
    // Intentionally blank
}

int JumpItGame::play() {
    int score = play(BOTTOM_UP);
    return score;
}

int JumpItGame::play(Technique technique) {
    int score;
    switch (technique) {
        case BOTTOM_UP:
            score = jumpItBottomUp(gameBoard);
            buCacheTable.clear();
            break;
        case TOP_DOWN:
            score = jumpItTopDown(gameBoard, 0);
            tdCacheTable.clear();
            break;
        default:
            score = jumpItBottomUp(gameBoard);
            buCacheTable.clear();
            break;
    }
    return score;
}

// private helper function implementations

int JumpItGame::jumpItBottomUp(std::vector<int> board) {
    int n = board.size();
	std::vector<int> cost(n);

	if (n == 1) {
		cost[n - 1] = board[n - 1];
	}
	else if (n == 2) {
		cost[n - 2] = board[n - 2] + board[n - 1];
	}

	else {
		cost[n - 1] = board[n - 1];

		cost[n - 2] = board[n - 2] + board[n - 1];

		for (int i = (n - 3); i > -1; i--) {
			cost[i] = board[i] + std::min(cost[i + 1], cost[i + 2]);
		}
	}
    return cost[0];
}

int JumpItGame::jumpItTopDown(std::vector<int> board, int currentPosition) {
    int n = board.size();
	std::unordered_map<int, int> cost(n);
	int cost1;
	int cost2;

	if (cost.find(currentPosition) == cost.end()) {

		if (currentPosition == n - 1)
			cost[currentPosition] = board[n - 1];
		else if (currentPosition == n - 2)
			cost[currentPosition] = board[n - 2] + board[n - 1];
		else {
			cost1 = jumpItTopDown(board, currentPosition + 1);
			cost2 = jumpItTopDown(board, currentPosition + 2);
			cost[currentPosition] = board[currentPosition] + std::min(cost1, cost2);
		}
	}

    return cost[currentPosition];
}

int JumpItGame::len(std::vector<int> board) {
    return static_cast<int>(board.size());
}


