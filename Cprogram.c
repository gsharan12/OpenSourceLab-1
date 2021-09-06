
#include <stdio.h>

int main()
{
    int n,i,ctr=0;
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        ctr++;
    }

    if(ctr==0)
    {
        printf("Prime");
    }

    else
    {
        printf("Not Prime");
    }
    return 0;
}

