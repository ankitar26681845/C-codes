//write a program to show how similar variable names can be used in different functions 
#include<stdio.h>
int fun(void);
int main()
{
    int b= 10, c = 5;
    printf("In the main() B=%d c=%d",b,c);
    fun();
    
}
int fun()
{
    int b = 20, c= 10;
    printf("\nIn fun() B = %d C = %d",b,c);
}