#include <iostream>

using namespace std;

void Tokenizer(char[]);

int main() {
  char word[100];
  char array[20][100];

  cout << "Enter a string: \n";
  cin.getline(word, 100);

  Tokenizer(word);


  return 0;
}
void Tokenizer(char word[100])
{
  int j = 0;
  for(int i = 0; word[i] != '\0'; i++){
    if(word[i+1] == ' ' || word[i+1] == ',' || word[i+1] == '!'){
      //Do nothing
    }
    else if(word[i] == ' ' || word[i] == ',' || word[i] == '!'){
      word[i] = '\n';
    }

  }
  for(int i = 0; word[i] != '\0'; i++)
    cout << word[i];
}
