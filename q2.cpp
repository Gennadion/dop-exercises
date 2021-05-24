#include <iostream>

using namespace std;

bool isConsecutiveFour(const int[], int);

int main() {
  int array[80], size;
  bool result;

  cout << "Enter the number of values: \n";
  cin >> size;

  cout << "Enter the values: \n";
  for(int i = 0; i < size; i++)
    cin >> array[i];

  result = isConsecutiveFour(array, size);

  if(result == 0)
    cout << "False";
  else
    cout << "True";

  return 0;
}
bool isConsecutiveFour(const int values[], int size)
{
  int count = 0;
  for(int i = 0; i < size; i++){
    for(int j = 0; j < 4; j++){
      if(values[i] == values[j])
        count++;
    }
    if(count >= 4)
      return true;
    else
      count = 0;
  }
  return false;
}
