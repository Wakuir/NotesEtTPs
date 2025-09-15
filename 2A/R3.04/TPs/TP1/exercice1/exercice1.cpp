#include <cstdlib>
#include <iostream>
#include <string>
#include "Point.h"

using namespace std;

void testClassePoint(const string &nom, const int x, const int y) {
    Point p(nom, x, y);
    cout << "Test de getNom()" << endl
         << "Valeur attendue : " << nom << endl
         << "Valeur obtenue : " << p.getNom() << endl
         << (p.getNom() == nom ? "Succès" : "Echec") << endl;

    cout << "Test de getX()" << endl
         << "Valeur attendue : " << x << endl
         << "Valeur obtenue : " << p.getX() << endl
         << (p.getX() == x ? "Succès" : "Echec") << endl;

    cout << "Test de getY()" << endl
         << "Valeur attendue : " << y << endl
         << "Valeur obtenue : " << p.getY() << endl
         << (p.getY() == y ? "Succès" : "Echec") << endl;

    const string newNom = nom + "ljskdfhisjhflkjsg";
    p.setNom(newNom);
    cout << "Test de setNom()" << endl
         << "Valeur attendue : " << newNom << endl
         << "Valeur obtenue : " << p.getNom() << endl
         << (p.getNom() == newNom ? "Succès" : "Echec") << endl;

    const int newX = x + 1000;
    p.setX(newX);
    cout << "Test de setX()" << endl
         << "Valeur attendue : " << newX << endl
         << "Valeur obtenue : " << p.getX() << endl
         << (p.getX() == newX ? "Succès" : "Echec") << endl;

    const int newY = y + 1000;
    p.setY(newY);
    cout << "Test de setX()" << endl
         << "Valeur attendue : " << newY << endl
         << "Valeur obtenue : " << p.getY() << endl
         << (p.getY() == newY ? "Succès" : "Echec") << endl;
}

void testClassePointDynamique(const string &nom, const int x, const int y) {
    auto p = new Point(nom, x, y);
    cout << "Test de getNom()" << endl
         << "Valeur attendue : " << nom << endl
         << "Valeur obtenue : " << p->getNom() << endl
         << (p->getNom() == nom ? "Succès" : "Echec") << endl;

    cout << "Test de getX()" << endl
         << "Valeur attendue : " << x << endl
         << "Valeur obtenue : " << p->getX() << endl
         << (p->getX() == x ? "Succès" : "Echec") << endl;

    cout << "Test de getY()" << endl
         << "Valeur attendue : " << y << endl
         << "Valeur obtenue : " << p->getY() << endl
         << (p->getY() == y ? "Succès" : "Echec") << endl;

    const string newNom = nom + "ljskdfhisjhflkjsg";
    p->setNom(newNom);
    cout << "Test de setNom()" << endl
         << "Valeur attendue : " << newNom << endl
         << "Valeur obtenue : " << p->getNom() << endl
         << (p->getNom() == newNom ? "Succès" : "Echec") << endl;

    const int newX = x + 1000;
    p->setX(newX);
    cout << "Test de setX()" << endl
         << "Valeur attendue : " << newX << endl
         << "Valeur obtenue : " << p->getX() << endl
         << (p->getX() == newX ? "Succès" : "Echec") << endl;

    const int newY = y + 1000;
    p->setY(newY);
    cout << "Test de setX()" << endl
         << "Valeur attendue : " << newY << endl
         << "Valeur obtenue : " << p->getY() << endl
         << (p->getY() == newY ? "Succès" : "Echec") << endl;

    delete p;
}

int main(int argc, char **argv) {
    // à compléter
    testClassePointDynamique("nom", 0, 0);
    return 0;
}
