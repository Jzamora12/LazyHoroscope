//Authors: Joseluis Zamora
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string First;
  string Last;
  int len;
  //get user input
  cout << "What is your first name?\n"; 
  cin >> First; 
  cout << "What is your last name?\n";
  cin >> Last;
  len = Last.length();
  //tell fortune
  cout << "Welcome, " << First[0];
  cout << "." << Last[0];
  cout << ".";
  cout << ", here is your fortune...\n";
  cout << "your lucky number is " << First.length()<<endl;
  if ( First[0] == 65 || First[0] == 69 || First[0] == 73 || First[0] == 79 || First[0] == 85 || First[0] ==97 || First[0] == 101 || First[0] == 105 || First[0] == 111 || First[0] == 117 ) 
  {
  cout << "you are destined to be famous!\n";
  }
  else 
  {
  cout << "you should keep a low profile.\n";
  }
  if ( Last[len-1] == 'a' || Last[len-1] == 101 || Last[len-1] == 105 || Last[len-1] == 111 || Last[len-1] == 117 ) 
  { 
  cout << "you have already met your true love.\n"; 
  } 
  cout << "have a good day!\n"; 
  return 0;
}
