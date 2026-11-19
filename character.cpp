#include "character.h"
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// character constuctor takes in the name of the character
Character::Character(string name)
{
    charName = name;
    //cout << "character constructor" << endl;
}


// setName function can be used to change the character's name
void Character::setName(string name) 
{
    charName = name;
    //cout << "setName member function" << endl;
}

// get name can be used to retrive the character's name
string Character::getName() 
{
    return charName;
}

int Character::selectWeapon() 
{
    int weaponID;
    // display all the weapons a character has 
    
    // read in user's choice    

    // return the ID of that weapon
    return -1;
}

int Character::attack(int weaponID, string opponent) 
{
    int diceRoll;
    
    // calls the selectWeapon function and make the character select a weapon
    
    // randomly generate a number between 1 and 20 and display it    
       
    // print out the character name, weapon used and the weapon's action
        
    // Display opponent name and hit results (success or failed)
    // return 1(success) or 0 (failed)
}// end attack


int Character::hitByOpponent(int hitPoint)
{
    // reduce the remaining health points by the hit point
        
    // display character name, current health points    
    // return 1 (health points remain), 0 (no health points remain) and display (End of Character message)
   
}// end hitByOpponent
