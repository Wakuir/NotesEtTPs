# Programmation modulaire

## Modularisation

- 2 modules : main.c & image.c

main.c 
```
int main() {
    Floute(image);
    Pixelise(image;)
}
```

image.c
```
void Floute(image_t *image) {
    ...
}

void Pixelise(image_t *image) {
    ...
}
```

4 étapes : 

1. Créer `image.h` (même nom que source)  
```
typedef image_t ...;
void Floute(image_t *image);
void Pixelise(image_t *image);
```

2. Inclure `image.h` dans `main.c` et `image.c` (le premier pour utiliser et le deuxième pour lier):  
`#include "image.h"` (pas de `<>`)

3. Compiler les 2 modules (`main.c` et `image.c`):  
`gcc -c main.c` -> crée `main.o`
`gcc -c image.c` -> crée `image.o`

4. Lier les deux fichiers objet (éditer les liens) :
`gcc main.o image.o -o run` -> crée l'éxécutable `run`

## Makefile

On va créer un makefile qui va expliquer comment construire l'application de façon efficace.  
On soumettra le makefile à `make`.  

### Les règles

Elles définissent ce qui doit être compilé :  

- `cible`: `pré-requis`  
\t  `commande` (tabulation obligatoire)

Une règle est une `commande` qui est exécuté pour construire une `cible` à l'aide de `pré-requis` uniquement si la `cible` est inexistante ou les `pré-requis` sont plus récents que la `cible`

La récursivité est possible car une `cible` peut aussi être un `pré-requis`

### Exemple de makefile simple

```
            prog
             /\
            /  \
           /    \
       main.o  image.o
        /\       /\
       /  \     /  \
    main.c image.h image.c
```

Contenu du makefile :

`Makefile`
```
prog: main.o image.o
    gcc main.o image.o -o prog

main.o: main.c image.h
    gcc -c -Wall -Wextra main.c

image.o: image.c image.h
    gcc -c -Wall -Wextra image.c
```

### Utilisation du makefile : 

`$ make` (c'est tout)

### Variables et macro-commandes

On peut en définir comme ça :

`NOM = VALEUR`

Utilisation (récupération de la valeur) : 

`$(NOM)`

### Exemple de makefile plus complexe

```
BIN = prog
OBJECTS = main.o image.o
CC = gcc
CFLAGS = -Wall -Wextra

all: $(BIN)  # règle rebondit sur la suivante

$(BIN): $(OBJECTS)
    $(CC) $(OBJECTS) -o $(BIN)

main.o: main.c image.h
    $(CC) $(CFLAGS) -c main.c

image.o: image.c image.h
    $(CC) $(CFLAGS) -c image.c

clean: 
    rm $(OBJECTS) $(BIN)
```