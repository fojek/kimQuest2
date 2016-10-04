#include <iostream>
#include <windows.h>
#include "tableaux.h"
using namespace std;

/// Cette fonction charge en m�moire les tableaux
int chargerTableaux(TABLEAU * tableau)
{
    int numT=0; /// index pour les tableaux
    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 1
    numT++;
    tableau[numT].idTableau = numT; // numT = 0
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 2;
    tableau[numT].lienChoix[2] = 99;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Prologue";
    tableau[numT].texteParag[0] = "   Il �tait une fois, dans une contr�e lointaine peupl�e d'�tranges";
    tableau[numT].texteParag[1] = "cr�atures, une petit royaume juch� au sommet d'une colline escarp�e";
    tableau[numT].texteParag[2] = "autant que fleurie, dot� d'un nom que personne n'utilisait, lui pr�-";
    tableau[numT].texteParag[3] = "f�rant celui de Fleurimont. Sur ce cadre enchanteur se l�ve le ri-";
    tableau[numT].texteParag[4] = "deau de l'histoire fantastique dont VOUS SEREZ L'H�ROINE ! ";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "1. Youpie! Qu'est-ce qu'on attend ?";
    tableau[numT].texteChoix[1] = "2. �a fait peur ... Je crois que je vais me d�sister couardement.";
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
    tableau[numT].texteParag[0] = "   Kim Pendragon se promenait dans la for�t en fredonnant un air �";
    tableau[numT].texteParag[1] = "la mode. Elle �tait accompagn� de ses pages: l'un, grand et mince, ";
    tableau[numT].texteParag[2] = "se nommait Joseph le Brave; L'autre, petit et dodu, avait pour nom";
    tableau[numT].texteParag[3] = "Antoine la Boule. Ayant pris de l'avance, Kim Pendragon se retourna";
    tableau[numT].texteParag[4] = "pour attendre sa suite. � sa grande surprise, le sentier derri�re ";
    tableau[numT].texteParag[5] = "elle �tait d�sert! Antoine et Joseph avaient disparu!";
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
    tableau[numT].texteParag[0] = "   Kim Pendragon �tait faite du bois noble des h�ros de jadis, et";
    tableau[numT].texteParag[1] = "elle eut t�t fait de retrouver ses esprits. Paniquer �tait inutile:";
    tableau[numT].texteParag[2] = "il fallait imm�diatement se mettre � la recherche des disparus.";
    tableau[numT].texteParag[3] = "   Un embranchement apparut sur le sentier. � droite, une sapini�re;";
    tableau[numT].texteParag[4] = "tout droit, une zone de for�t plus dense; � gauche, des arburstres";
    tableau[numT].texteParag[5] = "tapissant le sol. Sans h�siter, Kim Pendragon �";
    tableau[numT].texteChoix[0] = "1. ... Prit le chemin de droite. Les sapins, �a sent bon!";
    tableau[numT].texteChoix[1] = "2. ... Continua tout droit. Il y a s�rement moins de moustiques.";
    tableau[numT].texteChoix[2] = "3. ... D�cida d'aller vers les arbustres. Ils �taient certainement";
    tableau[numT].texteChoix[3] = "       charg�s de petits fruits d�licieux!";
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
    tableau[numT].texteParag[0] = "   Au bout de quelques m�tres, Kim Pendragon dut s'arr�ter. La sapi-";
    tableau[numT].texteParag[1] = "ni�re bordait une falaise infranchissable, de sorte qu'il �tait seul-";
    tableau[numT].texteParag[2] = "ement possible de faire demi-tour. Aper�evait-elle une l�g�re ouver-";
    tableau[numT].texteParag[3] = "ture sur la gauche?";
    tableau[numT].texteParag[4] = "   Au sol, pr�s d'un sapin vieux et tortur�, poussaient des champi-";
    tableau[numT].texteParag[5] = "gnons d'un bleu clair desquels �manait une forte aura magique ... ";
    tableau[numT].texteChoix[0] = "1. Se penchant, Kim Pendragon saisit un champignon et y mordit � ";
    tableau[numT].texteChoix[1] = "   belles dents.";
    tableau[numT].texteChoix[2] = "2. Ignorant les champignons myst�rieux, Kim Pendragon fit demi-tour.";
    tableau[numT].texteChoix[3] = "3. Au prix de quelques �corchures, Kim Pendragon se faufila entre ";
    tableau[numT].texteChoix[4] = "   deux sapins sur la gauche.";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 5
    numT++;
    tableau[numT].idTableau = numT; // numT = 4
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 2;
    tableau[numT].lienChoix[2] = 3;
    tableau[numT].lienChoix[3] = 5;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Un tronc d'arbre barre la route";
    tableau[numT].texteParag[0] = "   Un arbre massif emp�chait Kim Pendragon de poursuivre son chemin.";
    tableau[numT].texteParag[1] = "Sans h�siter, elle repartit ... ";
    tableau[numT].texteParag[2] = "";
    tableau[numT].texteParag[3] = "";
    tableau[numT].texteParag[4] = "";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "1. ... Par le centre.";
    tableau[numT].texteChoix[1] = "2. ... Par une fissure, � droite.";
    tableau[numT].texteChoix[2] = "3. ... � travers les branches, � gauche.";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 6
    numT++;
    tableau[numT].idTableau = numT; // numT = 5
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 9;
    tableau[numT].lienChoix[2] = 8;
    tableau[numT].lienChoix[3] = 13;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Quelque chose bave sous le buisson";
    tableau[numT].texteParag[0] = "   Soudain, l'attention de Kim Pendragon fut retenue par un bruit";
    tableau[numT].texteParag[1] = "provenant d'un buisson. Les feuilles, bien que secou�es fortement ";
    tableau[numT].texteParag[2] = "par moments, masquaient la vue de notre h�roine.";
    tableau[numT].texteParag[3] = "";
    tableau[numT].texteParag[4] = "";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "1. N'�coutant que son courage, elle �carte les branches ...";
    tableau[numT].texteChoix[1] = "2. Consid�rant la possible pr�sence d'araign�es, elle vaporise une";
    tableau[numT].texteChoix[2] = "   quantit� d�raisonable de Raid dans le buisson ...";
    tableau[numT].texteChoix[3] = "3. Interdite, elle recule lentement sans regarder derri�re elle ...";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 7
    numT++;
    tableau[numT].idTableau = numT; // numT = 6
    tableau[numT].lienChoix[0] = 1;
    tableau[numT].lienChoix[1] = 0;
    tableau[numT].lienChoix[2] = 0;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "L'ange de la mort";
    tableau[numT].texteParag[0] = "   Kim Pendragon sent ses membres et sa pens�e s'engour-   .-\"\"\"-.";
    tableau[numT].texteParag[1] = "dir. Elle remarque que l'aura magique qui entourait le    /* * * *\\";
    tableau[numT].texteParag[2] = "champignong s'est tout � fait dissip�e � pr�sent, ne     :_.-:`:-._;";
    tableau[numT].texteParag[3] = "laissant entre ses doigts d�j� froids que le tr�s recon-     (_)";
    tableau[numT].texteParag[4] = "naissable ANGE DE LA MORT ...                             \\|/(_)\\|/";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "";
    tableau[numT].texteChoix[1] = "                              GAME OVER.";
    tableau[numT].texteChoix[2] = "               Appuyez sur <Entr�e> pour recommencer ...";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 8
    numT++;
    tableau[numT].idTableau = numT; // numT = 7
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 11;
    tableau[numT].lienChoix[2] = 12;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "�Raid� mort ?";
    tableau[numT].texteParag[0] = "   Le leprechaun qui se trouvait dans le buisson �tait � pr�sent bien";
    tableau[numT].texteParag[1] = "mis�rable. Il respirait difficilement et paraissait furieux. Une cl�";
    tableau[numT].texteParag[2] = "en or massif pendait � sa ceinture.";
    tableau[numT].texteParag[3] = "   Voyant cela, Kim Pendragon ...";
    tableau[numT].texteParag[4] = "";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "1. ... S'empara de la cl� en or et laissa le leprechaun pour mort.";
    tableau[numT].texteChoix[1] = "2. ..., repentante, entreprit de ranimer la pauvre cr�ature.";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 9
    numT++;
    tableau[numT].idTableau = numT; // numT = 8
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 8;
    tableau[numT].lienChoix[2] = 10;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Un leprechaun !";
    tableau[numT].texteParag[0] = "   Le farfadet, f�ch� d'avoir �t� d�rang� alors qu'il ceuillait des";
    tableau[numT].texteParag[1] = "m�res, commenca � invectiver vivement notre h�roine. Kim Pendragon ...";
    tableau[numT].texteParag[2] = "";
    tableau[numT].texteParag[3] = "";
    tableau[numT].texteParag[4] = "";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "1. ... Vaporisa une quantit� d�raisonable de raid sur le leprechaun.";
    tableau[numT].texteChoix[1] = "2. ... Essaya d'engager la conversation avec la cr�ature.";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 10
    numT++;
    tableau[numT].idTableau = numT; // numT = 9
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 11;
    tableau[numT].lienChoix[2] = 12;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Tentation (mais pas facination, ni h�sitation)";
    tableau[numT].texteParag[0] = "   Calm�, le leprechaun, qui s'appelait Bob, r�pondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. � Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voil� des noms �tranges. Ils ne sont pas pass�s par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces m�res! Arr! �";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la cl� en";
    tableau[numT].texteParag[5] = "or massif pendant � sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la cl� en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle d�cida, gntiment, d'aider Bob � terminer sa r�colte.";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 11
    numT++;
    tableau[numT].idTableau = numT; // numT = 10
    tableau[numT].lienChoix[0] = 1;
    tableau[numT].lienChoix[1] = 0;
    tableau[numT].lienChoix[2] = 0;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Mal�diction";
    tableau[numT].texteParag[0] = "   Alors qu'elle s'enfuit avec son butin mal acquis, Kim Pendragon";
    tableau[numT].texteParag[1] = "entendit le leprechaun hurler des incantations dont elle ne put com-";
    tableau[numT].texteParag[2] = "prendre le sens. Elle fit encore quelques enjamb�es avant de sentir ";
    tableau[numT].texteParag[3] = "une raideur � sa main droite. Elle jeta un coup d'oeil et hocqueta";
    tableau[numT].texteParag[4] = "de surprise en voyant sa main et, d�j�, une partie de son bras, de-";
    tableau[numT].texteParag[5] = "venant du m�me m�tal pr�cieux que la cl� vol�e...";
    tableau[numT].texteChoix[0] = "   Horrifi�e (et aurifi�e), Kim Pendragon se figea petit � petit. De";
    tableau[numT].texteChoix[1] = "la pens�e trouble de ses derniers moments, Kim Pendragon se demanda";
    tableau[numT].texteChoix[2] = "ce qu'il adviendrait d'Antoine et de Joseph ...";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "         GAME OVER! Appuyez sur <Entr�e> pour recommencer.";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 12
    numT++;
    tableau[numT].idTableau = numT; // numT = 11
    tableau[numT].lienChoix[0] = 13;
    tableau[numT].lienChoix[1] = 0;
    tableau[numT].lienChoix[2] = 0;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "L'espoir rena�t";
    tableau[numT].texteParag[0] = "   � deux, Bob et Kim Pendragon eurent t�t fait de remplir la besace";
    tableau[numT].texteParag[1] = "du leprechaun. Content, ce dernier l'invita � le suivre jusque chez";
    tableau[numT].texteParag[2] = "lui.";
    tableau[numT].texteParag[3] = "   � Grmmblbl! Je n'ai peut-�tre pas vu ceux que tu cherches, grrr!";
    tableau[numT].texteParag[4] = "mais je sais o� se trouve quelqu'un qui pourra t'aider. Aharr ! �";
    tableau[numT].texteParag[5] = "   Kim Pendragon sentit son courage se raffermir. Peut-�tre aurait";
    tableau[numT].texteChoix[0] = "elle agi diff�remment, si elle avait su vers qui l'emmenait son vert";
    tableau[numT].texteChoix[1] = "compagnon ...";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "                     CHAPTER ONE - COMPLETED!";
    tableau[numT].texteChoix[4] = "              Appuyez sur <Entr�e> pour continuer";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 13
    numT++;
    tableau[numT].idTableau = numT; // numT = 12
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 11;
    tableau[numT].lienChoix[2] = 12;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Chapitre deuxi�me";
    tableau[numT].texteParag[0] = "   Calm�, le leprechaun, qui s'appelait Bob, r�pondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. � Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voil� des noms �tranges. Ils ne sont pas pass�s par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces m�res! Arr! �";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la cl� en";
    tableau[numT].texteParag[5] = "or massif pendant � sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la cl� en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle d�cida, gentiment, d'aider Bob � terminer sa r�colte.";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 14
    numT++;
    tableau[numT].idTableau = numT; // numT = 13
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 11;
    tableau[numT].lienChoix[2] = 12;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Tentation (mais pas facination, ni h�sitation)";
    tableau[numT].texteParag[0] = "   Calm�, le leprechaun, qui s'appelait Bob, r�pondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. � Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voil� des noms �tranges. Ils ne sont pas pass�s par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces m�res! Arr! �";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la cl� en";
    tableau[numT].texteParag[5] = "or massif pendant � sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la cl� en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle d�cida, gntiment, d'aider Bob � terminer sa r�colte.";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 15
    numT++;
    tableau[numT].idTableau = numT; // numT = 14
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 11;
    tableau[numT].lienChoix[2] = 12;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Tentation (mais pas facination, ni h�sitation)";
    tableau[numT].texteParag[0] = "   Calm�, le leprechaun, qui s'appelait Bob, r�pondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. � Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voil� des noms �tranges. Ils ne sont pas pass�s par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces m�res! Arr! �";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la cl� en";
    tableau[numT].texteParag[5] = "or massif pendant � sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la cl� en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle d�cida, gntiment, d'aider Bob � terminer sa r�colte.";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 16
    numT++;
    tableau[numT].idTableau = numT; // numT = 15
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 11;
    tableau[numT].lienChoix[2] = 12;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Tentation (mais pas facination, ni h�sitation)";
    tableau[numT].texteParag[0] = "   Calm�, le leprechaun, qui s'appelait Bob, r�pondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. � Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voil� des noms �tranges. Ils ne sont pas pass�s par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces m�res! Arr! �";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la cl� en";
    tableau[numT].texteParag[5] = "or massif pendant � sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la cl� en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle d�cida, gntiment, d'aider Bob � terminer sa r�colte.";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 17
    numT++;
    tableau[numT].idTableau = numT; // numT = 16
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 11;
    tableau[numT].lienChoix[2] = 12;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Tentation (mais pas facination, ni h�sitation)";
    tableau[numT].texteParag[0] = "   Calm�, le leprechaun, qui s'appelait Bob, r�pondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. � Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voil� des noms �tranges. Ils ne sont pas pass�s par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces m�res! Arr! �";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la cl� en";
    tableau[numT].texteParag[5] = "or massif pendant � sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la cl� en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle d�cida, gntiment, d'aider Bob � terminer sa r�colte.";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 18
    numT++;
    tableau[numT].idTableau = numT; // numT = 17
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 11;
    tableau[numT].lienChoix[2] = 12;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Tentation (mais pas facination, ni h�sitation)";
    tableau[numT].texteParag[0] = "   Calm�, le leprechaun, qui s'appelait Bob, r�pondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. � Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voil� des noms �tranges. Ils ne sont pas pass�s par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces m�res! Arr! �";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la cl� en";
    tableau[numT].texteParag[5] = "or massif pendant � sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la cl� en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle d�cida, gntiment, d'aider Bob � terminer sa r�colte.";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 19
    numT++;
    tableau[numT].idTableau = numT; // numT = 18
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 11;
    tableau[numT].lienChoix[2] = 12;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Tentation (mais pas facination, ni h�sitation)";
    tableau[numT].texteParag[0] = "   Calm�, le leprechaun, qui s'appelait Bob, r�pondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. � Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voil� des noms �tranges. Ils ne sont pas pass�s par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces m�res! Arr! �";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la cl� en";
    tableau[numT].texteParag[5] = "or massif pendant � sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la cl� en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle d�cida, gntiment, d'aider Bob � terminer sa r�colte.";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 20
    numT++;
    tableau[numT].idTableau = numT; // numT = 19
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 11;
    tableau[numT].lienChoix[2] = 12;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Tentation (mais pas facination, ni h�sitation)";
    tableau[numT].texteParag[0] = "   Calm�, le leprechaun, qui s'appelait Bob, r�pondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. � Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voil� des noms �tranges. Ils ne sont pas pass�s par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces m�res! Arr! �";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la cl� en";
    tableau[numT].texteParag[5] = "or massif pendant � sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la cl� en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle d�cida, gntiment, d'aider Bob � terminer sa r�colte.";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";



    //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    return 0;
}
