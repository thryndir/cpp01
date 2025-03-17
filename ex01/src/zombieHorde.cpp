#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string Name)
{
  Zombie *FirstZombie = NULL;
  if (N >= 1)
  {
    FirstZombie = new Zombie [N];
    for (int i = 0; i < N; i++)
    {
      FirstZombie[i] = Zombie(Name);
      FirstZombie[i].Announce();
    }
  }
  return (FirstZombie);
}
