#include "stdio.h"
#include "stdlib.h" 
#include "math.h" 
#include "locale.h"
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, d, r = 0;
	printf("digite um n�mero\n"); 
	scanf_s("%d", &n); 
	for (d = 2; d <= n / 2; d++)
	{
		if (n % d == 0)
		{ r++; 
		  break; 
		}
	} 
	if (r == 0)
		printf("%d � um n�mero primo\n");
	else 
		printf("%d n�o � um n�mero primo\n"); 
		return 0;
}
