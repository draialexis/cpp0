#include "pipeauteur.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

Pipeauteur::Pipeauteur(string name)
{
    this->bunch_of_chars = new char[strlen(name)];

    int i = 0;
    for (char ch : name) {
        this->bunch_of_chars[i++] = ch;
    }
    this->bunch_of_chars[i] = '\0';
}

void Pipeauteur::pipeauter() {
    std::cout << "bleep bloop, my name is ";
    for(int i = 0; i < bunch_of_chars){
        std::cout << ch;
    }
}
