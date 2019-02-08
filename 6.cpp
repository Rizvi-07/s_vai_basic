#include <stdio.h>

int main()
{
    int a[100],b[50],n,i,j,check=1,cnt=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                check++;
            }
            if(check>2)
                break;
        }
        if(check==2){
            printf("%d\n",a[i]);
        }
        check=1;

    }

    return 0;
}
