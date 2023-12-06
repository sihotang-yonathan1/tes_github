#include <iostream>
using namespace std;

void balasan(){
    cout << "\nHalo manusia !" << endl;
}

int main(){
    string nama;
    cout << "Hallo dunia !";
    balasan();
    cout << "Namamu siapa?" << endl;
    getline(cin, nama);
    cout << endl << "Hallo " << nama << "!";
    return 0;
}
