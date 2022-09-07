#include<stdio.h>
#include<conio.h>
void main()
{
    int s,e,i,k,j;
    printf("ENTER THE STARTING NUMBER");
    scanf("%d",&s);
    printf("ENTER THE ENDING NUMBER");
    scanf("%d",&e);
    printf("THE PRIME NUMBERS BETWEEN THE RANGE OF %d AND %d ARE:\n ",s,e);
    for(i=s+1;i<=e;i++)
    {
        k=0;
        for(j=2;j<e/2;j++)
        {
            if(i%j==0)
            {
                k=1;
                break;
            }

        }
        if(k==0)
        {
            printf("%d\n",i);
        }
        
    }
    
    
}
