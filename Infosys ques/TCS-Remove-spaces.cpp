#include <iostream>

using namespace std;

string removeSpaces(char str[]) {
  int count = 0; // spaces seen so far

  for (int i = 0; str[i]; i++)
    if (str[i] != ' ') { // if whitespace is present
      str[count] = str[i]; // remove whitespace
      count++; // increment the count
    }

  str[count] = '\0';

  return str;
}

int main() {
  char str[] = "Take you forward";
  cout << removeSpaces(str);

  return 0;
}