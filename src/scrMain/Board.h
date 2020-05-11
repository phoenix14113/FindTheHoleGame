
#include <vector>

#ifndef SRC_SCRMAIN_BOARD_H_
#define SRC_SCRMAIN_BOARD_H_

using namespace std;

class Board {
public:
  vector<char> boardLayout;
  int difficulty;
  int tempScore = 0;
  void BoardConstruct();
  void randomizeExit();
  void printBoard();
  void changeUserPosition(char);
  int checkUserPosition();
  void setDifficulty(int difficulty) { this->difficulty = difficulty; }
  void Randomize();
  void boardEraser();

private:
  int currExit;
};

#endif  // SRC_SCRMAIN_BOARD_H_
