#include<stdio.h>
#include<stdlib.h>
int main()
{
    int length = 0;
    int *Arr = NULL;

    printf("Enter the number of elements:");
    scanf("%d", &length);

    Arr =(int*) malloc (length * sizeof(int));
    if(Arr==NULL)
     {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory gets succesfully allocated\n");
    }

    free(Arr);

    return 0;
}