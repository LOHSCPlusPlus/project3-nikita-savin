#include "ItemClass.h"

class birdDb {
    private:

      enum{MAX_BIRDS=200};
      Bird birds [MAX_BIRDS];
      int numbirds;
      

    public:
      void printArrayToScreen();
      int readBird();
      void addBird();
      void printArrayToFile(const char fileName[]);
      void removeBird();
      void searchBird();
      birdDb();
};