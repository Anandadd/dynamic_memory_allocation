/*#include<stdio.h>
#include<stdlib.h>
int *display()
{
    int n,i,*ptr;
    ptr=(int*)malloc(3*sizeof(int));
    printf("enter the value");
    for(i=0;i<3;i++)
    {
        scanf("%d",(ptr+i));
    }
    return ptr;
}
int main()
{
    int i,*ptr1;
    ptr1=*display();
    printf("entered value is");
    printf("%d\t",*(ptr1+i));
    free(ptr1);
    return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    ptr=(int*)malloc(3*sizeof(int));
    if(ptr==NULL)
    {
       printf("memory not allocated\n");
    }
    printf("enter the value");
    for(i=0;i<3;i++)
    {
        scanf("%d",(ptr+i));
    }
    free(ptr);
    printf("the enter value are");
    for(i=0;i<3;i++)
    {
        printf("%d\t",*(ptr+i));
        return 0;
    }
}
