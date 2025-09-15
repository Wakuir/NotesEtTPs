# Notions de bases en C++

## Différences entre C et C++

### Les types références 

```
void truc(int & a) {
    // utiliser a revient à utiliser *a en C si on avait int *a;
    // On passe directement l'objet et le compilateur s'occupe de transformer l'objet en référence si il est attendu comme tel dans la fonction.
}

int main() {
    int a = 0;
    truc(a); // Le compilateur comprend qu'il faut passer une référence à a.
}
```

On ne peut pas changer la cible d'une référence.

### Surcharge de fonctions

```{C}
// Impossible d'avoir deux fonction du même nom (même avec signatures différentes) comme ci dessous
void fonction(Type1 arg) {};
void fonction(Type2 arg) {};
```

```{C++}
// Possible en C++
void fonction(Type1 arg) {};
void fonction(Type2 arg) {};
```

### Valeurs par défaut des paramètres

Les paramètres avec valeur par défaut doivent être après tous les paramètres sans valeur par défaut.

```
// Si on ne précise pas la valeur de y, y vaudra 4
int f1(int x, int y = 4) { 
    return x + y;
};
```

### Constantes en C++

Utiliser le qualificateur `const`

```
const int TAILLE = 5;
```

#### Pointeurs constants

`const int * const p;` se lit de gauche à droite : p est une constante qui contient un pointeur vers un entier constant

### Entrée / Sortie standards

On utilise la bibliothèque `iostream` (flux d'entrée / sortie). 

Deux objets : 
- cout -> sortie standard
- cin -> entrée standard

Ils viennent de l'espace de nom `std`

Utilisation : `std::cout` ou `std::cin` ou juste cout et cin si on a précisé en entête `using namespace std;`

## Passage de paramètres de fonctions

- Par valeur : on copie la valeur de tous les attributs de l'objet
- Par référence : on donne seulement le pointeur (moins coûteux)

## Constructeur de recopie

`T::T(const & T o) = default` 
On met default si on veut que les arguments soient recopiés un à un.  
Sinon, on définit comment chacun des attributs va se créer à partir des attributs de l'autre objet.  

Appel de ce constructeur : `T t1(t);` T est le type, t1 la variable qu'on construit et t l'objet de base.
La même chose est exécuté si on `déclare` t1 comme ça : `T t1 = t;`

## Forme Canonique de Coplien

Un classe est dite sous la forme canonique de Coplien si elle définit ces 4 méthodes :
```
T::T()                                  | Constructeur
T::T(const T& objetCopié)               | Constructeur de recopie
T& T::operator=(const T& objetCopié)    | Opérateur d'affectation
T::~T()                                 | Desctructeur
```
