#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include <iostream>
using namespace std;
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) L.First

struct pegawai{
    int ID;
    string nama;
    string status;
};

typedef struct pegawai infotype;
typedef struct elmList *address;

struct elmList{
    infotype info;
    address next;
};

struct List{
    address First;
};

void createList(List &L);
address newPegawai(int ID, string nama, string status);
void insertFirst(List &L, address P);
void insertLast(List &L,address P);
void showPegawai(List L);
void statis(List &L, int ID, string nama, string status);
void selectMenu();
address findElm(List L, int ID);

#endif // SLL_H_INCLUDED
