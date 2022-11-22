#include <iostream>
using namespace std;

int main()
{

  int a;  
  cin >> a;
  int firstDigit = (a / 100);
  int restTwoDigit = (a % 100);

  cout << firstDigit << "   "<< restTwoDigit;

  return 0;
}