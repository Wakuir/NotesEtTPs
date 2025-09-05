# Les fichiers

## Déclaration

```
File *f;
```

## Ouverture et fermeture

```
f = fopen("text.txt", "w"); // "w" = mode d'ouverture
fclose(f);
```

### Modes d'ouverture

- "w": write
- "r": read
- "a" : append (écrire après le contenu déjà existant du fichier)

## Accès séquentiel

- Lecture formatée : fscanf(fichier, format, params);
- Écriture formatée : fprintf(fichier, format, params);
- Lecture 1 caractère : int c = fgetc(f); // renvoie EOF si échec (fin de fichier)
- Écriture 1 caractère : int n = fputc(caractère, f);

## Accès direct

### Positionner la tête de l'ecture

int fseek(fichier, offset (long), origin (int))

#### Origines possibles

- SEEK_SET : Par rapport au début du fichier
- SEEK_CUR : Par rapport au dernier octet lu + 1 (prochain octet à lire)
- SEEK_END : Par rapport à la fin du fichier (offset devient négatif mais est donné en positif)

#### Connaître la position du prochain octet à lire

```
long pos = ftell(fichier); // retourne -1 en cas d'échec
```

### Lecture

```
size_t fread(void *ptr, size_t size, size_t nObj, fichier);
```

- size : taille d'un objet
- nObj : nombre d'objets à lire
- renvoie : le nombre d'`objets` lus

### Écriture

```
size_t fwrite(void *ptr, size_t size, size_t nObj, fichier);
```

- size : taille d'un objet
- nObj : nombre d'objets à lire
- renvoie : le nombre d'`OCTETS` écrits