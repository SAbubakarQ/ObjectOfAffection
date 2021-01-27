#include <iostream>
#include "profile.hpp"
using namespace std;

int main() {

// Sam Profile Class
  Profile Sam("Sam", 30, "New York", "USA", "he/him");
 // cout << Sam.view_profile();
  Sam.add_hobby("listening to audiobooks and podcast");
 // Sam.add_hobby("Test for hobby 2")
 // cout << Sam.view_profile();
 Sam.add_hobby("playing rec sports like bowling and kickball");
 Sam.add_hobby("writing a speculative fiction novel");
 Sam.add_hobby("Helping Abubakar acheive his goal in coding!");
 cout << Sam.view_profile();

// Abubakar Profile Class
  Profile Abubakar("Abubakar", 21, "Arkansas", "USA", "He/Him");
  Abubakar.add_hobby("Doing community work with the homies");
  cout << Abubakar.view_profile();
 
}
