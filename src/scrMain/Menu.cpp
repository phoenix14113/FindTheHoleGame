#include "Menu.h"
#include "PlayGame.h"
#include <iostream>

using namespace std;

void Menu::menu() {
  int input;
  cout << endl;
  cout << " [ Menu ]\n -1- Play Game\n -2- Instructions\n -3- Difficulty\n -4- "
          "Quit\n";
  cin >> input;
  if(cin.fail() || input >= 5 || input <= 0){
      cin.clear();
      cin.ignore(100, '\n');
      cerr << "That is not a valid choice. Try again." << endl;
  }
  // error checking for input
  switch (input) {
  case 1:
    // if difficulty has already been selected run the game or ask for
    // difficulty
    if (difficulty == 3 || difficulty == 5 || difficulty == 7)
      playGameNow();
    else {
      chooseDifficulty();
      playGameNow();
    }
    menu();
    break;

  case 2:
    // print instructions if 1 is input
    instructions();
    menu();
    break;

  case 3:
    chooseDifficulty();
    menu();
    break;

  case 4:
    //   quitProgram();
    break;

    // add more cases in case of more menu options

  default:
    menu();
    break;
  }
}

void Menu::instructions() {
  // print instructions
  string input;
  cout
      << " [ How to play ]\n"
         " - Your goal is to move your piece \"o\" to the exit \"O\".\n"
         " - You have about 30 seconds to complete as many boards as you can.\n"
         " - Use a, s, d, w to navigate the board.\n"
         "- Enter anything to continue\n ";
  cin >> input;
}

void Menu::chooseDifficulty() {
  char input;
  bool checkEntry = true;
  // loops until a valid difficulty is selected
  while (checkEntry) {
    cout << " [ Difficulty ]\n -'E' Easy\n -'M' Medium\n -'H' Hard\n";
    cin >> input;

    switch (input) {
    case 'E':
    case 'e':
      difficulty = 3;
      checkEntry = false;
      break;

    case 'M':
    case 'm':
      difficulty = 5;
      checkEntry = false;
      break;

    case 'H':
    case 'h':
      difficulty = 7;
      checkEntry = false;
      break;

    default:
      cerr << "Invalid entry. Try again\n";
    }
  }
}
