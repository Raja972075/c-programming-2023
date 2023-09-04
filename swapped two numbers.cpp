#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d", &a,&b);
	a=b;
	b=a;
	printf("the swapped numbers are %d %d" ,b ,a);
	return 0;
	
}
