/* à compléter: entêtes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_LEN 64

int main(void)
{
	char orig[BUFFER_LEN] = "bonjour";
	// = {0}; is the universal zero initializer, C99 Standard 6.7.8.21
	char mirror[BUFFER_LEN] = {0};  // fill buffer with 0 (a.k.a. '\0')

	int finMot = 0;
	while (finMot < BUFFER_LEN)
	{
		if (orig[finMot] == 0)
		{
			break;
		}
		
		finMot++;
	}
	

	/* à compléter: corps de main */
	for (int i = 0; i < finMot; i++)
	{
		mirror[i] = orig[finMot - i - 1];
	}

	printf("%s\n", mirror);	

	return EXIT_SUCCESS;
}
