#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long q = 0, w = 0, r = 0;
	scanf("%lld", &w);
	for (q = 0; q <= w; q++)
	{
		r += q;
	}
	printf("%lld\n", r);
	return 0;
}