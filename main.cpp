#include <iostream>
#include <windows.h>

using namespace std;

const int NB_PARAG = 6;
const int NB_CHOIX = 5;
const int NB_LIENS = 5;

typedef struct
{
    int lienChoix[NB_LIENS];
    int idTableau;
    string titre;
    string texteParag[NB_PARAG];
    string texteChoix[NB_CHOIX];

} TABLEAU;

int main()
{
    // Fonctions
    int dessinerTableau(TABLEAU tableau); // Fonction pour dessiner un tableau
    int chargerTableaux(TABLEAU * tableau);
    void effacerEcran();

    // Constantes
    const COORD POS_ACTION = {10,25};
    const int TABLEAU_DEPART = 1;

    // Variables
    TABLEAU tableauActuel;
    int choix;

    TABLEAU tableau[10];

    tableauActuel.idTableau = TABLEAU_DEPART;

    // 1. Charger les tableaux en mémoire
    // 2. Algorithme du jeu :
    //  2.1 Afficher le tableau

    effacerEcran();
    chargerTableaux(tableau);
    dessinerTableau(tableau[tableauActuel.idTableau]);

    cin >> choix;
    //  2.2 Demander l'action
    //  2.3 Changer le tableau actif

    return 0;
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
    // Fonctions

    // Variables
    //short pos1=0, pos2=15;
    //COORD posTitre = {8, 0};
    CONSOLE_SCREEN_BUFFER_INFO s;
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

    // Initialisation
    GetConsoleScreenBufferInfo(console, &s);

    // Algorithme

    //  2.1 Afficher le tableau
    //    2.1.1 Afficher l'entete
    cout << endl;
    cout << "		 _    _            ___                  _   ____  " << endl;
    cout << "		| | _(_)_ __ ___  / _ \\ _   _  ___  ___| |_|___ \\ " << endl;
    cout << "		| |/ / | '_ ` _ \\| | | | | | |/ _ \\/ __| __| __) |" << endl;
    cout << "		|   <| | | | | | | |_| | |_| |  __/\\__ \\ |_ / __/ " << endl;
    cout << "		|_|\\_\\_|_| |_| |_|\\__\\_\\\\__,_|\\___||___/\\__|_____|" << endl;

    //	  2.1.2 Afficher le texte et les actions
    // Titre
    cout << endl;
    cout << "\t" << tableau.titre << endl << endl;

    // Paragraphes
    for(int i=0; i<NB_PARAG; ++i)
    {
        cout << "\t" << tableau.texteParag[i] << endl;
    }
    cout << endl << endl;

    // Actions
    for(int i=0; i<NB_CHOIX; ++i)
    {
        cout << "\t  " << tableau.texteChoix[i] << endl;
    }

    // Action :
    cout << endl;
    cout << "\t\t Action : ";

    return 0;
}

// Cette fonction charge en mémoire les tableaux
int chargerTableaux(TABLEAU * tableau)
{
    int numT=0; // index pour les tableaux

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 1
    tableau[numT].idTableau = numT; // numT = 0
    tableau[numT].lienChoix[0] = 1;
    tableau[numT].lienChoix[1] = 2;
    tableau[numT].lienChoix[2] = 3;
    tableau[numT].lienChoix[3] = 4;
    tableau[numT].lienChoix[4] = 5;
    tableau[numT].titre = "Prologue";
    tableau[numT].texteParag[0] = "   Texte du chapitre. Cette partie doit \210tre bien format\202e et surtout";
    tableau[numT].texteParag[1] = "ne pas contenir d'accents ou de caract\212res weird. Kim Pendragon se";
    tableau[numT].texteParag[2] = "promenait dans la for\210t en fredonnant un air a la mode. Soudain, son";
    tableau[numT].texteParag[3] = "attention fut retenue par un bruit \202trange provenant d'un buisson sur";
    tableau[numT].texteParag[4] = "sa gauche.";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "1. N'\202coutant que son courage, elle \202carte les branches ..";
    tableau[numT].texteChoix[1] = "2. Consid\202rant la possible pr\202sence d'araign\202es, elle vaporise";
    tableau[numT].texteChoix[2] = "   une quantit\202 d\202raisonable de Raid dans le buisson ..";
    tableau[numT].texteChoix[3] = "3. Interdite, elle recule lentement sans regarder derri\212re elle ..";
    tableau[numT].texteChoix[4] = "";
    //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//


    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 2
    numT++;
    tableau[numT].idTableau = numT; // numT = 1
    tableau[numT].lienChoix[0] = 1;
    tableau[numT].lienChoix[1] = 2;
    tableau[numT].lienChoix[2] = 3;
    tableau[numT].lienChoix[3] = 4;
    tableau[numT].lienChoix[4] = 5;
    tableau[numT].titre = "Prologue";
    tableau[numT].texteParag[0] = "   Texte du chapitre. Cette partie doit \210tre bien format\202e et surtout";
    tableau[numT].texteParag[1] = "ne pas contenir d'accents ou de caract\212res weird. Kim Pendragon se";
    tableau[numT].texteParag[2] = "promenait dans la for\210t en fredonnant un air a la mode. Soudain, son";
    tableau[numT].texteParag[3] = "attention fut retenue par un bruit \202trange provenant d'un buisson sur";
    tableau[numT].texteParag[4] = "sa gauche.";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "1. N'\202coutant que son courage, elle \202carte les branches ..";
    tableau[numT].texteChoix[1] = "2. Consid\202rant la possible pr\202sence d'araign\202es, elle vaporise";
    tableau[numT].texteChoix[2] = "   une quantit\202 d\202raisonable de Raid dans le buisson ..";
    tableau[numT].texteChoix[3] = "3. Interdite, elle recule lentement sans regarder derri\212re elle ..";
    tableau[numT].texteChoix[4] = "";
    //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    return 0;
}

