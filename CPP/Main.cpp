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
//library
//program utama
int main()
{
    // Membuat objek mobil dan motor untuk dimasukkan ke dalam daftar kendaraan
    Car mobil1(5, 5, "D1234AAA", "Avanza", 2009, "Merah");
    Car mobil2(4, 4, "D5678BBB", "Brio", 2010, "Biru");
    Car mobil3(5, 5, "D9101CCC", "Fortuner", 2011, "Kuning");
    Car mobil4(5, 5, "D6789HJ", "Rush", 2006, "Silver");

    Motorcycle motor1("Sport", 8, "D1212AAA", "CRF", 2012, "Hitam");
    Motorcycle motor2("Trail", 7, "D3434BBB", "Beat", 2013, "Putih");
    Motorcycle motor3("Custom", 6, "D5656CCC", "Vario", 2014, "Abu");
    Motorcycle motor4("Bebek", 10, "D7878DDD", "Supra", 2015, "Hijau");

    //membuat list untuk kendaraan
    vector<Vehicle *> listKendaraan1 = {&mobil1, &mobil2, &motor1};
    vector<Vehicle *> listKendaraan2 = {&mobil3, &motor2, &motor3};
    vector<Vehicle *> listKendaraan3 = {&mobil4, &motor4};

    //buat object parkiran dan garasi
    ParkingLot parkiranMall(300, 0);
    Garage garasiRumah("Garasi Rumah", 15);
    Garage garasiKantor("Garasi Kantor", 20);

    //foreach untuk menambah data kendaraan
    for (auto &vehicle : listKendaraan1)
    {
        parkiranMall.addDaftarKendaraan(vehicle);
    }
    for (auto &vehicle : listKendaraan2)
    {
        garasiRumah.addDaftarKendaraan(vehicle);
    }
    for (auto &vehicle : listKendaraan3)
    {
        garasiKantor.addDaftarKendaraan(vehicle);
    }

    // membuat list untuk parkiran dan garasi
    vector<ParkingLot> listParkiran = {parkiranMall};
    vector<Garage> listGarasi = {garasiRumah, garasiKantor};

    //tampilkan data parkiran
    int dataParkiran = 1;
    for (auto parkiran : listParkiran)//untuk setiap list parkiran di parkiran
    {
        cout << "Parkiran ke-" << dataParkiran << endl;
        cout << "Data Parkiran Mall" << endl;
        cout << "Jumlah kendaraan terparkir   : " << parkiran.getJumlahKendaraanSaatIni() << " kendaraan" << endl;
        cout << "Kapasitas : " << parkiran.getKapasitas() << " kendaraan" << endl;
        cout <<endl;
        cout << "Daftar kendaraan yang terparkir:" << endl;

        // Looping melalui daftar kendaraan di parkiran
        int dataKendaraanDiParkiran = 1;
        for (auto vehicle : parkiran.getDaftarKendaraan())//untuk setiap kendaraan di parkiran
        {
            cout << "Kendaraan ke-" << dataKendaraanDiParkiran << endl;
            cout << "Plat Nomor      : " << vehicle->getPlatNomor() << endl;
            cout << "Jenis kendaraan : ";

            // Memeriksa jenis kendaraan
            if (dynamic_cast<Car *>(vehicle))//kalau kendaraannya mobil
            {
                cout << "Mobil" << endl;
                cout << "Jumlah kursi    : " << dynamic_cast<Car *>(vehicle)->getjumlahKursi() << endl;
                cout << "Jumlah pintu    : " << dynamic_cast<Car *>(vehicle)->getJumlahPintu() << endl;
            }
            else//kalau kendaraan nya motor
            {
                cout << "Sepeda motor" << endl;
                cout << "Jenis motor     : " << dynamic_cast<Motorcycle *>(vehicle)->getJenisMotor() << endl;
                cout << "Kapasitas tangki: " << dynamic_cast<Motorcycle *>(vehicle)->getKapasitasTangki() << " liter" << endl;
            }
            cout << "Merk            : " << vehicle->getMerk() << endl;
            cout << "Tahun Produksi  : " << vehicle->getTahunProduksi() << endl;
            cout << "Warna           : " << vehicle->getWarna() << endl
                 << endl;
            dataKendaraanDiParkiran++;
        }
        dataParkiran++;
    }

    //tampilkan data garasi
    cout << "Data Garasi" << endl;
    int dataGarasi = 1;
                for (auto garasi : listGarasi) {//untuk setiap garasi di list garasi
                    int dataKendaraanDiGarasi = 1;
                    cout << "Garasi Ke-" << dataGarasi << endl;
                    cout << "Nama : " << garasi.getNamaGarasi() << endl;
                    cout << "Luas garasi: " << garasi.getLuasGarasi() << " m^2" << endl;
                    cout << "Daftar kendaraan yang digarasi:" << endl << endl;

                    // Looping melalui daftar kendaraan di garasi
                    for (auto vehicle : garasi.getDaftarKendaraan()) {
                        cout << "Kendaraan ke-" << dataKendaraanDiGarasi << endl;
                        cout << "Plat Nomor      : " << vehicle->getPlatNomor() << endl;
                        cout << "Jenis kendaraan : ";

                        // Memeriksa jenis kendaraan
                        if (dynamic_cast<Car*>(vehicle)) {//kalau mobil
                            cout <<"Mobil" << endl;
                            cout <<"Jumlah kursi    : " << dynamic_cast<Car*>(vehicle)->getjumlahKursi() << endl;
                            cout <<"Jumlah pintu    : " << dynamic_cast<Car*>(vehicle)->getJumlahPintu() << endl;
                        } else {//kalau motor
                            cout <<"Sepeda motor" << endl;
                            cout <<"Jenis motor     : " << dynamic_cast<Motorcycle*>(vehicle)->getJenisMotor() << endl;
                            cout <<"Kapasitas tangki: " << dynamic_cast<Motorcycle*>(vehicle)->getKapasitasTangki() << " liter" << endl;
                        }
                        cout << "Merk            : " << vehicle->getMerk() << endl;
                        cout << "Tahun Produksi  : " << vehicle->getTahunProduksi() << endl;
                        cout << "Warna           : " << vehicle->getWarna() << endl << endl;
                        dataKendaraanDiGarasi++;
                    }
                    dataGarasi++;
                }
    return 0;
}