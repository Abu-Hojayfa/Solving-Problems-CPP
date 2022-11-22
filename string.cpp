#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Complete the program
  string one, two;
  cin >> one >> two;

  cout << one.size() << " " << two.size() << endl;

  cout << (one + two) << endl;

  char ofOne = one[0];
  char ofTwo = two[0];

  string result1 = one.substr(1);
  string result2 = two.substr(1);

  cout << (ofTwo + result1) << " " << (ofOne + result2);
  // cout << (word2 + newOne) << ()

  return 0;
}