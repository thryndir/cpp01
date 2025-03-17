#include "Zombie.hpp"
#include <iostream>

void  Zombie::Announce(void) const
{
  std::cout << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string Name)
  :mName(Name)
{}

Zombie::~Zombie()
{
  std::cout << mName;
}
