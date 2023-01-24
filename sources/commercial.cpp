#include <iostream>
#include "headers/commercial.h"

using namespace std;

Commercial::Commercial(const string &in_name) : Pipeauteur(in_name)
{

}

void Commercial::pipeauter() const
{
    Pipeauteur::pipeauter();
    cout << "Sincèrement, c'est une bonne affaire." << endl;
}
