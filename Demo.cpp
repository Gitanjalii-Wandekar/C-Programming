#include<stdio.h>
class Demo
{
    public:
    int no1;
    int no2;

    Demo()
    {
        int no1=0;
        int no2=0;

    }
    Demo(int a, int b)
    {
        int no1=a;
        int no2=b;

    }
  
};
    int main()

    {
    
        Demo obj1;
    
        Demo obj2(10,20);
    
        return 0;

    }

