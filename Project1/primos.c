#include "stdio.h"
#include "stdlib.h" 
#include "math.h" 
#include "locale.h"
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, d, r = 0;
	printf("digite um número\n"); 
	scanf_s("%d", &n); 
	for (d = 2; d <= n / 2; d++)
	{
		if (n % d == 0)
		{ r++; 
		  break; 
		}
	} 
	if (r == 0)
		printf("%d é um número primo\n");
	else 
		printf("%d não é um número primo\n"); 
		return 0;
}
