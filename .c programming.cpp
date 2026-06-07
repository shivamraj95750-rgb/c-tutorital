#include<stdio.h>
int main() {
	int a , b ,c ,d;
	printf("enter a four no.");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	float average=(a+b+c+d)/4.0;
	printf("average=%.2f",average);
	return 0;
}

