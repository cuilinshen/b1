#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
    float area,s;
    printf("please input a, b, and c:\n");
    scanf("a = %d, b = %d, c = %d",&a,&b,&c);
    s = 0.5*(a+b+c);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area = %.2f",area);
    return 0;
}