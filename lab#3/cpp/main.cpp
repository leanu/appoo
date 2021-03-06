#include "major.cpp"
#include "om.cpp"

using namespace std;

int main() {
    om *Vasile, *Andrei;
    major *Anatol, *Igor;

    Vasile = new om("Vasile", 37, 82);
    cout<<Vasile->toString();

    Anatol = new major(1003432);
    cout<<*Anatol;
    Anatol->setnrPasaport(20084005);
    Anatol->setVirsta(42);
    cout<<*Anatol;
    cout<<Anatol->getnrPasaport();
    return 0;
}
