#include "om.h"
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;

om::om() {
    nume = "Ion";
    virsta = 25;
    greutate = 70;
};

om::om(string n){
    nume = nume;
    virsta = 25;
    greutate = 70;
}

om::om(string n, int v, int g) {
    nume = n;
    if(v>=0 and v <=120) {
        virsta = v;
    }
    else {
        virsta = 25;
    }
    if(g>=3 and g<=200) {
        greutate=g;
    }
    else {
        greutate = 70;
    }
};

om& om::operator=(om& o) {
    om* temp = new om(o.nume, o.virsta, o.greutate);
    return *temp;
}

string om::toString() const{
    stringstream sstm;
    sstm<<nume<<", "<<virsta<<" ani, "<<greutate<<" kg"<<endl;
    string str = sstm.str();
    return str;
}
