#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("enter total no of value");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("enter the value");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("enter the update size of n");
    scanf("%d",&n);
    int *ptr1=(int*)realloc(ptr,n*sizeof(int));
    printf("previous address %d, new address %d",ptr,ptr1);
    printf("\nenter the value are");
     for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
}

