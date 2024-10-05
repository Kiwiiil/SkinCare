#include <iostream>

using namespace std;

void pilihSubMenuCleanser() {
    int pilihan;
    do {
        cout << "\nSub Menu Cleanser:\n";
        cout << "1) Milk Cleanser" << endl;
        cout << "2) Micellar Water" << endl;
        cout << "3) Cleansing Oil" << endl;
        cout << "4) Kembali ke Pilihan Skincare" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
        
        if (pilihan >= 1 && pilihan <= 3) {
            int harga;
            cout << "Kisaran Harga:" << endl;
            cout << "1) Low" << endl;
            cout << "2) Medium" << endl;
            cout << "3) High" << endl;
            cout << "Masukkan pilihan harga: ";
            cin >> harga;
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
        
        if (pilihan >= 1 && pilihan <= 2) {
            int harga;
            cout << "Kisaran Harga:" << endl;
            cout << "1) Low" << endl;
            cout << "2) Medium" << endl;
            cout << "3) High" << endl;
            cout << "Masukkan pilihan harga: ";
            cin >> harga;
        }
        
        void pilihSubMenuMoisturizer() {
    int pilihan;
    do {
        cout << "\nSub Menu Moisturizer :\n";
        cout << "1) Emollient (Kulit kering pecah)" << endl;
        cout << "2) Humekhan (Berminyak)" << endl;
        cout << "3) Occlusive (kering)" << endl;
        cout << "4) Kembali ke Pilihan Skincare" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
        
        if (pilihan >= 1 && pilihan <= 3) {
            int harga;
            cout << "Kisaran Harga:" << endl;
            cout << "1) Low" << endl;
            cout << "2) Medium" << endl;
            cout << "3) High" << endl;
            cout << "Masukkan pilihan harga: ";
            cin >> harga;
        }

    } while (pilihan != 4);
}

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

        if (pilihan >= 1 && pilihan <= 3) {
            int harga;
            cout << "Kisaran Harga:" << endl;
            cout << "1) Low" << endl;
            cout << "2) Medium" << endl;
            cout << "3) High" << endl;
            cout << "Masukkan pilihan harga: ";
            cin >> harga;
        }

    } while (pilihan != 4);
}

void pilihSkincare() {
    int pilihan;
    do {
        cout << "\nPilihan Skincare:\n";
        cout << "1) Cleanser" << endl;
        cout << "2) Facial Wash" << endl;
        cout << "3) Moisturizer" << endl;
        cout << "4) Sunscreen" << endl;
        cout << "5) Kembali ke Skin Type" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                pilihSubMenuCleanser();
                break;
            case 2:
                pilihSubMenuFacialWash();
            case 3:
                pilihSubMenuMoisturizer();
            case 4:
                pilihSubMenuSunscreen();
                break;
            
                cout << "Tidak ada sub menu untuk pilihan ini.\n";
                break;
            case 5:
                cout << "Kembali ke Skin Type" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 5);
}

void pilihSkinType() {
    int pilihan;
    do {
        cout << "\nPilih Skin Type:\n";
        cout << "1) Normal" << endl;
        cout << "2) Dry "<< endl;
        cout << "3) Oily" << endl;
        cout << "4) Combination" << endl;
        cout << "5) Acne Prone Skin (Dry)" << endl;
        cout << "6) Acne Prone Skin (Oily)" << endl;
        cout << "7) Kembali ke Pilihan Gender" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 6) {
            pilihSkincare();
        } else if (pilihan == 7) {
            cout << "Kembali ke Pilihan Gender" << endl;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 7);
}

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

int main() {
    pilihGender();
    return 0;
}
