/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
#pragma once // kayak requiered once di php
// library
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "ParkingLot.cpp"

using namespace std;

class Garage // class untuk garasi mengcomposite class parkinglot, kendaraan Car dan Motorcycle karena pasti didalam garasi akan ada kendaraan motor dan mobil
{

private:
    string namaGarasi;
    int luasGarasi;//luas garasi dibutuhkan untuk mengimplementasikan luas dari garasi ketika ada kendaraan terparkir di garasi maka luas garasi akan berkurang dalam artian kendaraan yang akan diparkirkan akan tidak bisa dimasukkan ketika luas dari garasi sudah tidak ada slot parkir
    vector<Car *> daftarKendaraanMobil;//untuk memasukkan bermacam objek kendaraan mobil ke dalam daftar kendaraan mobil menggunakan vector
    vector<Motorcycle *> daftarKendaraanMotor;//untuk memasukkan bermacam objek kendaraan motor ke dalam daftar kendaraan motor menggunakan vector
    ParkingLot slotParkir;//membuat slotparkir mengcomposite dari parkinglot

public:
    void addMobil(Car *mobil)
    {
        if (this->slotParkir.getKapasitas() - this->slotParkir.getJumlahKendaraanSaatIni() > 0 || luasGarasi != 0)//di kondisikan jika kapasitas masih ada untuk kendaraan atau luas garasi masih ada 
        {//maka object kendaraan mobil dapat diparkirkan di garasi
            this->slotParkir.setJumlahKendaraanSaatIni(this->slotParkir.getJumlahKendaraanSaatIni() + 1);//ketika object mobil dimasukkan maka kendaraan yang terparkir di garasi akan bertambah 1
            this->daftarKendaraanMobil.push_back(mobil);//memasukkan object mobil kedalam daftar kendaraan mobil
            this->luasGarasi = luasGarasi - 10;//ketika object dimasukkan maka luas garasi berkurang 10 terus jika ada mobil dimasukkan sampai luas garasi 0
            this->slotParkir.setKapasitas(this->slotParkir.getKapasitas() - 1);//begitupun kapasitas ketika mobil dimasukkan maka kapasitas kendaraan digarasi berkurang 1
        }
        else
        {
            cout << "Garasi Penuh" << endl;//kalau kondisi kapasitas dan luas garasi sudah 0 atau tidak ada maka beri alert garasi penuh
        }
    }

    //sama dengan mobil
    void addMotor(Motorcycle *motor)
    {
        if (this->slotParkir.getKapasitas() - this->slotParkir.getJumlahKendaraanSaatIni() > 0 || luasGarasi != 0)
        {
            daftarKendaraanMotor.push_back(motor);
            this->slotParkir.setJumlahKendaraanSaatIni(this->slotParkir.getJumlahKendaraanSaatIni() + 1);
            this->luasGarasi = luasGarasi - 10;
            this->slotParkir.setKapasitas(this->slotParkir.getKapasitas() - 1);
        }
        else
        {
            cout << "Garasi Penuh" << endl;
        }
    }

    //constructor
    Garage()
    {
        this->namaGarasi = "";
        this->luasGarasi = 0;
    }
    //overload
    Garage(string namaGarasi)
    {
        this->namaGarasi = namaGarasi;
        this->luasGarasi = 0;
    }

    Garage(string namaGarasi, int luasGarasi)
    {
        this->namaGarasi = namaGarasi;
        this->luasGarasi = luasGarasi;
    }

    Garage(string namaGarasi, int luasGarasi, ParkingLot slotParkir)
    {
        this->namaGarasi = namaGarasi;
        this->luasGarasi = luasGarasi;
        this->slotParkir = slotParkir;
    }

    // getter dan setter
    void setNamaGarasi(string namaGarasi)
    {
        this->namaGarasi = namaGarasi;
    }

    string getNamaGarasi()
    {
        return this->namaGarasi;
    }

    void setLuasGarasi(int luasGarasi)
    {
        this->luasGarasi = luasGarasi;
    }

    int getLuasGarasi()
    {
        return this->luasGarasi;
    }

    void setDaftarKendaraanMobil(vector<Car *> daftarKendaraanMobil)
    {
        this->daftarKendaraanMobil = daftarKendaraanMobil;
    }

    void setDaftarKendaraanMotor(vector<Motorcycle *> daftarKendaraanMotor)
    {
        this->daftarKendaraanMotor = daftarKendaraanMotor;
    }

    vector<Car *> getDaftarKendaraanMobil()
    {
        return daftarKendaraanMobil;
    }

    vector<Motorcycle *> getDaftarKendaraanMotor()
    {
        return daftarKendaraanMotor;
    }

    ParkingLot getSlotParkir()
    {
        return this->slotParkir;
    }

    void setSlotParkir(ParkingLot slotParkir)
    {
        this->slotParkir = slotParkir;
    }

    ~Garage()
    {
    }
};