#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(): numAnimals(0), animal() {};

AnimalsInZoo::AnimalsInZoo(const Animal& a):  numAnimals(1), animal(a)  {};

void AnimalsInZoo::display(){
  cout << "Number of Animals: [" << numAnimals << "]" << endl;
  if(numAnimals == 1){
   animal.display();
  }
}
