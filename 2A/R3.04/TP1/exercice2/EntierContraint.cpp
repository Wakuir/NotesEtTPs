#include "EntierContraint.h"

// A COMPLETER
using namespace std;

EntierContraint::EntierContraint(const int valeur, const int min, int max) : min(min), max(max), val(valeur) {}

EntierContraint::~EntierContraint() = default;

int EntierContraint::getMin() const {
    return min;
}

int EntierContraint::getMax() const {
    return max;
}

int EntierContraint::getVal() const {
    return val;
}

void EntierContraint::setVal(const int valeur) {
    if (valeur < min || valeur > max) {
        throw "La valeur saisie est en dehors des bornes de l'intervalle !";
    }
    val = valeur;
}

void EntierContraint::saisir(istream &entree) {
    int newVal;
    entree >> newVal;
    setVal(newVal);
}

void EntierContraint::afficher(ostream &sortie) {
    sortie << val << endl;
}
