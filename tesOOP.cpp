
#include <iostream>
using namespace std;

class mahasiswa {
    public:
    string nama, jurusan ; char nomor;
    void salam(){
        cout<<"Halo "<<nama<<" "<< "Selamat belajar OOP"<<endl;
    }
    
    
};
int main() {
    mahasiswa mhs1;
    mhs1.nama = "Lutfi";
    mhs1.salam();
    
    return 0;
}