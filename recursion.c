#include <stdio.h>

int n(int num);
int main()
{
    n(3);
    printf("Done")
}
int n(int num)
{
    if(num>0)
    {
        n(num-1);
        printf("%d\n",num);
    }
}
