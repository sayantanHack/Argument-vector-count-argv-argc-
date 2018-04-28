#include<stdio.h>
#include <stdlib.h>         

int main(int argc, char* argv[])
{
  int i;
  if(argc==1){
    printf("Only one arg is - %s\n",argv[0] );     // if there only one args means only printing of the program.
  }
  else{
    for(i=1;i<argc;i++)         
    {   
      printf("The other args are - %c\n",argv[i] );       //printing other arguments if passed
    }
  }
}
