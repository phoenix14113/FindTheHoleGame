/*************************************************************************
 *
 * Project III: Start testing here.
 *
 * File Name:       test_driver.cpp
 * Name(s):         andeja
 * Course:          CPTR 142
 * Date:            ?
 *
 */

// Timing and console imput
/*************************************************************************/
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <sgtty.h>
#include <termios.h>
// Librarys for timings
#include <ctime>
#include <thread>
#include <unistd.h>

using namespace std;

char fetch();

// // Global Constant
// int timer = 0;
//   time_t begginingTime;

// int main() {
//   bool keepGoing = true;
//   char temp;
//   int num = 0;
//   time_t endingTime;

//   endingTime = (time(&endingTime) + 3);

//   do {

//      temp = fetch();

//     if (temp == 'p') {
//       keepGoing = false;
//     }
//         else if (temp == '1') {
//       num += 1;
//       cout << num;
//     } else if (temp == '2') {
//       num += 2;
//       cout << num;
//     } else if (temp == '3') {
//       num += 3;
//       cout << num;
//     } else if (temp == '4') {
//       num += 4;
//       cout << num;
//     } else if (temp == '5') {
//       num += 5;
//       cout << num;
//     } else if (temp == '6') {
//       num += 6;
//       cout << num;
//     } else if (temp == '7') {
//       num += 7;
//       cout << num;
//     } else if (temp == '8') {
//       num += 8;
//       cout << num;
//     } else if (temp == '9') {
//       num += 9;
//       cout << num;
//     } else if (temp == '0') {
//       num += 0;
//       cout << num;
//     }

//   } while (keepGoing == true ||  endingTime > begginingTime);

//   return 0;
// }


char fetch() {

  system("stty raw");

  char input = getchar();
  
  system("clear");

  return input;
}

int main() {
  long long int bTimer = 0;
  time_t active = 1;
  active = time(&active);
  bTimer = active + 5;
  char temp;


  while(active < bTimer){

    active = time(&active);
    temp = fetch();

    cout << temp << "                               " << bTimer - active << endl;

    


  }

  return 0;

  
}

/*************************************************************************/