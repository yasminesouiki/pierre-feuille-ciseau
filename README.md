# pierre-feuille-ciseau

Ce projet implémente le célèbre jeu "Pierre, Feuille, Ciseaux" en utilisant le langage C++. Le joueur affronte l'ordinateur dans une série de 3 manches, et le programme détermine le vainqueur final en fonction des scores.

# 📝 Règles du jeu:
1- Pierre bat Ciseaux : La pierre écrase les ciseaux.

2- Ciseaux battent Feuille : Les ciseaux coupent la feuille.

3- Feuille bat Pierre : La feuille recouvre la pierre.
Si les deux joueurs font le même choix, la manche est une égalité.
# ⚙️ Fonctionnalités:
Le joueur joue 3 manches contre un adversaire contrôlé par l'ordinateur.

Les choix de l'ordinateur sont générés de manière aléatoire.

Le score est calculé après chaque manche, et un résultat final est affiché à la fin du jeu.

# 📂 Structure du code:
Le jeu suit une structure simple :

1- Initialisation des variables : Les scores du joueur et de l'ordinateur sont initialisés à 0.

2- Boucle des manches : Le jeu se répète 3 fois. À chaque manche :

3- Le joueur fait un choix (1 = Pierre, 2 = Feuille, 3 = Ciseaux).

4- L'ordinateur génère un choix aléatoire.

5- Le programme détermine le vainqueur de la manche.
6- Calcul du score final : Le programme compare les scores du joueur et de l'ordinateur pour déterminer le vainqueur global.
