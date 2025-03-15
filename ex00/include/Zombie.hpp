#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
  std::string mName;
  public:
    void    Announce(void) const;
    Zombie  *NewZombie(std::string Name);
    void    RandomChump(std::string Name);
    ~Zombie();
};

#endif
