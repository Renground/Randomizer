#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <ctime>
#include <cstdlib>

class Randomizer
{
  public:
    static Randomizer* instance();
    unsigned int randomBetween(unsigned int min, unsigned int max);
  private:
    static Randomizer* m_instance;
};

#endif
