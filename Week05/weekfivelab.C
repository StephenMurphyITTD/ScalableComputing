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
const int arraysz = 1000000;

int main (int argc, char** argv) {

  // beging recording time taken to execute
  clock_t begin = clock();

  // declare int and assign from user
  int userintone;
  int userinttwo;

  printf("Choose any number between 1 and 99: \n");
  scanf("%d", &userintone);

  printf("Choose a second number larger then the last: \n");
  scanf("%d", &userinttwo);

  //this is an integer array of size arraysz
  int intarray[arraysz];
  srand(time(NULL)); 
  
  // PARALLELISM CAN BE IMPLEMENTED ON THIS FOR LOOP
  for (int t = 0; t < arraysz; t++) {
    intarray[t] = rand() % 100;
  }

  //perform linear search
  int totalnumb = 0;
  
  // PARALLELISM CAN BE IMPLEMENTED ON THIS FOR LOOP
  for (int t = 0; t < arraysz; t++) {
    if (intarray[t] >= userintone && intarray[t] <= userinttwo ) {
       totalnumb += 1;
    }
  }
  // stop recording time
  clock_t end = clock();

  // finding the delta
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("Number of times your number occured is %d \n", totalnumb);

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

