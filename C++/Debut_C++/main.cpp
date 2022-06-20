#include <iostream>
#include <string>

using namespace std;

int main(){

    string Perso;
    int TPv(20);
    int DgtArme(3);
    string NomArme("Baton");
    int Potion(10);

    string Choix;

    while(TPv > 0){

        cout << endl << "---Fiche Personnage---" << endl << endl;
        cout << "Nom : ";
        cin >> Perso;
        cout << endl << "Vie : "<< TPv << " HP" << endl << endl;
        cout << "Arme : "<< NomArme << " (" << DgtArme << " Dgt)" << endl << endl;

    }
}