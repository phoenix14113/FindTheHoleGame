/*************************************************************************
 *
 * Project III: Start here.
 *
 * File Name:       main.cpp
 * Name(s):         ?
 * Course:          CPTR 142
 * Date:            ?
 *
 */

#include "Menu.h"
#include "PlayGame.h"
#include "Player.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

// using namespace std;

int main() {
  bool TEST_PLAYGAME = false;
  bool TEST_MENU = true;
  bool countDown = true;
  
  srand(time(NULL));

  // playgame testing
  if (TEST_PLAYGAME) {
    PlayGame newGame;
  }
  // menu testing
  if (TEST_MENU) {
    Menu menu;
  }

  return 0;
}