#include<stdio.h>
#include<cs50.h>
int main(int argc , char* argv[])
{
    for(int i =0;i<argc;i++){
        printf("ARGV[%d] is %s\n",i,argv[i]);    //please insert cla while compile this code.
    }
    return 0;
}
