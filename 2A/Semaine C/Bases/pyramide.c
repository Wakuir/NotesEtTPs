#include <stdio.h>
#include <stdlib.h>

void putchars(unsigned int repeat, char ch)
{
    for (size_t i = 0; i < repeat; i++)
    {
        putchar(ch);
    }
}

int main(int argc, char *argv[])
{
    unsigned int h;
    char ch;

    if (argc == 1)
    {
        printf("hauteur ? ");
        scanf("\n%d", &h);
        ch = '*';
    }
    else if (argc == 3)
    {
        h = atoi(argv[1]);
        ch = *argv[2];
    }
    else return EXIT_FAILURE;

    unsigned int numChars = 1;
    unsigned int numSpaceSides = h - 1;

    for (size_t i = 0; i < h; i++)
    {
        putchars(numSpaceSides, ' ');
        putchars(numChars, ch);
        putchars(numSpaceSides, ' ');
        printf("\n");

        numSpaceSides--;
        numChars += 2;
    }

    return EXIT_SUCCESS;
}