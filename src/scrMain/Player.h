#include <string>

using namespace std;

#ifndef SRC_SCRMAIN_PLAYER_H_
#define SRC_SCRMAIN_PLAYER_H_


//all functions created by Adam Taylor
class Player {
public:
  Player();
  void setScore(int score) { this->score = score; }
  string getName() { return name; }
  int getScore() { return score; }

private:
  string name;
  int score;
};

#endif  // SRC_SCRMAIN_PLAYER_H_
