#include<stdio.h>

int main() {
  int marks;
  printf("\n Enter Marks between 0-100 :");
  scanf("%d", & marks);
  if (marks > 100 || marks < 0) {
    printf("\n Your Input is out of Range");
  } else if (marks > 70) {
    printf("\n You got Distinction");
  } else if (marks >= 61 || marks <=70) {
    printf("\n You got First Class");
  } else if (marks >= 36 || marks <=45) {
    printf("\n You got Second Class");
  } else (marks <=35);{
    printf("\n You got Fail");
  }
  return 0;
}
