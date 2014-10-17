/* Note:Your choice is C IDE */
#include <stdio.h>
int main()
{
	int b;
	char a;
    scanf("%c",&a);
    b=a;
    if (b>=97&&b<=122)
    printf("It's a lowercase letter.\n");
    else if(b>=65&&b<=90)
    printf("It's a capital letter.\n");
    else if(b>=48&&b<=56)
    printf("It's a digit.");
    else printf("It's a special symbol.\n");
    //printf("%d",b);
    return 0;
}