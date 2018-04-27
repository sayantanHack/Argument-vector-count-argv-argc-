#include<stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  int i,sum=0;       //initializing values
  printf("ARGC = %d\n",argc ); // argc is 
  for (i=1;i<argc;i++){
    printf("ARGV[%d] = %s\n",i,argv[i] );
    sum += atoi(argv[i]);
  }
  printf("Total is %d\n",sum );
  return 0;
}
