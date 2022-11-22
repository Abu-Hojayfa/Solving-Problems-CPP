#include <iostream>
#include <string>
using namespace std;

string oneToTwenty[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};

string tyNumber[] = {"thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string hundred = "hundred";

// common function for double digit
string doubleDigitFnc(int x)
{
  int firstDigit = (x / 10);
  int scndDigit = (x % 10);

  string TwoDigitNumber;

  if (scndDigit != 0)
  {
    TwoDigitNumber = tyNumber[(firstDigit - 3)] + "-" + oneToTwenty[(scndDigit - 1)];
  }
  else
  {
    TwoDigitNumber = tyNumber[(firstDigit - 3)];
  }
  return TwoDigitNumber;
};

// common three digit
string threeDigitFnc(int a)
{
  int firstDigit = (a / 100);
  int restTwoDigit = (a % 100);
  string threeDigit;

  if (restTwoDigit == 0)
  {
    threeDigit = oneToTwenty[(firstDigit - 1)] + "-" + hundred;
  }
  else
  {
    threeDigit = oneToTwenty[(firstDigit - 1)] + "-" + hundred + " and " + doubleDigitFnc(restTwoDigit);
  }

  return threeDigit;
}

// main function
string converter(int a)
{
  // 1 to 20
  if (a <= 20)
  {
    return oneToTwenty[(a - 1)];
  }

  // 20 to 99
  if (20 < a && a < 100)
  {
    return doubleDigitFnc(a);
  }

  // 100 to 999
  if (100 <= a && a < 1000)
  {
    return threeDigitFnc(a);
  }
}

int main()
{

  int number;
  cout << "Enter The Number: ";
  cin >> number;
  if (number != 0)
  {
    cout << "The Number is: " << converter(number);
  }
  else
  {
    cout << "A big ZEROOOOOOOO";
  }

  return 0;
}