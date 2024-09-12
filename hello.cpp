#include <iostream>
#include <string>

using namespace std;

int main() 
{
  string name;

  // make a personalized greeting
  cout << "What is your name? ";
  getline(cin, name);
  cout << "Hello, " << name << "!" << endl;

  // show off our counting abilities
  cout << "I can count to 20!" << endl;
  for(int i=1; i<=20; i++) {
    cout << i << endl;
  }
}
