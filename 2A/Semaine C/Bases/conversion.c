#include <stdio.h>
#include <stdlib.h>

float celsius(float farenheit) {
    return 5.0f / 9.0f * (farenheit - 32);
}

int main() {
    printf("-----------------------\n");
    printf("Farenheit\tCelsius\n");
    printf("-----------------------\n");

	for (int i = 0; i < 200; i += 20)
    {
        printf("\t%d\t%f\n", i , celsius(i));
    }
    
	
	return EXIT_SUCCESS;
}