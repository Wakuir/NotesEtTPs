# Éléments de base

## Différences Java / C
- Gestion de la mémoire
- Classes / Structures
- String / char[]

## Hello World !
- Fonction main :
```
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Bonjour Monde !");
    return EXIT_SUCCESS;
}
```

## Compilation

`$ gcc source.c -o exec`  
    -> génère un fichier binaire exécutable nommé `exec`

Options pour afficher les warnings : `-Wall -Wextra`  
Option pour debug : `-g`

Commande complète : `$ gcc source.c -Wall -Wextra -g -o exec`

## Types

- Types entiers :
    - `char` (1 octet) : [-128; 127]
    - `unsigned char` (1 octet) : [0; 255]
- Entiers relatifs :
    - int, int8_t, int16_t
- Entiers naturels :
    - uint, uint8_t, uint16_t (`stdint.h`)
- Réels :
    - float (32 bits), double (64 bits) -> Norme `IEEE754`

- Chaînes de caractères :
    - char[]

## Entrée / Sortie standard

- Afficher à l'écran : `printf("val = %d\n", val)  
-> Affiche "val = LA_VALEUR_DE_VAL"

- Formats courants :
    - %c : caractère
    - %f : float
    - %s : string
    - %p : pointeur

- Lire une entrée : 
```
int a, b;
printf("saisir deux entiers");
scanf("%d, %d", &a, &b);
```

## Les paramètres de la fonction main

`int main(int argc, char *argv[]) {}`

- argc : le nombre d'arguments passés + 1 (le premier est le nom du programme)
- argv : tableau de pointeurs sur des char (liste de chaînes de caractères)
