#include <iostream>
using namespace std;

int main()
{
    // Meminta input dari pengguna
    int skor;
    cout << "Masukkan skor: ";
    cin >> skor;
    
    // Menentukan jenis peti berdasarkan skor
    if (skor < 50)
    {
        cout << "Perunggu" << endl;
    }
    else if (skor < 100)
    {
        cout << "Perak" << endl;
    }
    else if (skor < 200)
    {
        cout << "Emas" << endl;
    }
    else
    {
        cout << "Mitos" << endl;
    }

    return 0;
}
