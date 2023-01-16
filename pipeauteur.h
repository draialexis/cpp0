#ifndef PIPEAUTEUR_H
#define PIPEAUTEUR_H

#include <string>

using namespace std;

class Pipeauteur
{
private:
    char *name;
    Pipeauteur * mate;
public:
    Pipeauteur(string name);
    Pipeauteur(const Pipeauteur& orig);
    void pipeauter() const;
    ~Pipeauteur();
    Pipeauteur * getMate() const;
    void setMate(Pipeauteur * newMatePtr);
};

#endif // PIPEAUTEUR_H
