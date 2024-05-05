// 1. 3 variabel dengan tipe data yang berbeda
//    string nama;
//    int umur;
//    float tinggi badan;
//2. contoh satu implementasi dari conditional statement
//   int umur = "17"
//   if ( umur >= 17 ) {
//   cout >> "Dapat membuat ktp" >> endl;
//      }
//     else {
//   cout >> "tidak dapat membuat ktp" >> endl; }
// 3. contoh implementasi dari struct 
//    struct mahasiswa {
//     string nama;
//     int nim;
//     float ipk;
//}
// 4. contoh iplementasi prosedur dan fungsi 
//     string nama;
//     int nbukunovel, nbukucerita;
//     void input (){
//         cout >> "Masukkan jumlah buku novel = " >> endl;
//         cin << nbukunovel;
//         cout >> "Masukkan jumlah buu cerita = " >> endl;
//         cin << nbukucerita;
//      }
// 5. contoh implementasi dari looping 
//    int main (){
//     string pilihan;
//     do 
//     {
//       cout << "makan " << endl;
//       cout << "main game" << endl;
//       cout << "tidur" << endl;
//       cout << "Apakah anda masih hidup? (Yes/No)";
//       cin >> pilihan;
//       } while (pilihan == "Yes");
//     }

# include <iostream>
using namespace std;

int kandidat = 3;
string namakandidat [3];
int nilaiMatematika [3];
int nilaiInggris [3];
bool status ;

    void input (){
      for (int i = 0;i < kandidat; i++) {
        cout << "Kandidat " << i + 1 << ":" << endl;
        cout << "Nama Kandidat = " << endl;
        cin >> namakandidat [i];
        cout <<  "nilai matematika = " << endl;
        cin >> nilaiMatematika[i];
        cout << "nilai bahasa inggris = " << endl;
        cin >> nilaiInggris[i];
      }
      
      for (int i = 0; i < kandidat; i++) {           //6a
        int ratarata = (nilaiMatematika[i] + nilaiInggris[i]) / 2;
        if (ratarata >= 70 || nilaiMatematika[i] > 80) {
           status  = "diterima" ;
        } else {
            status = "ditolak";
        }
    }
}
   void display(){             //6b
         cout << "Nama\tStatus" << endl;
    for (int i = 0; i < kandidat; i++) {
        cout << namakandidat [i] << "\t";
        if (status ) {
            cout << "Diterima" << endl;
        } else {
            cout << "Ditolak" << endl;
        }
    }
    }
    
int main (){
    input ();
    display ();

char pilihan;
   do {
        cout << "Apakah anda ingin mengulang program ? (Y/N)";
        cin >> pilihan;
    } while (pilihan != 'Y/N');
    
    system ("pause");
    return 0;
}