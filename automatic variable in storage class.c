//write a program to show the working of auto variable 
#include<stdio.h>
void main()
{
    auto int v=10;
    call2();
    printf("\nV=%d",v);
    
}
 void call1()
{
    auto int v= 20;
    printf("\nV=%d",v);
    
    
}
call2()
{
    auto int v=30;
    call1();
    printf("\nV=%d",v);
}
