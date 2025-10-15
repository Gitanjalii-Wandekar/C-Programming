#include<stdio.h>
int main()
{
    int value1;
    int value2;
    int sum=0;
    printf("Enter first number: ");
    scanf("%d", &value1);

    printf("Enter second number:");
    scanf("%d", &value2);

    sum=value1+value2;
    printf("Addition is : %d\n",sum);
    return 0;
            
}