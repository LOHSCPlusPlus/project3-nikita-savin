#include "ItemClass.h";

Bird::Bird(){
   strcpy(name, ""); //do this alll 
   scientificName[MAX_CHAR_LENGTH];
   conservationStatus[MAX_CHAR_LENGTH];
   color[MAX_CHAR_LENGTH];
   diet[MAX_CHAR_LENGTH];
}

bool Bird::sameName(const char userName[]) {
  if (strcmp(userName, name) == 0) {
        return true;
  }

  return false;
}


void Bird::readBirdData(ifstream &inFile){
    inFile.get(name, Bird::MAX_CHAR_LENGTH, ';');
    inFile.ignore(100,';');
    inFile.get(scientificName, Bird::MAX_CHAR_LENGTH, ';');
    inFile.ignore(100,';');
    inFile.get(conservationStatus, Bird::MAX_CHAR_LENGTH, ';');
    inFile.ignore(100,';');
    inFile.get(color, Bird::MAX_CHAR_LENGTH, ';');
    inFile.ignore(100,';');
    inFile.get(diet, Bird::MAX_CHAR_LENGTH);
    inFile.ignore(100, '\n');
  }

void Bird::readFromUser() {
        cout << "Enter Bird name: ";
        cin.ignore(1000, '\n');
        cin.getline(name, Bird::MAX_CHAR_LENGTH);
    
        
        cout << "Enter Scientific Name: ";
        cin.getline(scientificName, Bird::MAX_CHAR_LENGTH);
     

        cout << "Enter conservation status: ";
        cin.getline(conservationStatus, Bird::MAX_CHAR_LENGTH);
    
        
        cout << "Enter color: ";
        cin.getline(color, Bird::MAX_CHAR_LENGTH);
      

        cout << "enter the  diet: ";
        cin.getline(diet, Bird::MAX_CHAR_LENGTH);

      
}

void Bird::printbird(ostream &out){
    out << name << ";";
    out << scientificName << ";";
    out << conservationStatus << ";";
    out << color << ";";
    out << diet << ";" << endl;
}

