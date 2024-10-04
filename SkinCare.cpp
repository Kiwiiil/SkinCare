#include <iostream>
using namespace std;

void skinc (string facialw, int moizturizer){
}
int main (){
    int skinca;
    string facialw;
    int moizturizer;
    cout << "Pilih menu skin care yang kamu inginkan :" << endl;
    cout << "1. Facial Wash" << endl << "2. Moizturizer" << endl;
    cin >> skinca;
    if (skinca == 1){
        cout << "Pilih Facial Wash : " << endl;
        cout << "1.    " << endl << "2.    " << endl;
    } else if (skinca == 2){
        cout << "Pilih Moiturizer : " << endl;
        cout << "1.    " << endl << "2.    " << endl;
    }
    skinc (facialw, moizturizer);

    cin.get();
    return 0;
}
