/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
#pragma once//kayak requiered once di php
// library
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include "Vehicle.cpp"

using namespace std;
// class untuk ParkingLot atau tempat parkir 
class ParkingLot
{
private:
    int kapasitas;
    int jumlahKendaraanSaatIni;
    vector<Vehicle*> daftarKendaraan;//disini menggunakan composite daftar kendaraan ke vehicle dan array object dengan vector


public:
        //constructor default untuk parkinglot dibawahnya constructor overload karena tidak memungkinkan untuk null pada data jadi di defaultkan
    ParkingLot(){
        this->kapasitas = 0;
        this->jumlahKendaraanSaatIni = 0;
    }

    ParkingLot(int kapasitas){
        this->kapasitas = kapasitas;
        this->jumlahKendaraanSaatIni = 0;
    }

    ParkingLot(int kapasitas, int jumlahKendaraanSaatIni){
        this->kapasitas = kapasitas;
        this->jumlahKendaraanSaatIni = jumlahKendaraanSaatIni;
    }
    //getter dan stter
    void setKapasitas(int kapasitas){
        this->kapasitas = kapasitas;
    }

    int getKapasitas(){
        return this->kapasitas;
    }

    void setJumlahKendaraanSaatIni(int jumlahKendaraanSaatIni){
        this->jumlahKendaraanSaatIni = jumlahKendaraanSaatIni;
    }

    int getJumlahKendaraanSaatIni(){
        return this->jumlahKendaraanSaatIni;
    }
    //untuk memasukkan object kendaraan ke dalam daftar kendaraan
    void addDaftarKendaraan(Vehicle* vehicle) {
        daftarKendaraan.push_back(vehicle);
        jumlahKendaraanSaatIni++;
    }

    //get daftar kendaraan
    vector<Vehicle*> getDaftarKendaraan() {
        return daftarKendaraan;
    }
    //destructor
    ~ParkingLot(){

    }
};