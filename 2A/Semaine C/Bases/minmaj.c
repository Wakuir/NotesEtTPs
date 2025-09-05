#define _POSIX_C_SOURCE 200809L  // getline in POSIX.1-2008

#define BUFFER_LEN 64

/* à compléter: entêtes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * readline() reads an entire line from stream and stores at most one less than
 * size characters into the buffer pointed to by buffer.
 * A terminating null byte ('\0') is stored after the last character in the
 * buffer.
 *
 * On success, readline() returns the number of characters read, excluding the
 * terminating null byte ('\0').
 *
 * The function returns -1 on failure to read a line (including end-of-file
 * condition).
 */
static ssize_t readline(char *buffer, size_t size, FILE *stream)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	ssize_t ncopied = -1;

	nread = getline(&line, &len, stream);
	if (nread != -1) {
		// copy at most size - 1 bytes
		ncopied = nread < (ssize_t)size - 1 ? nread : (ssize_t)size - 1;
		memcpy(buffer, line, ncopied);
		// terminating null byte
		buffer[size] = '\0';
	}
	free(line);

	return ncopied;
}

int main(void)
{
	/* à compléter: corps de main */
	char buffer[BUFFER_LEN];
	ssize_t nread;

	printf("Entrez une chaine quelconque : ");
	nread = readline(buffer, BUFFER_LEN, stdin);

	ssize_t upperCount = 0;
	ssize_t lowerCount = 0;
	for (ssize_t i = 0; i < nread; i++)
	{
		char current = buffer[i];
		if (current >= 97 && current <= 122) lowerCount++;
		else if (current >= 65 && current <= 90) upperCount++;
	}
	

	printf("lowercase: %ld\n", lowerCount);
	printf("uppercase: %ld\n", upperCount);
	printf("other: %ld\n", nread - upperCount - lowerCount -1); // Remove last 0

	return EXIT_SUCCESS;
}
