#include<stdio.h>
int main()
{
    long long int a,b,num,c=0,n;
    int bin[120]={0};

    printf("please give your decimal number:");
    scanf("%lld",&num);

    while(num>0){
            bin[c]=(num%2);
                num=num/2;
                c++;
            }

            for(n=c-1;n>=0;n--){
                printf("%d",bin[n]);
            }

    return 0;
}
