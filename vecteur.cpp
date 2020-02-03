#include "vecteur.h"


vecteur::vecteur()
{
   Forme* p_TableauForme = new Forme[MAX_VECTEUR];
   NbAgrandi=0;

   
}
vecteur::~vecteur()
{
    delete p_TableauForme;
}

int vecteur::GetTailleVecteur()
{
    
    for(int i=0; p_TableauForme[i] != NULL;,i++)
    {
        count++;
	
    }
    //retourne le nombre delement compter  
    return i;
}
void vecteur::AgrandirVecteur()
{
    Forme* New_P_TableauForme = new Forme[(NbAgrandi+2)*MAX_VECTEUR];
    
    for(int i=0;i<((NbAgrandi+1)*MAX_VECTEUR);i++)
    {
        New_P_TableauForme[i]=p_TableauForme[i];
    }
    vecteur.NbAgrandi++;
    p_TableauForme= &New_P_TableauForme;
    delete p_TableauForme;
}
