#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <ctime>
#include <cstdlib>

class Randomizer
{
  public:
    static Randomizer* instance()
    {
      if(!m_instance)
      {
        m_instance = new Randomizer;
        srand(time(NULL));
      }
      return m_instance;
    }
    unsigned int randomBetween(unsigned int min, unsigned int max)
    {
      return rand() % max + min;
    }
  private:
    static Randomizer* m_instance;
};

#endif
