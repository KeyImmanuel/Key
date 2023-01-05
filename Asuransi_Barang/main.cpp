#include <iostream>
#include "Asuransi_Barang.h"

using namespace std;

int main()
{
    List L;

    createList_1301210302(L);

    int ID, harga;
    string nama, barang;
    int pilihan = 0;
    int jum = 0;
    int i = 0;
    adr P;
    infotype data;

    pilihan = mainMenu_1301210302();
    while (pilihan != 0){
        switch(pilihan){
        case 1:
            cout << "Jumlah Data yang Ditambahkan : ";
            cin >> jum;

            while (i<jum) {
                cout << "Tambah Data Baru" << endl;
                cout << "ID Asuransi : ";
                cin >> ID;
                cout << "Nama Pelanggan : ";
                cin >> nama;
                cout << "Nama Barang : ";
                cin >> barang;
                cout << "Harga : ";
                cin >> harga;
                cout << endl;

                data = newData_1301210302(ID, nama, barang, harga);
                P = newElement_1301210302(data);
                insertFirst_1301210302(L, P);\
                i++;
            }
            cout << endl;
            break;

        case 2:
            showAll_1301210302(L);
            cout << endl;
            break;

        case 3:
            reverseList_1301210302(L);
            cout << endl;
            break;

        case 4:
            cout<<average_1301210302(L);
            cout << endl;
            break;
        }
        pilihan = mainMenu_1301210302();
    }
    cout << "Selesai!" << endl;
    return 0;
}
