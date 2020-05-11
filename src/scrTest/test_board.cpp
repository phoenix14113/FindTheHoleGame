#include "../scrMain/Board.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  Board test;
  srand(2);
  // check functions at difficulty 3
  test.difficulty = 3;
  // check that the board is constructed right
  test.BoardConstruct();
  test.randomizeExit();
  test.printBoard();
  cout << "Position should be 4 (the middle), exit bottom right" << endl;
  cout << test.checkUserPosition() << endl;
  test.printBoard();
  // check that it moves left
  test.changeUserPosition('a');
  cout << "position changed to 3 (the left middle)" << endl;
  cout << test.checkUserPosition() << endl;
  test.printBoard();
  // check that it can't exit the screen
  test.changeUserPosition('a');
  cout << "position stays at 3" << endl;
  cout << test.checkUserPosition() << endl;
  test.printBoard();
  // check that it moves up
  test.changeUserPosition('d');
  cout << "position changed to 3 (middle)" << endl;
  cout << test.checkUserPosition() << endl;
  test.printBoard();
  // check that it can't exit the screen
  test.changeUserPosition('d');
  cout << "position at 5 (right middle)" << endl;
  cout << test.checkUserPosition() << endl;
  test.printBoard();
  test.changeUserPosition('d');
  cout << "position stays at 5 (right middle)" << endl;
  cout << test.checkUserPosition() << endl;
  test.printBoard();
  // check that it moves ups
  test.changeUserPosition('w');
  cout << "position changed to 2 (the right top)" << endl;
  cout << test.checkUserPosition() << endl;
  test.printBoard();
  // check that it can't exit the screen
  test.changeUserPosition('w');
  cout << "position stays at 2" << endl;
  cout << test.checkUserPosition() << endl;
  test.printBoard();
  // check that it moves up
  test.changeUserPosition('s');
  cout << "position changed to 5 (middle right)" << endl;
  cout << test.checkUserPosition() << endl;
  test.printBoard();
  // check that it can't exit the screen
  test.changeUserPosition('s');
  cout << "position at 8 (bottom right)" << endl;
  cout << test.checkUserPosition() << endl;
  test.printBoard();
  test.changeUserPosition('s');
  cout << "position stays at 8 (bottom right)" << endl;
  cout << test.checkUserPosition() << endl;
  test.printBoard();
  // check that it moves left
  test.changeUserPosition('a');
  cout << "position changed to 7 (bottom middle)" << endl;
  cout << test.checkUserPosition() << endl;
  test.printBoard();
  // check that when it intersects the exit it resets the user peice and the
  // exit
  test.changeUserPosition('a');
  cout << "position moves to 4" << endl;
  cout << "exit moves to 1" << endl;
  cout << test.checkUserPosition() << endl;
  test.printBoard();
}