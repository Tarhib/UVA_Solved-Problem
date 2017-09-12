#include<stdio.h>
int main()
{
    long long int a=0,b=1,c=0,sum=0,r=0;

    while(c<=4000000){
        c=a+b;
        a=b;
        b=c;
        if((c%2)==0){
            printf("%lld ",c);
                sum=sum+c;
        }
    }
    printf("\n%lld",sum);

    return 0;
}
