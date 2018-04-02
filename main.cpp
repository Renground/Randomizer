#include <iostream>
#include "randomizer.h"

using namespace std;

int main()
{
  std::queue<unsigned int> init;
  init.push(10);
  init.push(1);
  init.push(0);
  init.push(10);

  Randomizer* randomizer = Randomizer::instance(init);

  cout << randomizer->randomBetween(0,10) << endl;
  cout << randomizer->randomBetween(1,100) << endl;
  cout << randomizer->randomBetween(9,10) << endl;
  cout << randomizer->randomBetween(9,100) << endl;
  cout << randomizer->randomBetween(2,5) << endl;
  cout << randomizer->randomBetween(0,10) << endl;
  cout << randomizer->randomBetween(1,100) << endl;
  cout << randomizer->randomBetween(9,10) << endl;
  cout << randomizer->randomBetween(9,100) << endl;
  cout << randomizer->randomBetween(2,5) << endl;

  return 0;
}
