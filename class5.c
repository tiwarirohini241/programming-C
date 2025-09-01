#include<stdio.h>
int main()
{
    int vote, a=0, b=0, c=0;
    printf("Write 1 for A\n 2 for B\3 for C to vote for respective candidate %d",vote);
    scanf("%d",&vote);
    switch(vote)
    {
        case 1:
        {
            a = a+1;
        }
        
        case 2:
        {
            b = b+1;
        }
        
        case 3:
        {
            c = c+1;
        }
        
    }
    
    if (a>b && a>c)
       { printf("A wins");}
        
    if (b>a && b>c)
       { printf("B wins");}
        
    if (c>a && c>b)
       { printf("C wins");}
}