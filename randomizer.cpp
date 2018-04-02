#include "randomizer.h"

Randomizer* Randomizer::m_instance = NULL;
std::queue<unsigned int> Randomizer::m_init;

Randomizer* Randomizer::instance()
{
  if(!m_instance)
  {
    m_instance = new Randomizer;
    srand(time(NULL));
  }
  return m_instance;
}

Randomizer* Randomizer::instance(std::queue<unsigned int> init)
{  
  if(!m_instance)
  {
    m_instance = new Randomizer;
    srand(time(NULL));
    m_init = init;
  }

  return m_instance;
}

unsigned int Randomizer::randomBetween(unsigned int min, unsigned int max)
{
  if(!m_init.empty())
  {
    unsigned int temp = m_init.front();
    m_init.pop();
    return temp;
  }

  return rand() % (max - min) + min;
}
