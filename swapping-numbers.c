#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d""%d",&a,&b);
    printf("\n Before Swapping: a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After Swapping: a=%d b=%d",a,b);
    return 0;
}