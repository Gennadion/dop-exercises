#include <iostream>

using namespace std;

int WordNumber(char[]);

int main() {
  char word[100];

  cout << "enter a word: \n";
  cin.getline(word, 100);

  cout << WordNumber(word);

  return 0;
}
int WordNumber(char word[100])
{
  int count = 1;
  for(int i = 0; word[i] != '\0'; i++){
    if(word[i] == ' '){
      count++;
      if(word[i-1] == ' ')
        count--;
    }

  }
  return count;
}
