#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i;
    printf("Enter the value for n\n");
    scanf("%d",&n);
    printf("Enter the element");
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter values:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("Enter the values:");
    for(int  i=0;i<n;i++)
    {
        printf("%d\n",*(ptr+i));
    }

    printf("Enter the updated values:");
    scanf("%d",&n);
    int *ptr1=(int *)realloc(ptr,n*sizeof(int));
    printf("preiveous addres %p new addres = %p\n",ptr,ptr1);
    printf("values are:\n");
    for (int  i=0;i<n;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    free(ptr);
}
