#include <iostream>
#include <cstdlib>

#include "wizard.h"
//#include "paladin.h"
//#include "warrior.h"
//#include "engineer.h"
#include "character.h"

using namespace std;

// function prototypes
void createCharacter(string, Character*&);


int main()
{
    // variable declaration and initialization
    string myName, yourName;
    Character *player, *opponent;
    int weaponID, attack, myHit = 1, oppHit=1;
    bool bothActive;
    int seed;

      
   srand(seed);
   system("clear");
   cout << "Welcome to CSCI 220 - DND Gametime!"
         << endl;
    
    // call createCharacter for your character
    createCharacter()
    // call createCharacter for your opponent's character   
    
    bothActive = true;
    // loop until either character "dies"
    while(bothActive)
    {
         cout << "Game On!" << endl;
         bothActive = false;
        
    } // if either player dies, the while loop breaks
    return 0;
} // end main

void createCharacter(string charName, Character*& one)
{
    int charChoice;

    // Ask the user for character type and name
    cout << "1. Wizard" << endl;
    cout <<" 2. Character Type #2" << endl;
    cout << "3. Character Type #3" << endl;
    cout << "Choose a character type: ";
    cin >> charChoice;
    cout << "Enter your character's name: ";
    cin >> charName;
    cout << endl;

    // instantiate character object based on the specified character type
    // and use charName as the name of the character.
    if (charChoice == 1) 
    {
   // dynamically allocate the Wizard Character and assign it to one
         one = new Wizard("Goliath");
        
    }
    else if (charChoice == 2) 
    {
        // dynamically allocate the ?? Character and assign it to one
    }
    else if (charChoice == 3) 
    {
        // dynamically allocate the ?? Character and assign it to one      
    }
    
}// end createCharacter
