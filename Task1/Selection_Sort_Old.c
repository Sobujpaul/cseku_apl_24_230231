#include <stdio.h>
#include<stdlib.h>

int main(){

    int a[100];
    int i, j;
    static int sum=0;
    int n;
    printf("Enter the total number of element:");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element:", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n-1; i++)
    {
        for (j = i + 1; j < n; j++)
        {

            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);

    }

    return 0;
}
