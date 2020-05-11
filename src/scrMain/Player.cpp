#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {
  // asks for player name
  string playerName;
  cout << endl << endl << "What is your name? ";
  getline(cin, playerName);
  name = playerName;
  cout << endl << endl;
  // automaticaly sets score to 0
  score = 0;
}
