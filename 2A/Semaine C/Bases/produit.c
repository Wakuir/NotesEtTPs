/* à compléter: entêtes */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/* à compléter: corps de main */
	int a, b;
	
	printf("programme qui multiplie 2 nombres\n");
	printf("saisir un premier nombre : ");
	scanf("\n%d", &a);
	printf("saisir un deuxième nombre : ");
	scanf("\n%d", &b);
	printf("%d x %d = %d \n", a, b, a*b);
	return EXIT_SUCCESS;
}
