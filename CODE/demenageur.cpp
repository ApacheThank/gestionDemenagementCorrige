#include "demenageur.h"

Demenageur::Demenageur() :Salarie(){}
Demenageur::Demenageur(int leId, QString lePrenom, QString leNom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, bool leChef): Salarie(leId,lePrenom, leNom, lAdresse, laDateNaissance, laDateEmbauche){
    chef = leChef;
}
Permis *Demenageur::getLepermis() const
{
    return lePermis;
}
void Demenageur::setLepermis(Permis *value)
{
    lePermis = value;
}
bool Demenageur::getChef() const
{
    return chef;
}
void Demenageur::setChef(bool value)
{
    chef = value;
}



void Demenageur::optenirPermis(int lId)
{
    QVector<Permis>vectPermisTemp=agenceChoisis.getVectPermis();
    int idPerm=0;
    while (!(idPerm==vectPermisTemp.size())||(vectPermisTemp[idPerm].getid()==lId))
    {
        if (vectPermisTemp[idPerm].getid()==lId)
        {
            lePermis=&vectPermisTemp[idPerm];
        }
    idPerm++;
    }
}


