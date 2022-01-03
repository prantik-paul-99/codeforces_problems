#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	long long int x, y;
	long double q,r;
	scanf ("%lld %lld",&x,&y);
	q=y*log(1.0*x);
	r=x*log(1.0*y);
	if (q==r)
	printf("=");
	if
	(q<r)
	printf("<");
	if (q>r)
	printf(">");
}
