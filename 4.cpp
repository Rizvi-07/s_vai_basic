#include<stdio.h>

int main()
{
    int a[100],b[100],n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        //j=i;
        b[i] = a[i];
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }

    return 0;
}
