# Structures

## Types structurés

Les structures permettent d'organiser les données. Ex :

```
struct Point {  
    int x;  
    int y;  
};  
```

## Initialisation

### Lors de la déclaration

```
struct Point p1 = {320, 240};
```

### Dans le corps du programme

```
struct Point p2;
.
.
.
p2.x = 3200;
p2.y = 2400;
p1 = p2;
```

## Pointeurs sur structures

```
struct Point *adr;

adr = &p1;

(*adr).x = 200; <=> adr->x = 200;
```

## Tableau de structures

```
strucct Point tabPoint[10];
// Accès au premier point :
tabPoint[0].x;
```

## Définition de types

`typedef` sert à créer de nouveaux nom de type. Exemple à ne pas faire : 
```
typedef int entier;
entier i, j; 
OU
typedef char *chaine; // BEURK
```

```
typedef struct Point {
    int x;
    int y;
} point_t;
```