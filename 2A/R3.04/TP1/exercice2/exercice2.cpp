#include <cstdlib>
#include "EntierContraint.h"

using namespace std;


int main(int argc, char** argv) {
    
    // à compléter
    EntierContraint entier(0, -1, 1);

    cout << "Test de getVal()" << endl
         << "Valeur attendue : " << 0 << endl
         << "Valeur obtenue : " << entier.getVal() << endl
         << (entier.getVal() == 0 ? "Succès" : "Echec") << endl;

    cout << "Test de getMin()" << endl
         << "Valeur attendue : " << -1 << endl
         << "Valeur obtenue : " << entier.getMin() << endl
         << (entier.getMin() == -1 ? "Succès" : "Echec") << endl;

    cout << "Test de getVal()" << endl
         << "Valeur attendue : " << 0 << endl
         << "Valeur obtenue : " << entier.getVal() << endl
         << (entier.getVal() == 0 ? "Succès" : "Echec") << endl;

    cout << "Test de setVal()" << endl;
    try {
        entier.setVal(-2);
        cout << "Echec : pas d’exception levée" << endl ;
    }
    catch (char const * erreur) {
        cout << "Succès : exception levée : " << erreur << endl ;
    }

    return 0;
}

