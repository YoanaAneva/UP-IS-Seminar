#include <iostream>
using namespace std;

double minOfThree(double firstNum, double secondNum, double thirdNum)
{
  double theSmallest = firstNum;
  if (secondNum < firstNum)
  {
    theSmallest = secondNum;
  }
  if (thirdNum < theSmallest)
  {
    theSmallest = thirdNum;
  }
  return theSmallest;
}

int main()
{
  double firstNum, secondNum, thirdNum;
  cin >> firstNum >> secondNum >> thirdNum;
  cout << minOfThree(firstNum, secondNum, thirdNum) << endl;
}