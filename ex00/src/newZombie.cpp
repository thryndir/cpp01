#include "Zombie.hpp"

Zombie *Zombie::NewZombie(std::string Name)
{
    Zombie* NewZombie = new Zombie;
    NewZombie->mName = Name;
    return (NewZombie);
}
