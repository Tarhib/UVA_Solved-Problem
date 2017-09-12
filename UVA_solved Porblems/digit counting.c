#include<stdio.h>
int num(int x);
int main()
{
    int n;
    scanf("%d",&n);

    printf("%d\n",num(n));
}
int num( int x)
{
    int c;
    if(x==0) return 0;

    c=1+num(x/10);
    printf("%d ",c);
    return c;
}
