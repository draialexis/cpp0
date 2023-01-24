#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "pipeauteur.h"

class Commercial : public Pipeauteur
{
private:
    const Pipeauteur *stagiaire;

    void setStagiaire(const string &name);

public:
    explicit Commercial(const string &in_name);

    ~Commercial();

    void pipeauter() const override;

    void pipeauteStagiaire();
};

#endif // COMMERCIAL_H
