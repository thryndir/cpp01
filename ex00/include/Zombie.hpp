#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
  private:
  std::string mName;
  public:
    Zombie(std::string name) : mName(name)
    {}
    void    announce(void) const;
    ~Zombie();
};

    Zombie  *newZombie(std::string name);
    void    randomChump(std::string name);

#endif
