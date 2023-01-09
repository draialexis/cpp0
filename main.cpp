#include <iostream>
#include "pipeauteur.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "I said: Hello, World!" << endl;

    string colors[] = {"green", "blue", "yellow", "red"};

    for(auto i = 0uL; i < sizeof(colors)/sizeof(string) ; ++i) {
        cout << "color #" << i << ": " << colors[i] << endl;
    }

    for(auto &color : colors) {
        color[0] = 'j';
        cout << color << endl;
    }

    for(auto color : colors) {
        cout << color << endl;
    }

    int x;
    x = 7;
    cout << x << '\n' << endl;

    int n = 100;

    int *array_of_ints = new int[n];

    delete[] array_of_ints;

    Pipeauteur *my_objptr__heap = new Pipeauteur();
    Pipeauteur my_object__stack;

    my_objptr__heap->pipeauter();
    my_object__stack.pipeauter();

    delete my_objptr__heap;

    return 0;
}
