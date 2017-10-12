#include "major.h"

using namespace std;

major::major(){
    nrPasaport = 100000000;
};

major::major(float nrPasaport){
    this->set(nrPasaport);
};

void major::set(float nrPasaport){
    if(nrPasaport>0) {
        nrPasaport = nrPasaport % 1;
    }
};

ostream& operator<<(ostream& os, const major& major) {
    os << major.nrPasaport<<":"<<major.toString();
    return os;
}
