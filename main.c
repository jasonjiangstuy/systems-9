#include <stdio.h>
#include <stdlib.h>


// Create a struct that has at least 2 data members, one must be a string.
// Don’t just combine random things, make it meaningful (like food and price, athlete and associated statistic, Pokemon and something about Pokemon ..)
struct school { int population; char* name;};

void introduceSchool(struct school *s);
struct school * make_school(int population, char *name);




// Write a function that prints out variables of your structs type in a reasonable way.
void introduceSchool(struct school *s){
  printf("Introducting %s with %d students\n", s->name, s->population);
}

// Write a function that creates a new struct in heap memory, it should have paramteters appropraite to your struct.
struct school * make_school(int pop, char *nam) {
  struct school *n = malloc(sizeof(struct school));
  n->name = nam;
  n->population = pop;
  return n;
}

// Write a main function that tests all these things.
int main() {
  /* code */
  struct school *stuy = make_school(4000,"Stuy");
  introduceSchool(stuy);

  struct school *blah = make_school(999,"blah");
  introduceSchool(blah);

  return 0;
}
// Have your program randomly assign some part of your struct each time it is run.
// Have meaningful output.
// DONT FORGET A MAKEFILE
