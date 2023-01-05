#include <iostream>
#include "flight.h"

using namespace std;

int main()
{
    ListJadwal L;
    int n;
    int i = 1;
    string Kode, Jenis, Tanggal, Waktu, Asal, Tujuan, dari, ke, tanggal;
    int Kapasitas;
    adr_jadwalP P;
    infotype X;

    createListJadwal_1301210572(L);

    cout << " Masukkan berapa kali penerbangan: ";
    cin >> n;
    while(i <= n){
        cout << "data ke- " << i << endl;
        cout << "Masukkan Kode      : ";
        cin >> Kode;
        X.Kode = Kode;
        cout << "Masukkan Jenis     : ";
        cin >> Jenis;
        X.Jenis = Jenis;
        cout << "Masukkan Tanggal   : ";
        cin >> Tanggal ;
        X.Tanggal = Tanggal ;
        cout << "Masukkan Waktu     : ";
        cin >> Waktu;
        X.Waktu = Waktu;
        cout<< "Masukkan Asal      : ";
        cin >> Asal;
        X.Asal = Asal;
        cout << "Masukkan Tujuan    : ";
        cin >> Tujuan;
        X.Tujuan = Tujuan;
        cout << "Masukkan Kapasitas : ";
        cin >> Kapasitas;
        cout << endl;
        X.Kapasitas = Kapasitas;
        P = createElemenJadwal_1301210572(X);
        insertLastJ_1301210572(L, P);
        i++;
    }

    cout << endl;
    cout << "Print Sebelum Dihapus" << endl;
    showJadwal_1301210572(L);
    deleteFirstJ_1301210572(L,P);
    cout << endl;
    cout << "Print Setelah Dihapus" << endl;
    showJadwal_1301210572(L);
    cout << endl;

    cout << "-- Jadwal --"<< endl;
    cout << "Masukkan Asal : ";
    cin >> dari;
    cout << "Masukkan Tujuan : ";
    cin >> ke;
    cout << "Masukkan Tanggal : ";
    cin >> tanggal;
    cout << endl;

    if(searchJ_1301210572(L, dari, ke, tanggal)){
        cout << "Jadwal Ditemukan"<<endl;
        adr_jadwalP P = first(L);
        while (P != nil){
            if (info(P).Asal == dari && info(P).Tujuan == ke && info(P).Tanggal == tanggal){
            cout << "Kode penerbangan      : " << info(P).Kode << endl;
            cout << "Jenis penerbangan     : " << info(P).Jenis << endl;
            cout << "Tanggal penerbangan   : " << info(P).Tanggal << endl;
            cout << "Waktu penerbangan     : " << info(P).Waktu << endl;
            cout << "Asal penerbangan      : " << info(P).Asal << endl;
            cout << "Tujuan penerbangan    : " << info(P).Tujuan << endl;
            cout << "Kapasitas penerbangan : " << info(P).Kapasitas << endl;
            P = next(P);
            }
        }
    }
    if(!searchJ_1301210572(L, dari, ke, tanggal)){
        cout << "Jadwal Tidak Ditemukan" << endl;
    }
    return 0;
}
