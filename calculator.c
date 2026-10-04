#include <stdio.h>
int main (){

    int num1, num2, result;
    char operator ;
    
    printf("enter a number: ");
    scanf("%d" ,&num1);

    printf("enter another number: ");
    scanf("%d" ,&num2);

    printf("choose a operator (+, -, /, *):");
    scanf(" %c" ,&operator);


    switch (operator)
    {
    case '+':
        printf("%d", result = num1 +num2);
        break;

    case '-':
        printf("%d", result = num1 -num2);
        break;

    case '*':
        printf("%d", result = num1 *num2);
        break;

    case '/':
        printf("%d", result = num1 /num2);
        break;
    
    default:
        printf("something went wrong");    
        
    }

}