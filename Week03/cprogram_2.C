/*
 * to compile this file: gcc cprogram.C -o cprogram
 * to run this file:  ./cprogram
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declare one of our own functions so the compiler will understand the references below
void printsomething (int , const char* );

//declare an constant integer called arraysz of size 1000
const int arraysz = 100000;

int main (int argc, char** argv) {

  //this is an integer array of size arraysz
  int intarray[arraysz];
  srand(time(NULL)); 
  
  for (int t = 0; t < arraysz; t++) {
    intarray[t] = rand();
  }

  //perform linear search
  int maxnumb = intarray[0];
  for (int t = 0; t < arraysz; t++) {
    if (intarray[t] > maxnumb) {
       maxnumb = intarray[t];
    }
  }
  printf("max numb is %d", maxnumb);
  return 1;

}

// this is the implementation of the function declared above
void printsomething (int numtimes, const char* something) {
  for (int t = 0; t < numtimes; t++) {
    printf("%s\n", something);
  }
}

