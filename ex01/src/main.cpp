#include "Zombie.hpp"

int main(void)
{
  Zombie* Test = zombieHorde(10, "Jack");
  delete[] Test;
  return (0);
}
