#include<stdio.h>
#include<math.h>
#define size 100002
char ara[size];
void seive()
{
    int i,j,root;
    for(i=2;i<size;i++) ara[i] = 1;
    root = sqrt(size);
    for(i=2;i<=root;i++)
    {
        if(ara[i]==1)
        {
            for(j=i;i*j<=size;j++)
                ara[i*j] = 0;
        }
    }
}
int main()
{
    int a,b,t,i,j,count;
    seive();
    for(i=1;i<101;i++)
    {
        if(ara[i]==1)
        {
            printf("%d is prime\n",i);

        }
        else
            printf("%d is not prime\n",i);
    }
    /*scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        count=0;
        for(i=a;i<=b;i++)
        {
            if(ara[i]==1)
                count++;
        }
        printf("%d\n",count);
    }*/
}
