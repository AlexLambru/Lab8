/* Task description:
Write a program that opens a text file and breaks all lines wider than 20 charaters. The output should be written to "output2.txt".

To test the program, use lorem.txt! Check the result!

*/


#include <stdio.h>

int main(){
  char c;
  FILE *fp=fopen("lorem.txt","r");
  FILE *fout=fopen("output2.txt","w");
  if (fp==NULL)
     return -1;
  int counter=0;
  while(fscanf(fp,"%c",&c)==1){
    fprintf(fout,"%c",c);
    counter++;
    if(c=="/n")
      counter = 0;
    else{
      if(counter==20)
        fprintf(fout,"/n");}}
    

  fclose(fp);fclose(fout);
  return 0;
