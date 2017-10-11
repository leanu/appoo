#include<iostream>
#include<string>
#include<fstream>
#include<vector>
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
    long id;
    int pos=0;
    std::vector< student > students;
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
        students.push_back(stud);
        cout<<"enter another student?[y/n]"<<endl;
        cin>>c;
        if(c=='n') break;
    }
    cout<<"cauta student(dupa ID):";
    cin>>id;
    
    for(student stud : students) {
        if(stud.IDNP==id) {
            cout<<"found:"<<endl;
            cout<<stud.nume<<" "<<stud.prenume<<" "<<stud.mediaGenerala<<" "<<stud.credite<<endl;
        }
    }

    cout<<"numarul de studenti:"<<students.size()<<endl;
    cout<<"sterge student(dupa ID):";
    cin>>id;
    pos=-1;
    for(student stud : students) {
        if(stud.IDNP==id) {
            pos+=1;
            break;
        }
        pos+=1;
    }
    students.erase(students.begin()+pos);
    cout<<"numarul de studenti:"<<students.size()<<endl;

    myfile.open("students.txt");
    for(student stud: students) {
        myfile<<stud.nume<<" "<<stud.prenume<<" "<<stud.mediaGenerala<<" "<<stud.credite<<endl;
    }
    myfile.close();
    return 0;
    
}


