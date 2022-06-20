#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Perso{
    private:
        char NomPerso[20];
        int HP = 20;
        char NomArme[20];
        int DgtArme = 3;
        int Potion = 10;

    public:
        Perso(char* NomPerso, char* NomArme, int DgtArme);

        char* getNomPerso();
        int* getHP();
        char* getNomArme();
        int* getDgtArme();
        int* getPotion();

        void setNomArme(char* NomNewArme);
        void setDgtArme(int* DgtNewArme);

        void afficher();
        friend int compare(const Perso &p1, const Perso &p2);
};

Perso::Perso(char* NPerso, char* NomNewArme, int DgtNewArme){
    strcpy(this->NomPerso, NPerso);
    strcpy(this->NomArme, NomNewArme);
    DgtArme = DgtNewArme;
}

int* Perso::getHP(){
    return this -> HP;
}

int main(){
    cout << HP;
}