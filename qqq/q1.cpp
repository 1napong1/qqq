#include<stdio.h>
int main() {
	int l, w, i, j;
	printf("WIDTH  : ");
	scanf_s("%d", &w);
	printf("LENGHT : ");
	scanf_s("%d", &l);
	for (i = 1;w >= i;i++)
	{
		for (j = 1;l >= j;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}