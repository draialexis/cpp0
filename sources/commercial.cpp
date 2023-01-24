#include <iostream>
#include "headers/commercial.h"

using namespace std;

Commercial::Commercial(const string &in_name) : Pipeauteur(in_name)
{
    setStagiaire("Stagiaire de" + in_name);
    pipeauteStagiaire();
}

void Commercial::pipeauter() const
{
    Pipeauteur::pipeauter();
    cout << "Sincèrement, c'est une bonne affaire." << endl;
}

void Commercial::setStagiaire(const string &name)
{
    stagiaire = new Pipeauteur(name);
}

void Commercial::pipeauteStagiaire()
{
    stagiaire->pipeauter();
}

Commercial::~Commercial()
{
    delete stagiaire;
}
