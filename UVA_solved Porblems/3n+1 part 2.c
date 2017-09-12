#include<stdio.h>
int main()
{
    int b,n=0,i,o,m,s,temp;

    while(scanf("%d %d",&b,&m)==2)
    {
        printf("%d %d ",b,m);
        /*if(b>m)
        {
        temp=b,b=m,m=temp;
        }*/
        s=0;
        for(o=b;o<=m;o++)
        {
            i=0;
            n=o;
        while(n>1)
        {
            if((n%2)==0)
                {
                n=n/2;
                i++;
                }
        else if((n%2)!=0){
                n=3*n+1;
                i++;
                }
        }
        if(i>s){
            s=i;
        }
    }
    printf("%d\n",s+1);
    }
    return 0;
}
