#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Mendefinisikan variabel untuk waktu mulai dan waktu selesai
    int jamMulai, menitMulai, detikMulai;
    int jamSelesai, menitSelesai, detikSelesai;

    // Mendapatkan waktu mulai dari pengguna
    cout << "Masukkan waktu mulai (HH MM SS): ";
    cin >> jamMulai >> menitMulai >> detikMulai;

    // Mendapatkan waktu selesai dari pengguna
    cout << "Masukkan waktu selesai (HH MM SS): ";
    cin >> jamSelesai >> menitSelesai >> detikSelesai;

    // Menghitung durasi dalam detik
    int durasiDetik = (jamSelesai - jamMulai) * 3600 +
                      (menitSelesai - menitMulai) * 60 +
                      (detikSelesai - detikMulai);

    // Menghitung durasi dalam jam, menit, dan detik
    int durasiJam = durasiDetik / 3600;
    int durasiSisaDetik = durasiDetik % 3600;
    int durasiMenit = durasiSisaDetik / 60;
    int durasiDetikAkhir = durasiSisaDetik % 60;

    // Menghitung biaya total
    double tarifPerJam = 5000.0;
    double biayaTotal = (durasiDetik / 3600.0) * tarifPerJam;

    // Menampilkan hasil
    cout << "\nDurasi Penggunaan: " << setw(2) << durasiJam << " jam "
         << setw(2) << durasiMenit << " menit " << setw(2) << durasiDetikAkhir << " detik\n";
    cout << "Biaya Total: Rp " << fixed << setprecision(2) << biayaTotal << endl;

    return 0;
}
