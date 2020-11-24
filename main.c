#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct movie_list
{
  char title[50];
  int year;
  float time;
  float score;

};
typedef struct movie_list box;

int readTitle(FILE *ifp, box inside[]);



int main(int argc, char *argv[]) {
  
  if (argc != 2) {
    printf("You must have a valid file.");
    exit(1);
  }
  FILE *ifp = NULL;
  
  ifp = fopen(argv[2], "r");
  if (ifp == NULL){
    printf("Could not open file for reading!\n");
    exit(1);
  }
  return 0;
}