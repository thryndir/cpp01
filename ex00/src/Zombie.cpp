#include "Zombie.hpp"
#include <string>

void  Zombie::Announce(void) const
{
  std::cout << mName << ": BraiiiiiiinnnzzzZ...\n";
}

void  Zombie::RandomChump(std::string Name)
{
  Zombie* ToDestroy = NewZombie(Name);
  ToDestroy->Announce();
  delete ToDestroy;
}

Zombie::~Zombie()
{
  std::cout << mName;
}
