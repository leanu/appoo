#ifndef MAJOR_H_INCLUDED
#define MAJOR_H_INCLUDED
#include "om.h"
class major : public om {
    private:
        float nrPasaport;
    public:
        major();
        major(float nrPasaport);
        ~major();
        
        void set(float nrPasaport);
        friend ostream& operator<<(ostream& os, const major& major);
};
#endif //MAJOR_H_INCLUDED
