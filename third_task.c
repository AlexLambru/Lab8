/* Task description:
Write a program, that first asks the user the number of real values to read; then it reads the values into a dynamically allocated array. 
At the end the program should print the elements of the array backwards, and release the allocated memory!
*/


#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  double *p;
  printf("How many numbers ?");
  scanf("%d",&n);
  p=(double*)malloc(n*sizeof(double));
  if (p==NULL) 
    return 0;
  printf("Enter %d numbers ",n);
  for(int i=0;i<n;i++)
    scanf("%lf",&p[i]);
  for(int i=n-1;i>=0;i--)
    printf("%lf ",p[i]);
  free(p);
  return 0;
}
