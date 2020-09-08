// Author: Dylan Ding dvd5567@psu.edu
// Collaborator: Tim Dai tfd5244@psu.edu
// Collaborator: Sana Tipnis sat5652@psu.edu
// Collaborator:Manan Patel mxp5787@psu.edu
// Section: 7
// Breakout: 5

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char * gradeTemp = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(gradeTemp);
  char * letterGrade;
  if(grade >= 93.0) {
    letterGrade = "A";
  } else if (grade >= 90.0 && grade < 93.0) {
    letterGrade = "A-";
  } else if (grade >= 87.0 && grade < 90.0) {
    letterGrade = "B+";
  } else if (grade >= 83.0 && grade < 87.0) {
    letterGrade = "B";
  } else if (grade >= 80.0 && grade < 83.0) {
    letterGrade = "B-";
  } else if (grade >= 77.0 && grade < 80.0) {
    letterGrade = "C+";
  } else if (grade >= 70.0 && grade < 77.0) {
    letterGrade = "C";
  } else if (grade >= 60.0 && grade < 70.0) {
    letterGrade = "D";
  } else {
    letterGrade = "F";
  }
  printf("Your letter grade for CMPSC 131 is %s.\n", letterGrade);
  return 0;
}
