#include "PlayGame.h"
#include "Board.h"
#include "Player.h"
#include <cstdio> //fetch
#include <ctime>  //time
#include <iostream>
#include <sgtty.h> //console
#include <string>
#include <termios.h>
#include <vector>

using namespace std;

void PlayGame::playGameNow() {
  // allows field to pick the right size
  field.setDifficulty(difficulty);
  // creates the board
  field.BoardConstruct();
  // adds an exit
  field.randomizeExit();
  long long int bTimer = 0;
  time_t active = 1;
  active = time(&active);
  bTimer = active + 30; // sets time to complete as many levels to 60 seconds
  char userInput;
  // continually runs till 30 seconds expires (ish)
  while (active < bTimer) {

    active = time(&active);
    userInput = fetch();
    // outputs time after each user input
    cout << bTimer - active << endl;
    field.changeUserPosition(userInput);
    field.printBoard();
  }
  system("clear");
  addToScore();
  // display different finish messages when time expires
  if (player.getScore() > 1) {
    cout << "You completed " << player.getScore() << " boards." << endl;
  } else if (player.getScore() == 1) {
    cout << "You completed " << player.getScore() << " board." << endl;
  } else if (player.getScore() == 0) {
    cout << "You completed no boards." << endl;
  }
  // waits for user to quit game
  cout << "Press any button to return to the menu: ";
  string temp;
  player.setScore(0);
  field.tempScore = 0;
  field.boardEraser();
  cin >> temp;
  cout << endl;
  system("clear");
}

char PlayGame::fetch() {
  {

    system("stty raw");

    char input = getchar();

    system("clear");
    system("stty cooked");
    return input;
  }
}