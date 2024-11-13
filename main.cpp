#include <iostream>
using namespace std;

int main() {
    int altezza,mattoncininecessari,mattoncini;
     altezza=0;
     mattoncininecessari=0;
     cout<<"quanti sono i mattoncini?"<<endl;
     cin>>mattoncini;
      while (mattoncini>=mattoncininecessari+(altezza+1)) {
        altezza=altezza+1;
        mattoncininecessari=mattoncininecessari+altezza;
      }
        cout<<"l'altezza della piramide è di " <<altezza<<"piani"<<endl;
//LEGGERE LE ISTRUZIONI NEL FILE README.md
