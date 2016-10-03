#ifndef TABLEAUX_H_INCLUDED
#define TABLEAUX_H_INCLUDED

const int NB_PARAG = 6;
const int NB_CHOIX = 5;
const int NB_LIENS = 5;

typedef struct
{
    int lienChoix[NB_LIENS];
    int idTableau;
    std::string titre;
    std::string texteParag[NB_PARAG];
    std::string texteChoix[NB_CHOIX];

} TABLEAU;

int chargerTableaux(TABLEAU *);

#endif // TABLEAUX_H_INCLUDED
