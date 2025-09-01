#include<stdio.h>
int main()
{
    int i, count=0;
    int sum =0;
    for(i=10;i<=100;i++)
    {
        
        if(i%2!=0)
        {
            count=count+1;
            if(count<=12)
        {
            sum = sum+i;
        }
        }
        
    }
        printf("%d",sum);
        
}