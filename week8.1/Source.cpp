#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
	printf("Enter 10 peple height : ");
	scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
	printf("\n\n------------------------------\n");
	float avg = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10;
	printf("Height avg is %.2f", avg);
	return 0;
}