#include <iostream>
#include <stdlib.h>
#include "Animal.h"
using namespace std;


class AnimalsInZoo{
 public:
  AnimalsInZoo();
  AnimalsInZoo(const Animal& a);
  void display();
  
private:
  int numAnimals;
  Animal animal;
};
