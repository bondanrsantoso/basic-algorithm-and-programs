#include <iostream>
#include <string>
using namespace std;

int main()
{
  char word[100];
  cout << "==============================\n";
  cout << "             REVERSE!        \n";
  cout << "==============================\n";

  cout << "Enter a word: ";
  cin.getline(word, sizeof word);
  cout << "\nReversed: ";
  for (int i = strlen(word) - 1; i >= 0; i--){
    cout << word[i];
  }
  cout << endl;

  return 0;
}