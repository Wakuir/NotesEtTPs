# Conception et Programmation Objet Avancées

## Patron de fonction (fonctions génériques)

```
template <class T>
T min(T a, T b) {
    if (a < b) return a; 
    else return b;
}
```

Appel de la fonction : `int min = min<int>(12, 15);`

## Patron de classe

```
template <class T, int n=10>
class Tableau {
    T m_Tab[n];
    public:
    Tableau();
    void ajouterElement(T e);
    ...
}
```

Instanciation : `Tableau <Personne *> t2(10);`

## Standard Template Library

### Les patrons "conteneurs" de la STL

- Conteneurs séquentiels:
    - vector<T>
    - deque<T>
    - list<T>
    - array<T>
    - forward_list<T>

### Les algorithmes de la STL

- Les itérateurs