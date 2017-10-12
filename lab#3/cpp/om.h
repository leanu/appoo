#ifndef OM_H_INCLUDED
#define OM_H_INCLUDED
#include <iostream>
#include <string>
class om {
    private:
        string nume;
        int virsta;
        int greutate;
    public:
        om();
        om(string nume);
        om(string nume, int virsta, int greutate);
        ~om();
        string toString(); 
        om& operator=(om& o);
};
#endif //OM_H_INCLUDED
