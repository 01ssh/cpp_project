#include <iostream>
using namespace std;

int main(){

    char letter; // Déclaration d'une variable de type char
    int counter; // Déclaration d'une variable de type int

    for (letter = 'a'; letter <= 'z'; letter++){ // Boucle de 'a' à 'z'
        cout << letter; // Affiche la lettre
        counter = counter + 1; // Incrémente le compteur
        if (counter == 5){ // Si le compteur est égal à 5 affiche la lettre suivante
            cout << "\n" << "\n";
            
            counter = 0; // Réinitialise le compteur
        }

    }

    return 0;
}