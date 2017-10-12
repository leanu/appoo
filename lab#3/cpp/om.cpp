#include "om.h"

using namespace std;

om::om() {
    nume = "Ion";
    virsta = 25;
    greutate = 70;
};

om::om(string nume){
    nume = nume;
    virsta = 25;
    greutate = 70;
}

om::om(string nume, int virsta, int greutate) {
    nume = nume;
    if(virsta>=0 and virsta <=120) {
        virsta = virsta;
    }
    else {
        virsta = 25;
    }
    if(greutate>=3 and greutate<=200) {
        greutate=greutate;
    }
    else {
        greutate = 70;
    }
};

om& om::operator=(om& o) {
    om* = new om(o.nume, o.virsta, o.greutate);
    return *om;
}
