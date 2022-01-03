#include<stdio.h>
#include<math.h>
int main()
{
	double k,n,s,p;
	scanf ("%lf %lf %lf %lf",&k,&n,&s,&p);
	printf("%d",(int)ceil((ceil(n/s)*k)/p));
}
