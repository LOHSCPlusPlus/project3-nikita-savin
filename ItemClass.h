#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Bird{
public:
  Bird();
  void readBirdData(ifstream &inFile);
  void readFromUser();
  int readBird();
  void printbird(ostream &out);
  void displayMenu();
  bool sameName(const char userName[]);
  
private:
  enum {MAX_CHAR_LENGTH=500};
  char name[MAX_CHAR_LENGTH];
  char scientificName[MAX_CHAR_LENGTH];
  char conservationStatus[MAX_CHAR_LENGTH];
  char color[MAX_CHAR_LENGTH];
  char diet[MAX_CHAR_LENGTH];
};

