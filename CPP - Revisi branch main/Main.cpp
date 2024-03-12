/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "ParkingLot.cpp"

// library
// program utama
int main() {
    // Membuat objek mobil dan motor untuk dimasukkan ke dalam daftar kendaraan
    Car mobil1(5, 5, "D1234AAA", "Avanza", 2009, "Merah");
    Car mobil2(4, 4, "D5678BBB", "Brio", 2010, "Biru");
    Car mobil3(5, 5, "D9101CCC", "Fortuner", 2011, "Kuning");
    Car mobil4(5, 5, "D6789HJ", "Rush", 2006, "Silver");

    Motorcycle motor1("Sport", 8, "D1212AAA", "CRF", 2012, "Hitam");
    Motorcycle motor2("Trail", 7, "D3434BBB", "Beat", 2013, "Putih");
    Motorcycle motor3("Custom", 6, "D5656CCC", "Vario", 2014, "Abu");
    Motorcycle motor4("Bebek", 10, "D7878DDD", "Supra", 2015, "Hijau");

    // Membuat objek garasi
    ParkingLot slotParkir(10);                  // Kapasitas tempat parkir 10 kendaraan
    Garage garasi("Garasi A", 100, slotParkir); // Nama garasi "Garasi A", luas 100m2, dengan slot parkir

    // Menampilkan atribut garasi sebelum dan sesudah kendaraan dimasukkan
    cout << "Nama Garasi: " << garasi.getNamaGarasi() << endl;
    cout << "Luas Garasi Sebelum Adanya Kendaraan: " << garasi.getLuasGarasi() << " m2" << endl; // Luas garasi sebelum kendaraan dimasukkan
    cout << "Kapasitas Parkir Sebelum Adanya Kendaraan: " << garasi.getSlotParkir().getKapasitas() << endl; // Kapasitas parkir sebelum kendaraan dimasukkan
    cout << "Kendaraan Terparkir: " << garasi.getSlotParkir().getJumlahKendaraanSaatIni() << endl;//kendaraan terpakir ketika kendaraan belum dimasukkan ke dalam garasi
    cout << "\n";

    // Menambahkan mobil dan motor ke garasi
    garasi.addMobil(&mobil1);
    garasi.addMobil(&mobil2);
    garasi.addMobil(&mobil3);
    garasi.addMobil(&mobil4);
    garasi.addMotor(&motor1);
    garasi.addMotor(&motor2);
    garasi.addMotor(&motor3);
    garasi.addMotor(&motor4);

    // Menampilkan atribut garasi sebelum dan sesudah kendaraan dimasukkan
    cout << "Nama Garasi: " << garasi.getNamaGarasi() << endl;
    cout << "Luas Garasi Sesudah Ada Kendaraan Yang Masuk: " << garasi.getLuasGarasi() << " m2" << endl; // Luas garasi setelah kendaraan dimasukkan
    cout << "Kapasitas Parkir Sesudah Ada Kendaraan Yang Masuk: " << garasi.getSlotParkir().getKapasitas() << endl; // Kapasitas parkir setelah kendaraan dimasukkan
    cout << "Kendaraan Terparkir: " << garasi.getSlotParkir().getJumlahKendaraanSaatIni() << endl;//kendaraan terpakir ketika kendaraan sudah dimasukkan ke dalam garasi

    // Menampilkan data mobil
    cout << "\nDaftar Mobil Terparkir:\n\n";
    int kendaraanMobilKe = 0;
    for (Car *mobil : garasi.getDaftarKendaraanMobil())
    {
        kendaraanMobilKe++;
        printf( "Mobil ke - %d\n", kendaraanMobilKe);
        cout << "Plat Nomor: " << mobil->getPlatNomor() << endl;
        cout << "Merk: " << mobil->getMerk() << endl;
        cout << "Tahun Produksi: " << mobil->getTahunProduksi() << endl;
        cout << "Warna: " << mobil->getWarna() << endl;
        cout << "Jumlah Kursi" << mobil->getjumlahKursi() << endl;
        cout << "Jumlah Pintu" << mobil->getJumlahPintu() << endl
             << endl;
    }

    int kendaraanMotorKe = 0;
    // Menampilkan data motor
    cout << "\nDaftar Motor Terparkir:\n\n";
    for (Motorcycle *motor : garasi.getDaftarKendaraanMotor())
    {
        kendaraanMotorKe++;
        printf( "Motor ke - %d\n", kendaraanMotorKe);
        cout << "Plat Nomor: " << motor->getPlatNomor() << endl;
        cout << "Merk: " << motor->getMerk() << endl;
        cout << "Tahun Produksi: " << motor->getTahunProduksi() << endl;
        cout << "Warna: " << motor->getWarna() << endl;
        cout << "Jenis Motor: " << motor->getJenisMotor() << endl;
        cout << "Kapasitas Tangki: " << motor->getKapasitasTangki() << " L" << endl
             << endl;
    }
    return 0;
}