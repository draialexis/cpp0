#include "headers/pipeauteur.h"
#include <iostream>
#include <algorithm>

using namespace std;

Pipeauteur::Pipeauteur(const string &in_name)
{
    name = new char[in_name.length() + 1];
    int i = 0;
    for (auto ch: in_name)
    {
        name[i++] = ch;
    }
    name[i] = '\0';
    //    name[0] = 'A';
    cout << "I live at " << this << endl;
}

Pipeauteur::Pipeauteur(const Pipeauteur &orig)
{
    char *cptr = orig.name;
    int size = 0;
    while (*cptr != '\0')
    {
        cptr++;
        size++;
    }

    name = new char[size + 1];

    cptr = orig.name;
    int i = 0;
    while (*cptr != '\0')
    {
        name[i++] = *cptr;
        cptr++;
    }
    name[i] = '\0';
    cout << "I (clone) live at " << this << endl;
}

Pipeauteur::~Pipeauteur()
{
    cout << "I used to live at " << this << endl;
    delete[] name;
}

void Pipeauteur::pipeauter() const
{
    cout << "bleep bloop, my name is " << name << endl;
}

Pipeauteur *Pipeauteur::getMate() const
{ return mate; }

void Pipeauteur::setMate(Pipeauteur *newMatePtr)
{
    this->mate = newMatePtr;
}
