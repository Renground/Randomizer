#include "randomizer.h"

Randomizer* Randomizer::m_instance = NULL;

Randomizer* Randomizer::instance()
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
