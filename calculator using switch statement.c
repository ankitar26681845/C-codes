// for calculator
#include<stdio.h>
int main()
{
   char operator;
   double first, second;
    printf("enter the operator(+,-,*,/): ");
    scanf("%c", &operator);
    printf("enter two operands: ");
    scanf("%lf %lf", &first,&second);
    switch(operator) {
    case '+':
    printf("%lf + %lf = %lf", first, second, first + second);
    break;
    case '-':
    printf("%lf - %lf = %lf", first, second, first - second);
    break;
    case '*':
    printf("%lf * %lf = %lf", first, second, first * second);
    break;
    case '/':
    printf("%lf / %lf = %lf", first, second, first / second);
    break;
    default:
    printf("no result");
}
}
