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
                b[j]=check;
                check++;
            }
        }
        check=1;
    }
    for(i=0;i<n;i++){
        if(b[i]==2){
            cnt++;
        }
    }

    printf("%d",cnt);
    return 0;
}
