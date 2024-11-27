#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); 

    int choixJoueur;
    int choixOrdi;
    int scoreJoueur = 0;
    int scoreOrdi = 0;

    cout << "Bienvenue dans le jeu 'Pierre, Feuille, Ciseaux' !" << endl;
    cout << "Vous allez jouer 3 manches contre l'ordinateur." << endl;

    for (int manche = 1; manche <= 3; ++manche) {
        cout << "\nManche " << manche << " :" << endl;
        cout << "Faites votre choix : " << endl;
        cout << "1. Pierre  🪨 " << endl;
        cout << "2. Feuille 📄 " << endl;
        cout << "3. Ciseaux ✂️ " << endl;
        cout << "Entrez votre choix : ";
        cin >> choixJoueur;

     
        choixOrdi = rand() % 3 + 1;

        cout << "L'ordinateur a choisi : ";
        if (choixOrdi == 1) cout << "Pierre" << endl;
        else if (choixOrdi == 2) cout << "Feuille" << endl;
        else if (choixOrdi == 3) cout << "Ciseaux" << endl;

      
        if (choixJoueur == choixOrdi) {
            cout << "Egalité !" << endl;
        } else if ((choixJoueur == 1 && choixOrdi == 3) ||
                   (choixJoueur == 2 && choixOrdi == 1) ||
                   (choixJoueur == 3 && choixOrdi == 2)) {
            cout << "Vous avez gagné cette manche 👏 !" << endl;
            ++scoreJoueur;
        } else {
            cout << "L'ordinateur a gagné cette manche. 🤖 " << endl;
            ++scoreOrdi;
        }
    }
    
    cout << "\n=== Résultat Final ===" << endl;
    cout << "Votre score : " << scoreJoueur << endl;
    cout << "Score de l'ordinateur : " << scoreOrdi << endl;

    if (scoreJoueur > scoreOrdi) {
        cout << "Félicitations, vous avez remporté le match ! 🎉 ✨"  << endl;
    } else if (scoreJoueur < scoreOrdi) {
        cout << "Dommage, l'ordinateur a remporté le match.😓 " << endl;
    } else {
        cout << "Le match se termine par une égalité !" << endl;
    }

    return 0;
}
