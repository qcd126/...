//1번 
#include <stdio.h>
int main() {
    int a = 3;
    int b = 4;
    int sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
    return 0;
}
//2번 
#include <stdio.h>
void main(){
	int val[2],s;
	puts("Enter:");
	scanf("%d %d",&val[0],&val[1]);
	s = val[0]+val[1];
	printf("%d", s);
}
//3번
#include <stdio.h>
int main(){
	int a[2], b;
	a[0] = 3;
	a[1] = 4;
	b = a[0] + a[1];
	printf ("%d+%d=%d",a[0], a[1], b);
	return 0;
}
//4번
#include<stdio.h>
int main() {
    int a, b, c;
    FILE* fp;
    fp = fopen("my.txt","r");
    fscanf(fp, "%d %d", &a, &b);
    fclose(fp);
    c = a + b;
    printf("%d+%d=%d\n", a, b, c);
    return 0;
}
//5번 
#include<stdio.h>
struct Math{
    int a, b;
} me;
void main ()
{
    me.a = 3;
    me.b = 4;
    printf("%d\n", c.a+c.b);
}
