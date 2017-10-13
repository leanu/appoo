#include <iostream>
using namespace std;

class dirijarea {
    public:
        virtual void dirijarea_radacinilor() {
            cout<<"Dirijarea radacinilor clasa de baza"<<endl;
        }
};

class dirijare_liniara : public dirijarea {
    public:
        virtual void dirijarea_radacinilor() {
            cout<<"Dirijarea liniara"<<endl;
        }
};

class dirijare_patratica : public dirijarea {
    public:
        virtual void dirijarea_radacinilor() {
            cout<<"Dirijarea patratica"<<endl;
        }
};

int main(){
    dirijarea* liniar = new dirijare_liniara();
    dirijarea* patratic = new dirijare_patratica();
    liniar->dirijarea_radacinilor();
    patratic->dirijarea_radacinilor();
    return 0;
}
