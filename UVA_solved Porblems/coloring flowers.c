#include<stdio.h>
#include<math.h>
#define pi acos(-1)

int main()
{
	double a,b,c,s,tri,in_cir,out_cir;

	while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
	{
		s=(a+b+c)/2;
		in_cir=pi*((s-a)*(s-b)*(s-c)/s);
		tri=(sqrt(s*(s-a)*(s-b)*(s-c))-in_cir);
		out_cir=pi*((a*a*b*b*c*c)/((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a)))-(in_cir+tri);
		printf("%.4lf %.4lf %.4lf\n",out_cir,tri,in_cir);
	}
	return 0;
}
