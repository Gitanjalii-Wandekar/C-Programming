#include<stdio.h>

int main()
{
    char cvalue='S';
    int ivalue=11;
    float fvalue=33.24f; //if we havent mention f at the last then it is treated as double by defalut
    double dvalue=98.6763674;

    printf("%c\n", cvalue);
    printf("%d\n", ivalue);
    printf("%f\n", fvalue);
    printf("%lf\n", dvalue);


    return 0;

}