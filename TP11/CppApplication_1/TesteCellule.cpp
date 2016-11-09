/* 
 * File:   TestCellules.cpp
 * Author: hb
 *
 * Created on 16 août 2014, 17:53
 */

#include <cstdlib>
#include <iostream>

#include "Cellule.h"

using namespace std;

/**
 * Une procédure modèle qui affiche des Cellules contenant n'importe quel type d'information
 * ATTENTION il faut que les éléments puissent s'afficher savec la méthode
 *            -> affiche() de la classe Cellule
 * 
 * @param unePile
 */
template<typename TypeInfo>
void afficheCellules(Cellule<TypeInfo>* ptrCell) {
    //variable pour le parcours le la liste de cellules initialisée avec la valeur du paramètre effectif
    Cellule<TypeInfo>* ptrCellCour;
    // Initialisaton
    ptrCellCour = ptrCell;
    cout << "la liste de cellules contient -> ";
    // Tant qu'il y a une cellule
    while (ptrCellCour) {
        // Afficher le contenu de la Cellule courante
        ptrCellCour->affiche();
        cout << ' ';
        // Avancer sur la Cellule suivante
        ptrCellCour = ptrCellCour->getSuivante();
    }
    cout << endl;
} // end afficheCellulesFromCell

int main() {
    /*
     * UNE TRACE DU RESULTAT A OBTENIR EST PROPOSEE EN FIN DE FICHIER
     */

    // PREMIERE PARTIE
    cout << "MANIPULATION DE POINTEUR SUR DES CELLULES CONTENANT DES ENTIERS" << endl;
    // Déclarer et construire une variable ptrCelInt1 de type pointeur sur une Cellule entière (Cellule<int>*) contenant la valeur 2
    /*
     * A COMPLETER, une instruction
     */

    cout << "L'information portée par la cellule CelInt1 est : ";
    // Afficher l'information portée par la cellule
    /*
     * A COMPLETER, une instruction
     */

    cout << endl;

    // Déclarer et construire une variable ptrCelInt2 de type pointeur sur une Cellule entière (Cellule<int>*) contenant la valeur 3
    /*
     * A COMPLETER, une instruction
     */

    // Faire en sorte que CelInt2 soit la cellule qui suit la cellule CelInt1
    /*
     * A COMPLETER, une instruction
     */

    // Afficher la liste dont la tête de liste est CelInt2 avec la procédure afficheCellules()
    cout << "A partir de CelInt2, ";
    /*
     * A COMPLETER, une instruction
     */

    // Déclarer et construire une variable ptrCelInt3 de type pointeur sur une Cellule entière (Cellule<int>*) contenant la valeur 1
    // et qui est suivie de CelInt1
    /*
     * A COMPLETER, une instruction
     */

    // Afficher la liste dont la tête de liste est CelInt3 avec la procédure afficheCellules()
    cout << "A partir de CelInt3, ";
    /*
     * A COMPLETER, une instruction
     */


    // DEUXIEME PARTIE
    cout << endl << endl << "MANIPULATION DE CELLULES CONTENANT DES ENTIERS" << endl;
    // Déclarer et construire une variable CelInt1 de type Cellule entière (Cellule<int>) contenant la valeur 2
    /*
     * A COMPLETER, une instruction
     */

    cout << "L'information portée par la cellule CelInt1 est : ";
    // Afficher l'information portée par la cellule
    /*
     * A COMPLETER, une instruction
     */

    cout << endl;

    // Déclarer et construire une variable ptrCelInt2 de type Cellule entière (Cellule<int>) contenant la valeur 3
    /*
     * A COMPLETER, une instruction
     */

    // Faire en sorte que CelInt2 soit la cellule qui suit la cellule CelInt1
    /*
     * A COMPLETER, une instruction
     */

    // Afficher la liste dont la tête de liste est CelInt2 avec la procédure afficheCellules()
    cout << "A partir de CelInt2, ";
    /*
     * A COMPLETER, une instruction
     */

    // Déclarer et construire une variable ptrCelInt3 de type Cellule entière (Cellule<int>) contenant la valeur 1
    // et qui est suivie de CelInt1
    /*
     * A COMPLETER, une instruction
     */

    // Afficher la liste dont la tête de liste est CelInt3 avec la procédure afficheCellules()
    cout << "A partir de CelInt3, ";
    /*
     * A COMPLETER, une instruction
     */


    // TROISIEME PARTIE
    cout << endl << endl << "MANIPULATION DE POINTEUR SUR DES CELLULES CONTENANT DES CHAINES" << endl;
    // Déclarer et construire une variable ptrCelString1 de type pointeur sur une Cellule entière (Cellule<string>*) contenant la valeur "deux"
    /*
     * A COMPLETER, une instruction
     */

    cout << "L'information portée par la cellule CelString1 est : ";
    // Afficher l'information portée par la cellule
    /*
     * A COMPLETER, une instruction
     */

    cout << endl;

    // Déclarer et construire une variable ptrCelString2 de type pointeur sur une Cellule entière (Cellule<string>*) contenant la valeur "trois"
    /*
     * A COMPLETER, une instruction
     */

    // Faire en sorte que CelString2 soit la cellule qui suit la cellule CelString1
    /*
     * A COMPLETER, une instruction
     */

    // Afficher la liste dont la tête de liste est CelString2 avec la procédure afficheCellules()
    cout << "A partir de CelString2, ";
    /*
     * A COMPLETER, une instruction
     */

    // Déclarer et construire une variable ptrCelString3 de type pointeur sur une Cellule entière (Cellule<string>*) contenant la valeur "un"
    // et qui est suivie de CelString1
    /*
     * A COMPLETER, une instruction
     */

    // Afficher la liste dont la tête de liste est CelString3 avec la procédure afficheCellules()
    cout << "A partir de CelString3, ";
    /*
     * A COMPLETER, une instruction
     */


    // QUATRIEME PARTIE
    cout << endl << endl << "MANIPULATION DE CELLULES CONTENANT DES CHAINES" << endl;
    // Déclarer et construire une variable CelString1 de type Cellule entière (Cellule<string>) contenant la valeur "deux"
    /*
     * A COMPLETER, une instruction
     */

    cout << "L'information portée par la cellule CelString1 est : ";
    // Afficher l'information portée par la cellule
    /*
     * A COMPLETER, une instruction
     */

    cout << endl;

    // Déclarer et construire une variable ptrCelString2 de type Cellule entière (Cellule<string>) contenant la valeur "trois"
    /*
     * A COMPLETER, une instruction
     */


    // Faire en sorte que CelString2 soit la cellule qui suit la cellule CelString1
    /*
     * A COMPLETER, une instruction
     */

    // Afficher la liste dont la tête de liste est CelString2 avec la procédure afficheCellules()
    cout << "A partir de CelString2, ";
    /*
     * A COMPLETER, une instruction
     */

    // Déclarer et construire une variable ptrCelString3 de type Cellule entière (Cellule<string>) contenant la valeur "un"
    // et qui est suivie de CelString1
    /*
     * A COMPLETER, une instruction
     */

    // Afficher la liste dont la tête de liste est CelString3 avec la procédure afficheCellules()
    cout << "A partir de CelString3, ";
    /*
     * A COMPLETER, une instruction
     */

    return 0;
}

// TRACE A OBTENIR
/*
 MANIPULATION DE POINTEUR SUR DES CELLULES CONTENANT DES ENTIERS
L'information portée par la cellule CelInt1 est : 2
A partir de CelInt2, la liste de cellules contient -> 3 
A partir de CelInt3, la liste de cellules contient -> 1 2 3 

MANIPULATION DE CELLULES CONTENANT DES ENTIERS
L'information portée par la cellule CelInt1 est : 2
A partir de CelInt2, la liste de cellules contient -> 3 
A partir de CelInt3, la liste de cellules contient -> 1 2 3 

MANIPULATION DE POINTEUR SUR DES CELLULES CONTENANT DES CHAINES
L'information portée par la cellule CelString1 est : deux
A partir de CelString2, la liste de cellules contient -> trois 
A partir de CelString3, la liste de cellules contient -> un deux trois 

MANIPULATION DE CELLULES CONTENANT DES CHAINES
L'information portée par la cellule CelString1 est : deux
A partir de CelString2, la liste de cellules contient -> trois 
A partir de CelString3, la liste de cellules contient -> un deux trois 
 */

