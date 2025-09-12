// Dans le fichier d'implémentation d'une classe, on doit inclure le fichier de spécification de cette classe
#include "Point.h"

// Et on inclura aussi les librairies utilisées ici
#include <iostream>
#include <string>

// A COMPLETER - Implémenter les méthodes de la classe Point
using namespace std;

const string NOM_DEF = "";
const int X_DEF = 0;
const int Y_DEF = 0;

Point::Point() {
    nom = NOM_DEF;
    x = X_DEF;
    y = Y_DEF;
    cout << "Le point " + nom + "a été ajouté" << endl;
}

Point::Point(const std::string &nom, const int x, const int y) : nom(nom), x(x), y(y) {
    cout << "Le point " + nom + " a été ajouté" << endl;
}

Point::~Point() {
    cout << "Le point " + nom + "a été supprimé" << endl;
}

std::string Point::getNom() const {
    return this->nom;
}

int Point::getX() const {
    return this->x;
}

int Point::getY() const {
    return this->y;
}

void Point::setNom(const string & nom) {
    this->nom = nom;
}

void Point::setX(const int x) {
    this->x = x;
}

void Point::setY(const int y) {
    this->y = y;
}

void Point::saisir(std::istream &entree) {
    cout << "Saisir un nom, une abscisse et une ordonnée :" << endl;
    entree >> nom >> x >> y;
}

void Point::afficher(std::ostream &sortie) const {
    sortie << nom + ": (" << x << ", " << y << ")" << endl;
}
