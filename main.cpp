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
    /// Fonctions
    int dessinerTableau(TABLEAU); /// Fonction pour dessiner un tableau
    int chargerTableaux(TABLEAU *);
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
        cout << "\t  " << tableau.texteChoix[i] << endl;
    }

    /// Action :
    cout << endl;
    cout << "\t\t Action : ";

    return 0;
}

/// Cette fonction charge en mémoire les tableaux
int chargerTableaux(TABLEAU * tableau)
{
    int numT=0; /// index pour les tableaux
    ///=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    /// Definition du tableau 1
    numT++;
    tableau[numT].idTableau = numT; // numT = 0
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 2;
    tableau[numT].lienChoix[2] = 99;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Prologue";
    tableau[numT].texteParag[0] = "   Il était une fois, dans une contrée lointaine peuplée d'étranges";
    tableau[numT].texteParag[1] = "créatures, une petit royaume juché au sommet d'une colline escarpée";
    tableau[numT].texteParag[2] = "autant que fleurie, doté d'un nom que personne n'utilisait, lui pré-";
    tableau[numT].texteParag[3] = "férant celui de Fleurimont. Sur ce cadre enchanteur se lève le ri-";
    tableau[numT].texteParag[4] = "deau de l'histoire fantastique dont VOUS SEREZ L'HÉROINE ! ";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "1. Youpie! Qu'est-ce qu'on attend ?";
    tableau[numT].texteChoix[1] = "2. Ça fait peur ... Je crois que je vais me désister couardement.";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 2
    numT++;
    tableau[numT].idTableau = numT; // numT = 1
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 3;
    tableau[numT].lienChoix[2] = 0;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "An unexpected journey";
    tableau[numT].texteParag[0] = "   Kim Pendragon se promenait dans la forêt en fredonnant un air à";
    tableau[numT].texteParag[1] = "la mode. Elle était accompagné de ses pages: l'un, grand et mince, ";
    tableau[numT].texteParag[2] = "se nommait Joseph le Brave; L'autre, petit et dodu, avait pour nom";
    tableau[numT].texteParag[3] = "Antoine la Boule. Ayant pris de l'avance, Kim Pendragon se retourna";
    tableau[numT].texteParag[4] = "pour attendre sa suite. À sa grande surprise, le sentier derrière ";
    tableau[numT].texteParag[5] = "elle était désert! Antoine et Joseph avaient disparu!";
    tableau[numT].texteChoix[0] = "1. Mais c'est terrible! Que va-t-il se passer?";
    tableau[numT].texteChoix[1] = "";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 3
    numT++;
    tableau[numT].idTableau = numT; // numT = 2
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 4;
    tableau[numT].lienChoix[2] = 5;
    tableau[numT].lienChoix[3] = 6;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "L'aventure commence";
    tableau[numT].texteParag[0] = "   Kim Pendragon était faite du bois noble des héros de jadis, et";
    tableau[numT].texteParag[1] = "elle eut tôt fait de retrouver ses esprits. Paniquer était inutile:";
    tableau[numT].texteParag[2] = "il fallait immédiatement se mettre à la recherche des disparus.";
    tableau[numT].texteParag[3] = "   Un embranchement apparut sur le sentier. À droite, une sapinière;";
    tableau[numT].texteParag[4] = "tout droit, une zone de forêt plus dense; à gauche, des arburstres";
    tableau[numT].texteParag[5] = "tapissant le sol. Sans hésiter, Kim Pendragon …";
    tableau[numT].texteChoix[0] = "1. ... Prit le chemin de droite. Les sapins, ça sent bon!";
    tableau[numT].texteChoix[1] = "2. ... Continua tout droit. Il y a sûrement moins de moustiques.";
    tableau[numT].texteChoix[2] = "3. ... Décida d'aller vers les arbustres. Ils étaient certainement";
    tableau[numT].texteChoix[3] = "       chargés de petits fruits délicieux!";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 4
    numT++;
    tableau[numT].idTableau = numT; // numT = 3
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 7;
    tableau[numT].lienChoix[2] = 3;
    tableau[numT].lienChoix[3] = 5;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Cul de sac!";
    tableau[numT].texteParag[0] = "   Au bout de quelques mètres, Kim Pendragon dut s'arrêter. La sapi-";
    tableau[numT].texteParag[1] = "nière bordait une falaise infranchissable, de sorte qu'il était seul-";
    tableau[numT].texteParag[2] = "ement possible de faire demi-tour. Aperçevait-elle une légère ouver-";
    tableau[numT].texteParag[3] = "ture sur la gauche?";
    tableau[numT].texteParag[4] = "   Au sol, près d'un sapin vieux et torturé, poussaient des champi-";
    tableau[numT].texteParag[5] = "gnons d'un bleu clair desquels émanait une forte aura magique ... ";
    tableau[numT].texteChoix[0] = "1. Se penchant, Kim Pendragon saisit un champignon et y mordit à ";
    tableau[numT].texteChoix[1] = "   belles dents.";
    tableau[numT].texteChoix[2] = "2. Ignorant les champignons mystérieux, Kim Pendragon fit demi-tour.";
    tableau[numT].texteChoix[3] = "3. Au prix de quelques écorchures, Kim Pendragon se faufila entre ";
    tableau[numT].texteChoix[4] = "   deux sapins sur la gauche.";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 5
    numT++;
    tableau[numT].idTableau = numT; // numT = 4
    tableau[numT].lienChoix[0] = 1;
    tableau[numT].lienChoix[1] = 2;
    tableau[numT].lienChoix[2] = 3;
    tableau[numT].lienChoix[3] = 4;
    tableau[numT].lienChoix[4] = 5;
    tableau[numT].titre = "Un arbre barre la route";
    tableau[numT].texteParag[0] = "   Un arbre massif empêchait toute progression en ce sens. Trois";
    tableau[numT].texteParag[1] = "possibilités ";
    tableau[numT].texteParag[2] = "";
    tableau[numT].texteParag[3] = "";
    tableau[numT].texteParag[4] = "";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "";
    tableau[numT].texteChoix[1] = "";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 6
    numT++;
    tableau[numT].idTableau = numT; // numT = 5
    tableau[numT].lienChoix[0] = 1;
    tableau[numT].lienChoix[1] = 2;
    tableau[numT].lienChoix[2] = 3;
    tableau[numT].lienChoix[3] = 4;
    tableau[numT].lienChoix[4] = 5;
    tableau[numT].titre = "";
    tableau[numT].texteParag[0] = "";
    tableau[numT].texteParag[1] = "";
    tableau[numT].texteParag[2] = "";
    tableau[numT].texteParag[3] = "";
    tableau[numT].texteParag[4] = "";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "";
    tableau[numT].texteChoix[1] = "";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 7
    numT++;
    tableau[numT].idTableau = numT; // numT = 6
    tableau[numT].lienChoix[0] = 1;
    tableau[numT].lienChoix[1] = 2;
    tableau[numT].lienChoix[2] = 3;
    tableau[numT].lienChoix[3] = 4;
    tableau[numT].lienChoix[4] = 5;
    tableau[numT].titre = "";
    tableau[numT].texteParag[0] = "";
    tableau[numT].texteParag[1] = "";
    tableau[numT].texteParag[2] = "";
    tableau[numT].texteParag[3] = "";
    tableau[numT].texteParag[4] = "";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "";
    tableau[numT].texteChoix[1] = "";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 8
    numT++;
    tableau[numT].idTableau = numT; // numT = 7
    tableau[numT].lienChoix[0] = 1;
    tableau[numT].lienChoix[1] = 2;
    tableau[numT].lienChoix[2] = 3;
    tableau[numT].lienChoix[3] = 4;
    tableau[numT].lienChoix[4] = 5;
    tableau[numT].titre = "";
    tableau[numT].texteParag[0] = "";
    tableau[numT].texteParag[1] = "";
    tableau[numT].texteParag[2] = "";
    tableau[numT].texteParag[3] = "";
    tableau[numT].texteParag[4] = "";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "";
    tableau[numT].texteChoix[1] = "";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 9
    numT++;
    tableau[numT].idTableau = numT; // numT = 8
    tableau[numT].lienChoix[0] = 1;
    tableau[numT].lienChoix[1] = 2;
    tableau[numT].lienChoix[2] = 3;
    tableau[numT].lienChoix[3] = 4;
    tableau[numT].lienChoix[4] = 5;
    tableau[numT].titre = "";
    tableau[numT].texteParag[0] = "";
    tableau[numT].texteParag[1] = "";
    tableau[numT].texteParag[2] = "";
    tableau[numT].texteParag[3] = "";
    tableau[numT].texteParag[4] = "";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "";
    tableau[numT].texteChoix[1] = "";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    return 0;
}

