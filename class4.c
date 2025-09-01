#include <stdio.h>
int main()
{
    int f,s,t,fr;
    printf("Enter 4 numbers:");
    scanf("%d %d %d %d",&f,&s,&t,&fr);
 
    if (f>s && f>t && f>fr)
        {
            printf("The Greatest Number is %d", f);
        }
        
    else if (s>f && s>t && s>fr)
        {
            printf("The Greatest Number is %d", s);
        }
        
    else if (t>s && t>f && f>fr)
        {
            printf("The Greatest Number is %d", t);
        }
        
    else if (fr>s && fr>t && fr>f)
        {
            printf("The Greatest Number is %d", fr);
        }
}