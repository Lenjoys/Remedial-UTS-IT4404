#include "SLL.h"
#include <iostream>

void createList(List &L){
    first(L) = NULL;
}

address newPegawai(int ID, string nama, string status){
    address P;
    P = new elmList;
    next(P) = NULL;
    info(P).ID = ID;
    info(P).nama = nama;
    info(P).status = status;
    return P;
}

void insertFirst(List &L ,address P){
    if ( first(L) == NULL ) {
        first(L) = P;
    }else{
        next(P) = first(L);
        first(L) = P;
    }
}

void insertLast(List &L , address P){
    address Q,O;
    if (first(L) == NULL) {
        first(L) = P;
    }else if (next(first(L)) == NULL){
        O = first(L);
        next(O) = P;
    }else {
        Q = first(L);
        while (next(Q)!= NULL ){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void showPegawai(List L){
    address P;
    P = first(L);
    if(P == NULL){
        cout<<"List Kosong"<<endl;
        cout<<endl;
    }
    else{
        while(P != NULL){
            cout<<"ID "<<info(P).ID<<endl;
            cout<<"Nama: "<<info(P).nama<<endl;
            cout<<"Status: "<<info(P).status<<endl;
            cout<<endl;
            P = next(P);
        }
    }
}

void statis(List &L, int ID, string nama, string status){
    address P;
    P = newPegawai(ID,nama,status);
    insertLast(L,P);
}

void selectMenu(){
    cout << "===== MENU =====" << endl;
    cout << "1. Menampilkan List" << endl;
    cout << "2. Mengganti status pegawai" << endl;
    cout << "0. Exit " << endl;
};

address findElm(List L, int ID){
    address P = first(L);
    while(P != NULL){
        if(info(P).ID == ID){
            return P;
        }
        P = next(P);
    }
    return NULL;
}
