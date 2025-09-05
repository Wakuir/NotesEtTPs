# Pointeurs et allocation dynamique de mémoire

## Pointeurs

### Exemple d'utilisation -> passage de paramètres modifiés par une fonction

- Sans pointeurs  

    ```
    int inc(int n) {
        return n + 1;
    }

    int main() {
        int n = 3
        n = inc(n); // n = 4;
        return 0;
    }
    ```

- Avec pointeurs

```
void inc2(int *n) {
    *n = *n + 1;
}

int main() {
    int n = 3
    inc(&n); // n = 4;
    return 0;
}
```

- Remarques :
    - int *n = int * n = int* n
    - Lorsque un argument est passé, une copie est faite

### Déclaration

#### Utilisation de &

```
int var = 0;
int * ptr = &var ; // -> adresse de `var`
int var2 = *ptr; // -> valeur de var
```

#### Pointeurs et tableaux

```
int tab[5];
int p = &tab; // -> pointe sur le premier élément
```

=> `p` et `tab` sont équivalents mais `ptr` peut être redirigé vers un autre tableau  
=> tab[1] <=> p[1] <=> \*(p+1) <=> \*(tab+1)  
=> &tab[1] <=> &p[1] <=> &\*(p+1) <=> &\*(tab+1)  

Passer d'un élément

## Allocation dynamique de mémoire

Les blocs de mémoire alloués dans le `tas` durent jusqu'à la fin de l'application et sont accessibles de partout, à condition de connaître l'adresse du bloc.

### Allocation dynamique

Utilisation de `void *malloc(){}`

```
int *tab = (int *) malloc(nb * sizeof(int)); // nb est le nombre d'éléments dans le tableau    
if(tab == NULL) {
    // Échec de l'allocation
    perror("malloc a échoué");
}
```

### Si nb est connu lors de l'écriture

```
int tab[nb]; // tableau statique
```

### Libérer la mémoire

Utilisation de `void *freelloc(void *ptr){}`

```
free(tab);
tab = NULL;
```