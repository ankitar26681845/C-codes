// for the function
#include<stdio.h>
int add(a,b);
int main()
{
    int x= 1,y= 2,z;
    z= add(x,y);
    printf("z=%d",z);
    
}
int add(p,q)
{
    return(p+q);
    
}