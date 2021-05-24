#include <iostream>

using namespace std;

void ReplaceChar(char[], char, char);

int main() {
  char word[20], ch1, ch2;

  cout << "Enter a word: \n";
  cin >> word;

  cout << "Enter a character to be replaced and a character to be replaced with: \n";
  cin >> ch1 >> ch2;

  ReplaceChar(word, ch1, ch2);

  return 0;
}
void ReplaceChar(char word[20], char ch1, char ch2)
{
  int count = 0;
  for(int i = 0; word[i] != '\0'; i++){
    if(word[i] == ch1){
      word[i] = ch2;
      count++;
    }
  }

  if(count == 0)
    cout << "There were no instances of the character in the string";
  else
    for(int i = 0; word[i] != '\0'; i++)
      cout << word[i];
}
