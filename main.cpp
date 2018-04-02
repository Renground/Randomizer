#include <iostream>
#include "randomizer.h"

using namespace std;

Randomizer* randomizer = Randomizer::instance();

int main()
{
  cout << randomizer->randomBetween(0,10) << endl;
  cout << randomizer->randomBetween(1,100) << endl;
  cout << randomizer->randomBetween(9,10) << endl;
  cout << randomizer->randomBetween(9,100) << endl;
  cout << randomizer->randomBetween(2,5) << endl;

  return 0;
}
