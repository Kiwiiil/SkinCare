#include <iostream>

using namespace std;

void pilihSubMenuFacialWash() {
    int pilihan;
    do {
        cout << "\nSub Menu Facial Wash :\n";
        cout << "1) Gel" << endl;
        cout << "2) Foam" << endl;
        cout << "3) Kembali ke Pilihan Skincare" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1 :
            cout << "Recommended : Cosrx Cleanser Gel" << endl;
            break;
            case 2 :
            cout << "Recommended : Inisfree facial foam" << endl;
            break;
            default :
            cout << "Pilihan tidak valid." << endl;

        }
    } while (pilihan != 2);
}

void pilihSubMenuFacialWash1() {
    int pilihan;
    do {
        cout << "\nSub Menu Facial Wash :\n";
        cout << "1) Gel" << endl;
        cout << "2) Foam" << endl;
        cout << "3) Kembali ke Pilihan Skincare" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1 :
            cout << "Recommended : Cetaphil cleanser gel" << endl;
            exit (0);
            case 2 :
            cout << "Recommended : Skintific facial foam" << endl;
            exit (0);
        }
    } while (pilihan != 2);
}

void pilihSubMenuFacialWash2() {
    int pilihan;
    do {
        cout << "\nSub Menu Facial Wash :\n";
        cout << "1) Gel" << endl;
        cout << "2) Foam" << endl;
        cout << "3) Kembali ke Pilihan Skincare" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
        cout << endl;
        switch (pilihan) {
            case 1 :
            cout << "Recommended : Cerave cleanser gel" << endl;
            exit (0);
            case 2 :
            cout << "Recommended : Acnes facial foam" << endl;
            exit (0);
            

        }
    } while (pilihan != 3);
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
        cout << endl;

        switch (pilihan) {
            case 1:
            cout << "recommended : Cosrx aloe vera" << endl;
            exit (0);
            case 2:
            cout << "recommended : Glad to glow moisturizer" << endl;
            exit (0);
            case 3:
            cout << "recommended : Skin1004 madagascar" << endl;
            exit (0);
            case 4:
            cout << "Kembali ke Pilihan Skincare" << endl << endl;
            exit (0);
        }

    } while (pilihan != 4);
}

void pilihSubMenuMoisturizer1() {
    int pilihan;
    do {
        cout << "\nSub Menu Moisturizer :\n";
        cout << "1) Emollient (Kulit kering pecah)" << endl;
        cout << "2) Humekhan (Berminyak)" << endl;
        cout << "3) Occlusive (kering)" << endl;
        cout << "4) Kembali ke Pilihan Skincare" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1:
            cout << "recommended : Skintific moisturizer" << endl;
            exit (0);
            case 2:
            cout << "recommended : Dearme Beauty" << endl;
            exit (0);
            case 3:
            cout << "recommended : La roche posay" << endl;
            exit (0);
            case 4:
            cout << "Kembali ke Pilihan Skincare" << endl << endl;
            exit (0);
        }

    } while (pilihan != 4);
}

void pilihSubMenuMoisturizer2() {
    int pilihan;
    do {
        cout << "\nSub Menu Moisturizer :\n";
        cout << "1) Emollient (Kulit kering pecah)" << endl;
        cout << "2) Humekhan (Berminyak)" << endl;
        cout << "3) Occlusive (kering)" << endl;
        cout << "4) Kembali ke Pilihan Skincare" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1:
            cout << "recommended : Dorskin moisturizer" << endl;
            exit (0);
            case 2:
            cout << "recommended : Azarine moisturizer" << endl;
            exit (0);
            case 3:
            cout << "recommended : Illiyon moisturizer" << endl;
            exit (0);
            case 4:
            cout << "Kembali ke Pilihan Skincare" << endl << endl;
            exit (0);
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
        cout << endl;

        switch (pilihan) {
            case 1:
            cout << "recommended : Labore sunscreen" << endl;
            exit (0);
            case 2:
            cout << "recommended : Somethinc Holyshield" << endl;
            exit (0);
            case 3:
            cout << "recommended : Facetology sunscreen" << endl;
            exit (0);
            case 4:
            cout << "Kembali ke Pilihan Skincare" << endl << endl;
            exit (0);
        }

    } while (pilihan != 4);
}

void pilihSubMenuSunscreen1() {
    int pilihan;
    do {
        cout << "\nSub Menu Sunscreen:\n";
        cout << "1) Physical" << endl;
        cout << "2) Chemical" << endl;
        cout << "3) Hybrid" << endl;
        cout << "4) Kembali ke Pilihan Skincare"<< endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1:
            cout << "recommended : Dearme Beauty Sunscreen" << endl;
            exit (0);
            case 2:
            cout << "recommended : Biore Uv" << endl;
            exit (0);
            case 3:
            cout << "recommended : Skinaqua sunscreen" << endl;
            exit (0);
            case 4:
            cout << "Kembali ke Pilihan Skincare" << endl << endl;
            exit (0);
        }

    } while (pilihan != 4);
}

void pilihSubMenuSunscreen2() {
    int pilihan;
    do {
        cout << "\nSub Menu Sunscreen:\n";
        cout << "1) Physical" << endl;
        cout << "2) Chemical" << endl;
        cout << "3) Hybrid" << endl;
        cout << "4) Kembali ke Pilihan Skincare"<< endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
        cout << endl;
        
        switch (pilihan) {
            case 1:
            cout << "recommended : Skintific sunscreen" << endl;
            exit (0);
            case 2:
            cout << "recommended : Inisfree sunscsreen" << endl;
            exit (0);
            case 3:
            cout << "recommended : Implora sunscreen" << endl;
            exit (0);
            case 4:
            cout << "Kembali ke Pilihan Skincare" << endl << endl;
            exit (0);
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

void pilihSkincare1() {
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
                pilihSubMenuFacialWash1();
            case 2:
                pilihSubMenuMoisturizer1();
            case 3:
                pilihSubMenuSunscreen1();
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

void pilihSkincare2() {
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
                pilihSubMenuFacialWash2();
            case 2:
                pilihSubMenuMoisturizer2();
            case 3:
                pilihSubMenuSunscreen2();
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

        if (pilihan == 1) {
            pilihSkincare();
        } else if (pilihan == 2) {
            pilihSkincare1();
        } else if (pilihan == 3) {
           pilihSkincare2();
        } else if (pilihan == 4) {
            cout << "Kembali ke Pilihan Gender" << endl;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 4);
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
