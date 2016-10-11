#include <iostream>
#include <string>
#include <windows.h>
#include <locale>
#include "tableaux.h"
using namespace std;

int main()
{
    std::setlocale(LC_ALL, "fr_FR.UTF-8");

    /// Fonctions
    int dessinerTableau(TABLEAU); /// Fonction pour dessiner un tableau

    void effacerEcran();
    int effectuerAction(TABLEAU *, int, int);

    /// Constantes
    const COORD POS_ACTION = {10,25};
    const int TABLEAU_DEPART = 1;

    /// Variables
    int tableauActuel;
    int choix;

    TABLEAU tableau[100];

    tableauActuel = TABLEAU_DEPART;

    /// 1. Charger les tableaux en mémoire
    chargerTableaux(tableau);

    /// 2. Algorithme du jeu :
    ///  2.1 Afficher le tableau
    do
    {
        dessinerTableau(tableau[tableauActuel]);
        cin >> choix;
        tableauActuel = effectuerAction(tableau, tableauActuel, choix);
    } while (tableauActuel!=99);

    return 0;
}

int effectuerAction(TABLEAU * tabl, int tablActuel, int chx)
{
    /// Cas spécial, pour un tableau sans choix
    if(tabl[tablActuel].lienChoix[0])
        return tabl[tablActuel].lienChoix[0];

    /// On vérifie si le choix existe au tabl actuel
    /// Si !=0, on assigne le nouveau tabl
    switch (chx)
    {
    case 1:
        if(tabl[tablActuel].lienChoix[1])
            return tabl[tablActuel].lienChoix[1];
    case 2:
        if(tabl[tablActuel].lienChoix[2])
            return tabl[tablActuel].lienChoix[2];
    case 3:
        if(tabl[tablActuel].lienChoix[3])
            return tabl[tablActuel].lienChoix[3];
    case 4:
        if(tabl[tablActuel].lienChoix[4])
            return tabl[tablActuel].lienChoix[4];
    }

    /// Aucun choix valide, on recharge le même tableau
    return tablActuel;
}

void effacerEcran() {
    char fill = ' ';
    COORD tl = {0,0};
    CONSOLE_SCREEN_BUFFER_INFO s;
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(console, &s);
    DWORD written, cells = s.dwSize.X * s.dwSize.Y;
    FillConsoleOutputCharacter(console, fill, cells, tl, &written);
    FillConsoleOutputAttribute(console, s.wAttributes, cells, tl, &written);
    SetConsoleCursorPosition(console, tl);
}

int dessinerTableau(TABLEAU tableau)
{
    /// Fonctions
    void effacerEcran();

    /// Variables
    //short pos1=0, pos2=15;
    //COORD posTitre = {8, 0};
    CONSOLE_SCREEN_BUFFER_INFO s;

    /// Initialisation
    effacerEcran();
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

    GetConsoleScreenBufferInfo(console, &s);

    /// Algorithme

    ///  2.1 Afficher le tableau
    ///    2.1.1 Afficher l'entete
    cout << endl;
    cout << "		 _    _            ___                  _   ____  " << endl;
    cout << "		| | _(_)_ __ ___  / _ \\ _   _  ___  ___| |_|___ \\ " << endl;
    cout << "		| |/ / | '_ ` _ \\| | | | | | |/ _ \\/ __| __| __) |" << endl;
    cout << "		|   <| | | | | | | |_| | |_| |  __/\\__ \\ |_ / __/ " << endl;
    cout << "		|_|\\_\\_|_| |_| |_|\\__\\_\\\\__,_|\\___||___/\\__|_____|" << endl;

    ///	  2.1.2 Afficher le texte et les actions
    /// Titre
    cout << endl;
    cout << "\t" << tableau.titre << endl << endl;

    /// Paragraphes
    for(int i=0; i<NB_PARAG; ++i)
    {
        cout << "\t" << tableau.texteParag[i] << endl;
    }
    cout << endl << endl;

    /// Actions
    for(int i=0; i<NB_CHOIX; ++i)
    {
        cout << "\t" << tableau.texteChoix[i] << endl;
    }

    /// Action :
    cout << endl;
    cout << "\t\t Action : ";

    return 0;
}
