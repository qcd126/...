#include <stdio.h>

int main(){
	int a[2], b;
	a[0] = 3;
	a[1] = 4;
	b = a[0] + a[1];
	printf ("%d+%d=%d",a[0], a[1], b);
	return 0;
}