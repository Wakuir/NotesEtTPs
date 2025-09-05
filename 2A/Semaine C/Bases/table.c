#include <stdio.h>
#include <stdlib.h>

int main() {
	int table;
	printf("Vous voulez la table de combien ? ");
	scanf("\n%d", &table); 

	for (int i = 0; i < 10; i++)
	{
		printf("%d x %d = %d\n", i, table, i * table);
	}
	
	return EXIT_SUCCESS;
}
