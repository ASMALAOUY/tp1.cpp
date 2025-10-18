#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    string titulaire;
    double solde;
public:
    CompteBancaire(string nom, double montantInitial) {
        titulaire = nom;
        solde = montantInitial;
    }

    void depot(double montant);
    void retrait(double montant);
    void afficher();
};

void CompteBancaire::depot(double montant) {
    solde += montant;
    cout << "Solde après dépôt : " << solde << endl;
}

void CompteBancaire::retrait(double montant) {
    if (montant <= solde) {
        solde -= montant;
        cout << "Solde après retrait : " << solde << endl;
    } else {
        cout << "Solde insuffisant pour effectuer le retrait." << endl;
    }
}

void CompteBancaire::afficher() {
    cout << "Titulaire : " << titulaire << endl;
    cout << "Solde actuel : " << solde << endl;
}

int main() {
    CompteBancaire compte1("Mohamed Lachgar", 500.0);
    compte1.depot(200.0);
    compte1.retrait(150.0);
    compte1.afficher();
    return 0;
}
