#include <stdio.h>

int main()
{
	unsigned long long a = 10;
	printf("%llu\n",a);
	long long b = -5;
	printf("%lld\n",b);
	long long c = 5;
	printf("%lld\n",c);
	a =a+c;
	printf("%llu\n",a);
	a =a+b;
	printf("%llu\n",a);
	a =a-c;
	printf("%llu\n",a);
	return 1; 
}
