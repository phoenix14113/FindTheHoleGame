#include "Board.h"
#include "Menu.h"
#include "Player.h"
#include <vector>
#include <ctime> //time
#include <termios.h>
#include <cstdio> //fetch
#include <sgtty.h> //console

#ifndef SRC_SCRMAIN_PLAYGAME_H_
#define SRC_SCRMAIN_PLAYGAME_H_

using namespace std;

class PlayGame {
public:
  // stores difficulty from menu
  int difficulty;
  Player player;
  Board field;
  void addToScore() { player.setScore(field.tempScore); }
  void playGameNow();
  char fetch();

private:
};

#endif  // SRC_SCRMAIN_PLAYGAME_H_
