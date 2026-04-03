#include <iostream>
#include <string>
using namespace std;

struct pet{
    string jenis;
    string nama_pet;
    int lapar;
    int bahagia;
    int energi;
    int koin;
};

int main() {
    
    string jenis_pet;
    string nama_pet;
    
    cout << "====== PET SIMULATOR ======" << endl;
    cout << "Masukan jenis pet :" << endl;
    cin >> jenis_pet;
    cout << "Masukan nama pet :" << endl;
    cin >> nama_pet;

    cout << "======== DATA PET ========" << endl;
    cout << "Jenis pet: " << jenis_pet << endl;
    cout << "Nama pet: " << nama_pet << endl;
    
 }
