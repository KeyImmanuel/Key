#include "Asuransi_Barang.h"

void createList_1301210302(List &L){
    first(L) = NULL;
    last(L) = NULL;
}

infotype newData_1301210302(int ID, string nama, string barang, int harga){
    infotype X;

    X.ID_asuransi = ID;
    X.nama = nama;
    X.barang = barang;
    X.harga = harga;
    return X;
}

adr newElement_1301210302(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void showAll_1301210302(List L){
   adr P;
   P = first(L);
   cout <<"ID Asuransi\tNama Pelanggan\t\tNama Barang\tHarga"<<endl;
   while (P != NULL){
        cout <<info(P).ID_asuransi<<"\t\t"<<info(P).nama<<"\t\t\t"<<info(P).barang<<"\t\t"<<info(P).harga<<endl;
        P = next(P);
   }
}

void reverseList_1301210302(List L){
    adr P;
    P = last(L);
    cout <<"ID Asuransi\tNama Pelanggan\t\tNama Barang\tHarga"<<endl;
    while (P != NULL){
        cout <<info(P).ID_asuransi<<"\t\t"<<info(P).nama<<"\t\t\t"<<info(P).barang<<"\t\t"<<info(P).harga<<endl;
        P = prev(P);
    }
}

void insertFirst_1301210302(List &L,adr P){
    if (first(L) == NULL) {
        first(L) = P;
        last(L) = P;
    }else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

float average_1301210302(List L){
    float jumlah,Ndata;
    adr P = first(L);
    jumlah = 0;
    Ndata = 0;

    while (P != NULL){
        jumlah += info(P).harga;
        Ndata++;
        P = next(P);
    }
    if (Ndata > 0){
        return jumlah/Ndata;
    }
    return 0;

}

int mainMenu_1301210302(){
    cout << "<==== MENU ====>" << endl;
    cout << "1. Menambah Data baru"<< endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. membalik List" << endl;
    cout << "4. rata-rata" << endl;
    cout << "0. EXIT" << endl;
    cout << endl;

    int input = 0;
    cin >> input;

    return input;
}
