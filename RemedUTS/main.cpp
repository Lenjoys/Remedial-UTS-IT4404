#include <iostream>
#include "SLL.h"

using namespace std;

int main()
{
    List L;
    address P;
    createList(L);
    int ID;
    string status;
    statis(L,1,"Ronaldo","Tetap");
    statis(L,2,"Alves","Kontrak");
    statis(L,3,"Puyol","Tetap");
    statis(L,4,"Rodrigo","Kontrak");
    int pilihan = 0;
    selectMenu();
    cout<<"Pilih : ";
    cin >> pilihan;
    while (pilihan != 0){
        switch(pilihan){
        case 1:
            cout<<endl;
            showPegawai(L);
            cout<<endl;
            selectMenu();
            cout<<"Pilih : ";
            cin>>pilihan;
            break;
        case 2:
            cout<<endl;
            cout<<"Pilih ID Pegawai: ";
            cin>>ID;
            P = findElm(L,ID);
            cout<<"Masukkan status terbaru Pegawai: ";
            cin>>status;
            info(P).status = status;
            cout<<endl;
            selectMenu();
            cout<<"Pilih : ";
            cin>>pilihan;
            break;
        }
    }
}
