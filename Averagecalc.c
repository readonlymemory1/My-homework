#include <stdio.h>

int main(){
	int a, b, c, e;
	float d;
	scanf("%d %d %d", &a, &b, &c);
	e = (a+b+c);
	d = e/3.0f;
	printf("%.2f", d);
	return 0;
}
