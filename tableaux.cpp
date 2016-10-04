#include <iostream>
#include <windows.h>
#include "tableaux.h"
using namespace std;

/// Cette fonction charge en mémoire les tableaux
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
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 2;
    tableau[numT].lienChoix[2] = 3;
    tableau[numT].lienChoix[3] = 5;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Un tronc d'arbre barre la route";
    tableau[numT].texteParag[0] = "   Un arbre massif empêchait Kim Pendragon de poursuivre son chemin.";
    tableau[numT].texteParag[1] = "Sans hésiter, elle repartit ... ";
    tableau[numT].texteParag[2] = "";
    tableau[numT].texteParag[3] = "";
    tableau[numT].texteParag[4] = "";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "1. ... Par le centre.";
    tableau[numT].texteChoix[1] = "2. ... Par une fissure, à droite.";
    tableau[numT].texteChoix[2] = "3. ... À travers les branches, à gauche.";
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
    tableau[numT].texteParag[1] = "provenant d'un buisson. Les feuilles, bien que secouées fortement ";
    tableau[numT].texteParag[2] = "par moments, masquaient la vue de notre héroine.";
    tableau[numT].texteParag[3] = "";
    tableau[numT].texteParag[4] = "";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "1. N'écoutant que son courage, elle écarte les branches ...";
    tableau[numT].texteChoix[1] = "2. Considérant la possible présence d'araignées, elle vaporise une";
    tableau[numT].texteChoix[2] = "   quantité déraisonable de Raid dans le buisson ...";
    tableau[numT].texteChoix[3] = "3. Interdite, elle recule lentement sans regarder derrière elle ...";
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
    tableau[numT].texteParag[0] = "   Kim Pendragon sent ses membres et sa pensée s'engour-   .-\"\"\"-.";
    tableau[numT].texteParag[1] = "dir. Elle remarque que l'aura magique qui entourait le    /* * * *\\";
    tableau[numT].texteParag[2] = "champignong s'est tout à fait dissipée à présent, ne     :_.-:`:-._;";
    tableau[numT].texteParag[3] = "laissant entre ses doigts déjà froids que le très recon-     (_)";
    tableau[numT].texteParag[4] = "naissable ANGE DE LA MORT ...                             \\|/(_)\\|/";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "";
    tableau[numT].texteChoix[1] = "                              GAME OVER.";
    tableau[numT].texteChoix[2] = "               Appuyez sur <Entrée> pour recommencer ...";
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
    tableau[numT].titre = "«Raid» mort ?";
    tableau[numT].texteParag[0] = "   Le leprechaun qui se trouvait dans le buisson était à présent bien";
    tableau[numT].texteParag[1] = "misérable. Il respirait difficilement et paraissait furieux. Une clé";
    tableau[numT].texteParag[2] = "en or massif pendait à sa ceinture.";
    tableau[numT].texteParag[3] = "   Voyant cela, Kim Pendragon ...";
    tableau[numT].texteParag[4] = "";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "1. ... S'empara de la clé en or et laissa le leprechaun pour mort.";
    tableau[numT].texteChoix[1] = "2. ..., repentante, entreprit de ranimer la pauvre créature.";
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
    tableau[numT].texteParag[0] = "   Le farfadet, fâché d'avoir été dérangé alors qu'il ceuillait des";
    tableau[numT].texteParag[1] = "mûres, commenca à invectiver vivement notre héroine. Kim Pendragon ...";
    tableau[numT].texteParag[2] = "";
    tableau[numT].texteParag[3] = "";
    tableau[numT].texteParag[4] = "";
    tableau[numT].texteParag[5] = "";
    tableau[numT].texteChoix[0] = "1. ... Vaporisa une quantité déraisonable de raid sur le leprechaun.";
    tableau[numT].texteChoix[1] = "2. ... Essaya d'engager la conversation avec la créature.";
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
    tableau[numT].titre = "Tentation (mais pas facination, ni hésitation)";
    tableau[numT].texteParag[0] = "   Calmé, le leprechaun, qui s'appelait Bob, répondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. « Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voilà des noms étranges. Ils ne sont pas passés par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces mûres! Arr! »";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la clé en";
    tableau[numT].texteParag[5] = "or massif pendant à sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la clé en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle décida, gntiment, d'aider Bob à terminer sa récolte.";
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
    tableau[numT].titre = "Malédiction";
    tableau[numT].texteParag[0] = "   Alors qu'elle s'enfuit avec son butin mal acquis, Kim Pendragon";
    tableau[numT].texteParag[1] = "entendit le leprechaun hurler des incantations dont elle ne put com-";
    tableau[numT].texteParag[2] = "prendre le sens. Elle fit encore quelques enjambées avant de sentir ";
    tableau[numT].texteParag[3] = "une raideur à sa main droite. Elle jeta un coup d'oeil et hocqueta";
    tableau[numT].texteParag[4] = "de surprise en voyant sa main et, déjà, une partie de son bras, de-";
    tableau[numT].texteParag[5] = "venant du même métal précieux que la clé volée...";
    tableau[numT].texteChoix[0] = "   Horrifiée (et aurifiée), Kim Pendragon se figea petit à petit. De";
    tableau[numT].texteChoix[1] = "la pensée trouble de ses derniers moments, Kim Pendragon se demanda";
    tableau[numT].texteChoix[2] = "ce qu'il adviendrait d'Antoine et de Joseph ...";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "         GAME OVER! Appuyez sur <Entrée> pour recommencer.";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 12
    numT++;
    tableau[numT].idTableau = numT; // numT = 11
    tableau[numT].lienChoix[0] = 13;
    tableau[numT].lienChoix[1] = 0;
    tableau[numT].lienChoix[2] = 0;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "L'espoir renaît";
    tableau[numT].texteParag[0] = "   À deux, Bob et Kim Pendragon eurent tôt fait de remplir la besace";
    tableau[numT].texteParag[1] = "du leprechaun. Content, ce dernier l'invita à le suivre jusque chez";
    tableau[numT].texteParag[2] = "lui.";
    tableau[numT].texteParag[3] = "   « Grmmblbl! Je n'ai peut-être pas vu ceux que tu cherches, grrr!";
    tableau[numT].texteParag[4] = "mais je sais où se trouve quelqu'un qui pourra t'aider. Aharr ! »";
    tableau[numT].texteParag[5] = "   Kim Pendragon sentit son courage se raffermir. Peut-être aurait";
    tableau[numT].texteChoix[0] = "elle agi différemment, si elle avait su vers qui l'emmenait son vert";
    tableau[numT].texteChoix[1] = "compagnon ...";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "                     CHAPTER ONE - COMPLETED!";
    tableau[numT].texteChoix[4] = "              Appuyez sur <Entrée> pour continuer";

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // Definition du tableau 13
    numT++;
    tableau[numT].idTableau = numT; // numT = 12
    tableau[numT].lienChoix[0] = 0;
    tableau[numT].lienChoix[1] = 11;
    tableau[numT].lienChoix[2] = 12;
    tableau[numT].lienChoix[3] = 0;
    tableau[numT].lienChoix[4] = 0;
    tableau[numT].titre = "Chapitre deuxième";
    tableau[numT].texteParag[0] = "   Calmé, le leprechaun, qui s'appelait Bob, répondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. « Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voilà des noms étranges. Ils ne sont pas passés par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces mûres! Arr! »";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la clé en";
    tableau[numT].texteParag[5] = "or massif pendant à sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la clé en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle décida, gentiment, d'aider Bob à terminer sa récolte.";
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
    tableau[numT].titre = "Tentation (mais pas facination, ni hésitation)";
    tableau[numT].texteParag[0] = "   Calmé, le leprechaun, qui s'appelait Bob, répondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. « Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voilà des noms étranges. Ils ne sont pas passés par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces mûres! Arr! »";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la clé en";
    tableau[numT].texteParag[5] = "or massif pendant à sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la clé en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle décida, gntiment, d'aider Bob à terminer sa récolte.";
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
    tableau[numT].titre = "Tentation (mais pas facination, ni hésitation)";
    tableau[numT].texteParag[0] = "   Calmé, le leprechaun, qui s'appelait Bob, répondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. « Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voilà des noms étranges. Ils ne sont pas passés par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces mûres! Arr! »";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la clé en";
    tableau[numT].texteParag[5] = "or massif pendant à sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la clé en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle décida, gntiment, d'aider Bob à terminer sa récolte.";
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
    tableau[numT].titre = "Tentation (mais pas facination, ni hésitation)";
    tableau[numT].texteParag[0] = "   Calmé, le leprechaun, qui s'appelait Bob, répondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. « Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voilà des noms étranges. Ils ne sont pas passés par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces mûres! Arr! »";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la clé en";
    tableau[numT].texteParag[5] = "or massif pendant à sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la clé en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle décida, gntiment, d'aider Bob à terminer sa récolte.";
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
    tableau[numT].titre = "Tentation (mais pas facination, ni hésitation)";
    tableau[numT].texteParag[0] = "   Calmé, le leprechaun, qui s'appelait Bob, répondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. « Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voilà des noms étranges. Ils ne sont pas passés par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces mûres! Arr! »";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la clé en";
    tableau[numT].texteParag[5] = "or massif pendant à sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la clé en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle décida, gntiment, d'aider Bob à terminer sa récolte.";
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
    tableau[numT].titre = "Tentation (mais pas facination, ni hésitation)";
    tableau[numT].texteParag[0] = "   Calmé, le leprechaun, qui s'appelait Bob, répondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. « Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voilà des noms étranges. Ils ne sont pas passés par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces mûres! Arr! »";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la clé en";
    tableau[numT].texteParag[5] = "or massif pendant à sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la clé en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle décida, gntiment, d'aider Bob à terminer sa récolte.";
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
    tableau[numT].titre = "Tentation (mais pas facination, ni hésitation)";
    tableau[numT].texteParag[0] = "   Calmé, le leprechaun, qui s'appelait Bob, répondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. « Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voilà des noms étranges. Ils ne sont pas passés par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces mûres! Arr! »";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la clé en";
    tableau[numT].texteParag[5] = "or massif pendant à sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la clé en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle décida, gntiment, d'aider Bob à terminer sa récolte.";
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
    tableau[numT].titre = "Tentation (mais pas facination, ni hésitation)";
    tableau[numT].texteParag[0] = "   Calmé, le leprechaun, qui s'appelait Bob, répondit aux interroga-";
    tableau[numT].texteParag[1] = "tions de Kim Pendragon. « Grmblbl! Antoine, Joseph? Frr! Foi de Bob,";
    tableau[numT].texteParag[2] = "voilà des noms étranges. Ils ne sont pas passés par ici! Grrr! Ah, si";
    tableau[numT].texteParag[3] = "seulement je pouvais terminer de ramasser ces mûres! Arr! »";
    tableau[numT].texteParag[4] = "   Il gesticulait tout en parlant, ce qui faisait sauter la clé en";
    tableau[numT].texteParag[5] = "or massif pendant à sa ceinture.";
    tableau[numT].texteChoix[0] = "1. Kim Pendragon s'empara de la clé en or en s'enfuit.";
    tableau[numT].texteChoix[1] = "2. Elle décida, gntiment, d'aider Bob à terminer sa récolte.";
    tableau[numT].texteChoix[2] = "";
    tableau[numT].texteChoix[3] = "";
    tableau[numT].texteChoix[4] = "";



    //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    return 0;
}
