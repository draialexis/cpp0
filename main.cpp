#include <iostream>
#include "headers/pipeauteur.h"

using namespace std;

void foo(Pipeauteur pipeauteur)
{
    pipeauteur.pipeauter();
}

int main()
{
    /*
    cout << "Hello World!" << endl;
    cout << "I said: Hello, World!" << endl;

    string colors[] = {"green", "blue", "yellow", "red"};

    for (auto i = 0uL; i < sizeof(colors) / sizeof(string); ++i)
    {
        cout << "color #" << i << ": " << colors[i] << endl;
    }

    for (auto &color: colors)
    {
        color[0] = 'j';
        cout << color << endl;
    }

    for (auto color: colors)
    {
        cout << color << endl;
    }

    int x;
    x = 7;
    cout << x << '\n' << endl;

    int n = 100;

    int *array_of_ints = new int[n];

    delete[] array_of_ints;


    char   name1[] = {'n', 'a', 'm', 'e', '1', '\0'};
    char   name2[] = {'n', 'a', 'm', 'e', '2', '\0'};
    string name1   = "name1";
    string name2   = "name2";

    Pipeauteur *my_objptr__heap = new Pipeauteur(name1);
    Pipeauteur my_object__stack(name2);

    my_objptr__heap->pipeauter();
    my_object__stack.pipeauter();

    foo(*my_objptr__heap);
    foo(my_object__stack);

    delete my_objptr__heap;

    Pipeauteur p1("vroom");
    Pipeauteur p2{p1};

    p1.pipeauter();
    p2.pipeauter();

    const Pipeauteur constPip("Consty McConstFace");
    constPip.pipeauter();
    */

    Pipeauteur D("Donald");
    Pipeauteur M("Marie");
    Pipeauteur E("Edouard");
    M.setMate(&D);
    M.getMate()->pipeauter();
    return 0;
}
