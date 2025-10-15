#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

struct Hello
{
    int no;
    float marks;
    struct Demo dobj;   //Nested Structure
};

int main()
{

    printf("Size of Hello Strucute is:%lu\n", sizeof(struct Hello));        //16 bytes

   


    return 0;
}