#ifndef ASURANSI_BARANG_H_INCLUDED
#define ASURANSI_BARANG_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

struct dataAsuransi {
    int ID_asuransi;
    string nama;
    string barang;
    int harga;
};

typedef dataAsuransi infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void createList_1301210302(List &L);
infotype newData_1301210302(int ID, string nama, string barang, int harga);
adr newElement_1301210302(infotype x);
void showAll_1301210302(List L);
void reverseList_1301210302(List L);
void insertFirst_1301210302(List &L,adr P);
float average_1301210302(List L);
int mainMenu_1301210302();


#endif // ASURANSI_BARANG_H_INCLUDED
