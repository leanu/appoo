#ifndef MAJOR_H_INCLUDED
#define MAJOR_H_INCLUDED
#include "om.h"
#include <iostream>
using namespace std;
class major : public om {
    private:
        long nrPasaport;
    public:
        major();
        major(long nrPasaport);
        ~major();
        
        void set(long nrPasaport);
        friend ostream& operator<<(ostream& os, const major& major);
};
#endif //MAJOR_H_INCLUDED
