#include "major.cpp"
#include "om.cpp"

using namespace std;

int main() {
    om *Vasile, *Andrei;
    major *Anatol, *Igor;

    Vasile = new om("Vasile", 37, 82);
    cout<<Vasile->toString();
    return 0;
}
