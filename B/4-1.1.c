/* Note:Your choice is C IDE */
#include <stdio.h>
int main()
{
    short int a,b,c,d;
    a=b=c=d=0;
    scanf("a = %3hd%4hd, b = %3hd%4hd",&a,&b,&c,&d);
    a=a+c;
    b=b+d;
    if (b>=10000)
    {
    	b=b%10000;
    	a=a+1;
    }
    printf("a + b = %d%d",a,b);
    return 0;
}