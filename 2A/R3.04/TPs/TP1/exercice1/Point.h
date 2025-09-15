// Les 2 directives ci-cessous permettent d'éviter les problèmes d'inclusions multiples d'une même classe
#ifndef POINT_H
#define POINT_H

// On inclut les librairies utilisées dans le fichier
#include <iostream>
#include <string>
// Attention : pas de clause "using namespace" dans un fichier ".h" !

class Point {

    // A COMPLETER - Spécifier la classe Point
public:
    Point();
    Point(const std::string & nom, int x, int y);
    ~Point();
    std::string getNom() const;
    int getX() const;
    int getY() const;
    void setNom(const std::string & nom);
    void setX(int x);
    void setY(int y);
    void saisir(std::istream & entree);
    void afficher(std::ostream & sortie) const;

private:
    std::string nom;
    int x, y;
};

#endif /* POINT_H */

