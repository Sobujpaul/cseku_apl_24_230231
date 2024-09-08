#include<stdio.h>

int main(){

    int a[5],i,j,sum=0,c=0,f=0,n;
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        n=a[i];
        f=0;
        for(int j=2; j<n; j++)
        {
            if(n%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
            printf(" %d ",n);
            sum=sum+n;
    }
printf("sum = %d\n",sum);

    return 0;
}

