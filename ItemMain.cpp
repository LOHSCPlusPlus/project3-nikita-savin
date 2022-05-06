#include <iostream>
#include "ReadUtils.h"
#include "ItemDB.h"
using namespace std;

int main() {

  

  birdDb bird;
  

  int input = 0;

  while(input != 7) {

    cout << "Please select choice (number)" << endl;
    cout << "1. Reload database" << endl;
    cout << "2. Print database" << endl;
    cout << "3. Add new bird" << endl;
    cout << "4. Remove a bird" << endl;
    cout << "5. Search" << endl;
    cout << "6. Save database to file" << endl;
    cout << "7. Quit" << endl;

    input = readInt("Enter choice: ");

    if ( input == 1) {
       bird.readBird();
    }

    if (input == 2) {
      bird.printArrayToScreen();
    }

    if (input == 3) {
      bird.addBird();
      
    }

    if (input == 4) {
      bird.removeBird();
    }

    if (input == 5) {
      bird.searchBird();
    }

    if (input == 6) {
      bird.printArrayToFile("birds1.txt");
    }
    
  }

  

   
  
  return 0;
}

