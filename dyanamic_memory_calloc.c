#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("enter total no of value");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("enter the value");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("entered value is");
     for(i=0;i<n;i++)
    {
        printf("%d",*(ptr+i));
    }
    free(ptr);
}
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("enter total no of value");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("entered value is");
     for(i=0;i<n;i++)
    {
        printf("%d",*(ptr+i));
    }
    free(ptr);
}
*/
