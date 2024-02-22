// Build A Boat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include "string"

using namespace std;


class Boat {
  public: 
      string BOAT_NAME;
      int BOAT_MAKE;

      int createBoat(string boatName, int boatMake) {

          BOAT_NAME = boatName;
          BOAT_MAKE = boatMake;

          std::cout << "Boat " << BOAT_NAME << " of " << BOAT_MAKE << " Created\n";
          system("Pause");

          return 0;
      }

      int sinkBoat() {
      
          std::cout << "Boat " << BOAT_NAME << " has been sunk!\n";
          system("Pause");

          return 0;
      };


};


int INDEX = 0;

int menu(Boat boat) {

    int selection;

    cout << "Menu select: "; cin >> selection;

    if (selection == 1) {
        boat.sinkBoat();
    }

    menu(boat);

  
    return 0;
}


int main()
{
    std::cout << "Hello World!\n";

    Boat userBoat;

    char boatName[25];
    int boatMake;

    int choice;
    
    cout << "What is your boats name??\n";
    std::cin >> boatName;
    cout << "What is your boats make?\n";
    std::cin >> boatMake;

    userBoat.createBoat(boatName, boatMake);

    menu(userBoat);
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
