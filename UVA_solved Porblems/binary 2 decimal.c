#include<stdio.h>
#include<math.h>
int main()
{
    int a[256]={0};
    int b,n,num,d,sum,ce,m;

    printf("please give your binary number\n");
    while(scanf("%d",&num)==1){
    n=0,sum=0;
    while(num>0){
        a[n]=num%10;
        num=num/10;
        n++;
    }

    printf("\n");
    m=n-1;
    for(d=n-1;d>=0;d--){
            ce=pow(2,m);
        sum=sum+a[d]*ce;
        m--;
    }

    printf("%d\n",sum);
    }

    return 0;
}
