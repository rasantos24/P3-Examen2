#ifndef PLANETA_H
#define PLANETA_H

#include <string>
#include <iostream>

using namespace std;

class Planeta
{
    public:
        string nombre;
        int habitantes;
        double diametro;
        char categoria;

        Planeta(string nombre, int habitantes, double diametro, char categoria);
        virtual ~Planeta();
    protected:
    private:
};

#endif // PLANETA_H
