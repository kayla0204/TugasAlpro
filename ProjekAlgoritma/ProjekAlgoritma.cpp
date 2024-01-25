#include <iostream>

using namespace std;

// Fungsi untuk menghitung faktorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Input nilai untuk dihitung faktorialnya
    cout << "Masukkan bilangan untuk dihitung faktorialnya: ";
    cin >> num;

    // Memastikan input tidak negatif
    if (num < 0) {
        cout << "Maaf, faktorial tidak didefinisikan untuk bilangan negatif." << endl;
    } else {
        // Memanggil fungsi faktorial dan menampilkan hasilnya
        cout << "Faktorial dari " << num << " adalah: " << factorial(num) << endl;
    }

    return 0;
}
