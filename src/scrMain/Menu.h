#ifndef SRC_SCRMAIN_MENU_H_
#define SRC_SCRMAIN_MENU_H_
#include "PlayGame.h"
class Menu : public PlayGame {
public:
  // runs main program on creation of a Menu variable
  Menu() { menu(); }
  // main menu function
  void menu();
  void instructions();
  void chooseDifficulty();
private:
};

#endif  // SRC_SCRMAIN_MENU_H_
