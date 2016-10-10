/*
 * to compile this file: gcc cprogram.C -o cprogram
 * to run this file:  ./cprogram
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declare one of our own functions so the compiler will understand the references below
void printsomething (int, double, const char* );
int avgval(int[]);

//declare an constant integer called arraysz of size 1000
const int arraysz = 100000;

int main (int argc, char** argv) {

  // beging recording time taken to execute
  clock_t begin = clock();

  //this is an integer array of size arraysz
  int intarray[arraysz];
  srand(time(NULL)); 
  
  for (int t = 0; t < arraysz; t++) {
    intarray[t] = rand();
  }

  int avgvalue = avgval(intarray);

  // stop recording time
  clock_t end = clock();

  // finding the delta
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("The Avg is: %d \n", avgvalue);

  // print time taken
  printf("Time taken to execute code was %f millieseconds \n", time_spent);
  return 1;
}

int avgval (int intarray[]){
  int sum = 0;
  int average = 0;

  for (int t = 0; t < arraysz; t++){
     sum += intarray[t];
  }
  return average = sum / arraysz;
}



// this is the implementation of the function declared above
void printsomething (int numtimes, const char* something) {
  for (int t = 0; t < numtimes; t++) {
    printf("%s\n", something);
  }
}

