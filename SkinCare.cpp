#include <iostream>
using namespace std;

int a,b,c;
void skinc() {

    cout << "Gender :" << endl << "1. Pria" << endl << "2. Wanita" << endl;
    cout << "Pilih Angka : ";
    cin >> a;
    cout << endl;

    switch (a) {
        case 1:
        cout << "Skin Type : " << endl;
        cout << "1. Normal" << endl;
        cout << "2. Dry" << endl;
        cout << "3. Oily" << endl;
        cout << "4. Combination" << endl;
        cout << "5. Acne Prone Skin (dry)" << endl << "6. Acne Prone Skin (Oily)" << endl;
        cout << "7. kembali" << endl;
        cout << "Pilih Angka : ";
        cin >> a;
    }
}

int main () {

    skinc();
    return 0;
}
