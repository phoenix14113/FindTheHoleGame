#include "Board.h"
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*DIFFICULTY
Easy: 3x3
Medium: 5x5
Hard: 7x7
*/

void Board::BoardConstruct() {
  // Create
  for (int i = 0; i < difficulty * difficulty; i++) {
    if (i == (difficulty*difficulty)/2) {
      boardLayout.push_back('o');
    } else {
      boardLayout.push_back('X');
    }
  }
}
void Board::boardEraser(){
    for(int i = 0; i < difficulty*difficulty; i++){
        boardLayout.pop_back();
    }
}
void Board::randomizeExit() {
  // create an 'exit' somewhere on the board that is not the center
  int boardExit = rand() % (difficulty * difficulty);
  if (boardExit > ((difficulty * difficulty) / 2) ||
      boardExit < ((difficulty * difficulty) / 2)) {
    boardLayout.at(boardExit) = 'O';
  } else {
    randomizeExit();
  }
}

void Board::printBoard() {
  // prints board
  for (int i = 0; i < difficulty * difficulty; i += difficulty) {
    for (int j = 0; j < difficulty; j++) {
      cout << boardLayout.at(i + j);
    }
    cout << endl;
  }
}

// created by Adam Taylor
int Board::checkUserPosition() {
  int userPosition;
  bool doesOExist = false;
  // searches the array for the user's piece
  for (int i = 0; i < boardLayout.size(); i++) {
    if (boardLayout.at(i) == 'o') {
      userPosition = i;
    }
    if (boardLayout.at(i) == 'O') {
      // finds the exit and makes sure it exits
      doesOExist = true;
      currExit = i;
    }
  }
  if (doesOExist == false) {
    // clear user position
    boardLayout.at(userPosition) = 'X';
    boardLayout.at((difficulty * difficulty / 2)) = 'o';
    // insert function that creates a random exit
    randomizeExit();
  }
  return userPosition;
}

// created by Adam Taylor
void Board::changeUserPosition(char direction) {
  int userPosition = checkUserPosition();
  // movement if the vector is 9 entries

  if (direction == 'w' && !(userPosition < difficulty)) {
    // if w is pressed move the peice up the map if it isn't already at the top
    boardLayout.at(userPosition - difficulty) = 'o';
    boardLayout.at(userPosition) = 'X';
    userPosition = userPosition - difficulty;
  } else if (direction == 'a' && !(userPosition % difficulty == 0)) {
    // if a is pressed move the peice left on the map if it isn't already all
    // the way to the left
    boardLayout.at(userPosition - 1) = 'o';
    boardLayout.at(userPosition) = 'X';
    userPosition = userPosition - 1;
  } else if (direction == 'd' && !((userPosition + 1) % difficulty == 0)) {
    // if d is pressed move the peice right on the map if it isn't already all
    // the way to the right
    boardLayout.at(userPosition + 1) = 'o';
    boardLayout.at(userPosition) = 'X';
    userPosition = userPosition + 1;
  } else if (direction == 's' &&
             !(userPosition >= ((difficulty * difficulty) - difficulty))) {
    // if s is pressed move the peice down on the map if it isn't already at the
    // bottom

    boardLayout.at(userPosition + difficulty) = 'o';
    boardLayout.at(userPosition) = 'X';
    userPosition = userPosition + difficulty;
  }
  // if the new position overrights the exit create new randomized board
  if (userPosition == currExit) {
    tempScore++;
    int restart = checkUserPosition();
  }
}
