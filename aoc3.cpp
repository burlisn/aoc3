#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
  ifstream inputObject("input.txt");
  vector<string> lines;
  string input;

  while(inputObject >> input)         //Evaluates as true while still performing
  {
    lines.push_back(input);
  }

  for(string line : lines)
  {
    cout << line << endl;
  }

  return 0;
}