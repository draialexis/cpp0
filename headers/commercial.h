#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "pipeauteur.h"

class Commercial : public Pipeauteur
{
public:
    explicit Commercial(const string &in_name);

    void pipeauter() const override;
};

#endif // COMMERCIAL_H
