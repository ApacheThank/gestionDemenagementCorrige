#ifndef COMMERCIAL_H
#define COMMERCIAL_H
#include <QString>
#include <QDate>
#include "salarie.h"
#include "dossierdemenagement.h"

class Commercial : public Salarie
{
public:
     Commercial();
     Commercial(int leId, QString lePrenom, QString leNom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, QString lExperience);
     void nouveauDossier(QDate laDateDebutDem, QDate laDateFinDem, int leVolume, int leNombreKm, QString lAdresseChargement, QString lAdresseLivraison);
public slots:
private:
     QString experience;
};

#endif // COMMERCIAL_H
