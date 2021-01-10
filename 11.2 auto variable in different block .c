//write a program to show the working of auto variable in different blocks.
#include<stdio.h>
int main()
{
    int x=10;
    printf("\n x=%d",x);
    {
        int x= 20;
        printf("\n x=%d",x);
    }
    printf("\nx=%d",x);
    
    }
