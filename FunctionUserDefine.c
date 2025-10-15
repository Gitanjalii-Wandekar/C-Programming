#include<stdio.h>
int addition(int no1, int no2)
{
    int sum=0;
    sum=no1+no2;
    return sum;
}
int main()
{
    int value1; 
    int value2;
    int add=0;
    printf("Enter first number: ");
    scanf("%d", &value1);

    printf("Enter second number:");
    scanf("%d", &value2);
    
    add=addition(value1,value2);

    printf("Addition is:%d\n",add);          
    return 0;
}