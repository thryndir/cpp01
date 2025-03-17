#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
  std::string mName;
  public:
    Zombie(std::string Name = "");
    void  Announce(void) const;
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string Name);

#endif
