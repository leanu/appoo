#include<iostream>
#include<string>
#include<fstream>

using namespace std;
struct student {
    string nume;
    string prenume;
    long IDNP;
    int promotia;
    string grupa;
    int notaAM;
    int notaPC;
    int notaA;
    int notaBI;
    int notaE;
    double mediaGenerala;
    int credite;
} stud;
int main(){
    ofstream myfile;
    char c;
    myfile.open("students.txt");
    while(true) {
    cout<<"introdu datele"<<endl;
    cout<<"numele:";
    cin>>stud.nume;    
    cout<<"prenumele:";
    cin>>stud.prenume;
    cout<<"IDNP:";
    cin>>stud.IDNP;
    cout<<"promotia:";
    cin>>stud.promotia;
    cout<<"grupa:";
    cin>>stud.grupa;
    cout<<"Nota Analiza Matematica:";
    cin>>stud.notaAM;
    cout<<"Nota Programarea C:";
    cin>>stud.notaPC;
    cout<<"Nota Algoritmica:";
    cin>>stud.notaA;
    cout<<"Nota Bazele Informaticii:";
    cin>>stud.notaBI;
    cout<<"Nota Engleza:";
    cin>>stud.notaE;
    stud.mediaGenerala=(stud.notaAM+stud.notaPC+stud.notaA+stud.notaBI+stud.notaE)/5.0;
    stud.credite=0;
    if(stud.notaAM>4) { stud.credite+=6;}
    if(stud.notaPC>4) { stud.credite+=6;}
    if(stud.notaA>4) { stud.credite+=6;}
    if(stud.notaBI>4) { stud.credite+=6;}
    if(stud.notaE>4) { stud.credite+=6;}
    myfile<<stud.nume<<" "<<stud.prenume<<" "<<stud.mediaGenerala<<" "<<stud.credite<<endl;
    cout<<"enter another student?[y/n]"<<endl;
    cin>>c;
    if(c=='n') break;
    
    }
    myfile.close();
    return 0;
    
}


