#include<stdio.h>
int main()
{
    long long int a,b=0,c=1,d,sum=0,n;

        while(c<=10001){
                b=b+1;
            n=2;
            while(n<(b/2)+2){
                if((b%n)==0) break;
                n=n+1;
                }
            if(n>(b/2)+1) {
                    c++;
            }
            }
    printf("\n%lld",b);


return 0;
}
