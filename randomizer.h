#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <ctime>
#include <cstdlib>
#include <queue>
#include <vector>

class Randomizer
{
  public:
    static Randomizer* instance();
    static Randomizer* instance(std::queue<unsigned int> init);
    unsigned int randomBetween(unsigned int min, unsigned int max);
  private:
    static Randomizer* m_instance;
    static std::queue<unsigned int> m_init;
};

#endif
