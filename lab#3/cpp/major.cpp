#include "major.h"
#include <iostream>

using namespace std;

major::major(){
    nrPasaport = 100000000;
};

major::major(long nrPasaport){
    this->set(nrPasaport);
};

void major::set(long nrPass){
    if(nrPass>0) {
        nrPasaport = nrPass;
    }
};

ostream& operator<<(ostream& os, const major& major) {
    os << major.nrPasaport<<":"<<major.toString();
    return os;
}
