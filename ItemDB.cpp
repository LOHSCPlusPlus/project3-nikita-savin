#include "ItemDB.h"
#include "ReadUtils.h"


birdDb::birdDb() {
  numbirds = 0;
}

void birdDb::printArrayToScreen() {
    for (int index = 0; index < numbirds; index++) {
              cout << index << endl;  
              birds[index].printbird(cout);
    }
}

void birdDb::printArrayToFile(const char fileName[]) {
    ofstream outFile(fileName);
    for (int index = 0; index < numbirds; index++) {
        birds[index].printbird(outFile);
    }
}

int birdDb::readBird() {
    ifstream birdFile("birds.txt");
    numbirds = 0;
    while(birdFile.peek() != EOF && numbirds < MAX_BIRDS) {
        birds[numbirds].readBirdData(birdFile);
        numbirds++;
    }
    return numbirds;
}

void birdDb::addBird() {
  birds[numbirds].readFromUser();
  numbirds++;
}

void birdDb::removeBird() {
  //ask index
  int removeIndex = readInt("Enter index to remove: ");

  //loop, start index, copy into bird[i], bird[i+1]
    for (int i = removeIndex; i < numbirds - 1; i++ ) {
      birds[i] = birds[i + 1];
    }
    
}

void birdDb::searchBird() {
  cin.ignore(1000, '\n');
  char userName[100];
  cout << "Enter bird name to search: ";
  cin.getline(userName, 100);
  
  for (int index = 0; index < numbirds; index++) {
         if (birds[index].sameName(userName)) {
         birds[index].printbird(cout);
           }
    }
}



