#include <iostream>

using namespace std;

void pilihGender();
void pilihSkinType();
void pilihSkincare();
 void pilihSubMenuFacialWash() ;
 void pilihSubMenuMoisturizer() ;
 void pilihSubMenuSunscreen() ;
 
void pilihGender() {
    int pilihan;
    do {
        cout << "\nPilih Gender:\n";
        cout << "1) Pria" << endl;
        cout << "2) Wanita" << endl;
        cout << "3) Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
            case 2:
                pilihSkinType();
                break;
            case 3:
                cout << "Keluar dari program."<<endl;
                break;
            default:
                cout << "Pilihan tidak valid."<< endl;
        }
    } while (pilihan != 3);
}

void pilihSkinType() {
    int pilihan;
    do {
        cout << "\nPilih Skin Type:\n";
        cout << "1) Normal" << endl;
        cout << "2) Dry "<< endl;
        cout << "3) Oily" << endl;
        cout << "4) Kembali ke Pilihan Gender" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 4) {
            pilihSkincare();
        } else if (pilihan == 4) {
            cout << "Kembali ke Pilihan Gender" << endl;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 4);
}

void pilihSkincare() {
    int pilihan;
    do {
        cout << "\nPilihan Skincare:\n";
        cout << "1) Facial Wash" << endl;
        cout << "2) Moisturizer" << endl;
        cout << "3) Sunscreen" << endl;
        cout << "4) Kembali ke Skin Type" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                pilihSubMenuFacialWash();
            case 2:
                pilihSubMenuMoisturizer();
            case 3:
                pilihSubMenuSunscreen();
                break;
            
                cout << "Tidak ada sub menu untuk pilihan ini.\n";
                break;
            case 4:
                cout << "Kembali ke Skin Type" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 4);
}
    
 void pilihSubMenuFacialWash() {
    int pilihan;
    do {
        cout << "\nSub Menu Facial Wash :\n";
        cout << "1) Gel" << endl;
        cout << "2) Foam" << endl;
        cout << "3) Kembali ke Pilihan Skincare" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
    } while (pilihan != 3);
}
        
        void pilihSubMenuMoisturizer() {
    int pilihan;
    do {
        cout << "\nSub Menu Moisturizer :\n";
        cout << "1) Emollient (Kulit kering)" << endl;
        cout << "2) Humekhan (Berminyak)" << endl;
        cout << "3) Occlusive (Normal)" << endl;
        cout << "4) Kembali ke Pilihan Skincare" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
    } while (pilihan != 4);
}


void pilihSubMenuSunscreen() {
    int pilihan;
    do {
        cout << "\nSub Menu Sunscreen:\n";
        cout << "1) Physical" << endl;
        cout << "2) Chemical" << endl;
        cout << "3) Hybrid" << endl;
        cout << "4) Kembali ke Pilihan Skincare"<< endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
    } while (pilihan != 4);
}

int main() {
    pilihGender();
    return 0;
}
