//Authors: Joseluis Zamora
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string First;
  string Last; 
  //get user input
  cout << "What is your first name?\n"; 
  cin >> First; 
  cout << "What is your last name?\n";
  cin >> Last;
  //tell fortune
  cout << "Welcome," << First[0] << Last[0];
  cout << ",here is your fortune...\n";
  return 0;
}
