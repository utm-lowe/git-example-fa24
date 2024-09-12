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
}
