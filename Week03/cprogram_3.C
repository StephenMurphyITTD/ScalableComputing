/*
 * to compile this file: gcc cprogram.C -o cprogram
 * to run this file:  ./cprogram
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declare one of our own functions so the compiler will understand the references below
void printsomething (int, double, const char* );

//declare an constant integer called arraysz of size 1000
const int arraysz = 100000;

int main (int argc, char** argv) {

  // beging recording time taken to execute
  clock_t begin = clock();

  // declare int and assign from user
  int pickedint;
  printf("Choose any number between 1 and 100000: \n");
  scanf("%d", &pickedint);
  //printf("Entered character is %d \n", pickedint);

  //this is an integer array of size arraysz
  int intarray[arraysz];
  srand(time(NULL)); 
  
  for (int t = 0; t < arraysz; t++) {
    intarray[t] = rand();
  }

  //perform linear search
  int totalnumb = 0;
  for (int t = 0; t < arraysz; t++) {
    if (intarray[t] = pickedint) {
       totalnumb += 1;
    }
  }
  // stop recording time
  clock_t end = clock();

  // finding the delta
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("max numb is %d \n", totalnumb);

  // print time taken
  printf("Time taken to execute code was %f millieseconds \n", time_spent);
  return 1;
}

// this is the implementation of the function declared above
void printsomething (int numtimes, const char* something) {
  for (int t = 0; t < numtimes; t++) {
    printf("%s\n", something);
  }
}

