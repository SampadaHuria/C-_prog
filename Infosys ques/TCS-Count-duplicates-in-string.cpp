#include <bits/stdc++.h>

#include<iostream>

using namespace std;

int main() {
  string str = "sinstriiintng";

  map < char, int > countsMap;

  for (int i = 0; i < str.length(); i++)
    countsMap[str[i]]++;

  for (pair < char, int > entry: countsMap)
    if (entry.second > 1)
      cout << entry.first << " - " << entry.second << "\n";

  return 0;
}