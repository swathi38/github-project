#include<stdio.h>
int main()
{
    int i=0;
    while(i<5)
    {
        if(i==3)
        continue;
        printf("i is %d\n", i++);
    
    }
    return 0;
}