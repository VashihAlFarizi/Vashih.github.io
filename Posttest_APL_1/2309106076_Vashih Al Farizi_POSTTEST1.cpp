#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Fungsi untuk mengonversi ke Kilometer per jam
double konversiKeKmPerJam(double nilai, string dari) {
    if (dari == "Centimeter/detik")
        return nilai * 0.036;
    else if (dari == "Meter/detik")
        return nilai * 3.6;
    else if (dari == "Mil/jam")
        return nilai * 1.609;
    else
        return nilai;
}

// Fungsi untuk mengonversi ke Centimeter per detik
double konversiKeCmPerDetik(double nilai, string dari) {
    if (dari == "Kilometer/jam")
        return nilai * 27.778;
    else if (dari == "Meter/detik")
        return nilai * 100;
    else if (dari == "Mil/jam")
        return nilai * 44.704;
    else
        return nilai;
}

// Fungsi untuk mengonversi ke Meter per detik
double konversiKeMPerDetik(double nilai, string dari) {
    if (dari == "Kilometer/jam")
        return nilai * 0.278;
    else if (dari == "Centimeter/detik")
        return nilai * 0.01;
    else if (dari == "Mil/jam")
        return nilai * 0.447;
    else
        return nilai;
}

// Fungsi untuk mengonversi ke Mil per jam
double konversiKeMilPerJam(double nilai, string dari) {
    if (dari == "Kilometer/jam")
        return nilai * 0.621;
    else if (dari == "Centimeter/detik")
        return nilai * 0.0224;
    else if (dari == "Meter/detik")
        return nilai * 2.237;
    else
        return nilai;
}

int main() {
    string nama, nim, inputMenu, inputSatuan;
    double nilai;
    int percobaan = 0;

    do {
        cout << "Masukkan Nama: ";
        cin >> nama;
        cout << "Masukkan NIM: ";
        cin >> nim;

        while (percobaan < 3) {
            cout << "Menu:\n";
            cout << "1. Konversi Kilometer/jam ke (Centimeter/detik, Meter/detik, Mil/jam)\n";
            cout << "2. Konversi Centimeter/detik ke (Kilometer/jam, Meter/detik, Mil/jam)\n";
            cout << "3. Konversi Meter/detik ke (Kilometer/jam, Centimeter/detik, Mil/jam)\n";
            cout << "4. Konversi Mil/jam ke (Kilometer/jam, Centimeter/detik, Meter/detik)\n";
            cout << "Pilih menu (1-4) atau ketik 'exit' untuk keluar: ";
            cin >> inputMenu;

            if (inputMenu == "exit")
                break;

            if (inputMenu != "1" && inputMenu != "2" && inputMenu != "3" && inputMenu != "4") {
                cout << "Menu tidak valid!\n";
                continue;
            }

            cout << "Masukkan nilai: ";
            cin >> nilai;
            cout << "Masukkan satuan: ";
            cin >> inputSatuan;

            if (inputMenu == "1") {
                double hasil = konversiKeKmPerJam(nilai, inputSatuan);
                cout << "Hasil konversi: " << fixed << setprecision(2) << hasil << " Kilometer/jam\n";
            } else if (inputMenu == "2") {
                double hasil = konversiKeCmPerDetik(nilai, inputSatuan);
                cout << "Hasil konversi: " << fixed << setprecision(2) << hasil << " Centimeter/detik\n";
            } else if (inputMenu == "3") {
                double hasil = konversiKeMPerDetik(nilai, inputSatuan);
                cout << "Hasil konversi: " << fixed << setprecision(2) << hasil << " Meter/detik\n";
            } else if (inputMenu == "4") {
                double hasil = konversiKeMilPerJam(nilai, inputSatuan);
                cout << "Hasil konversi: " << fixed << setprecision(2) << hasil << " Mil/jam\n";
            }
        }

        percobaan++;
        if (percobaan == 3) {
            cout << "Anda telah melebihi batas percobaan. Program berhenti.\n";
            break;
        }

        cout << "Apakah Anda ingin melanjutkan program? (y/n): ";
        char pilihan;
        cin >> pilihan;
        if (pilihan == 'n' || pilihan == 'N')
            break;
    } while (true);

    cout << "Terima kasih, " << nama << ". Sampai jumpa lagi!\n";

    return 0;
}
