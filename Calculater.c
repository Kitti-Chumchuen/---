#include <stdio.h>
int main () 
{
    int x;
    int y;
	printf("Enter the first number : ");
    scanf("%d", &x);
	printf("Enter the second number : ");
	scanf("%d", &y);
    printf("%d\t", x+y);
	printf("%d\t", x-y);
	printf("%d\t", x/y);
	printf("%d\t", x*y);
    return 0;
}