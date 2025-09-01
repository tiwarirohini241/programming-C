#include<stdio.h>
int main()
{
    int f,s;
    printf("Enter the First Number %d",f);
    scanf("%d %d",&f,&s);
    
    int i;
    for(i=f;i<=s;i++)
    {
        if(i%2!=0)
        printf("%d",i);
    }
}