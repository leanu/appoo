#include "major.h"
#include <iostream>

using namespace std;

major::major(){
    nrPasaport = 100000000;
};

major::major(long nrPasaport){
    this->set(nrPasaport);
};

void major::set(long nrPasaport){
    if(nrPasaport>0) {
        nrPasaport = nrPasaport;
    }
};

ostream& operator<<(ostream& os, const major& major) {
    os << major.nrPasaport<<":"<<major.toString();
    return os;
}
