/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
#pragma once//kayak requiered once di php
// library
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include "Car.cpp"
#include "Motorcycle.cpp"

using namespace std;
// class untuk ParkingLot atau tempat parkir dimmiliki oleh kelas garasi karena kelas garasi membutuhkan kapasitas kendaraan terparkir dan jumlah kendaraan yang terparkir di garasi
class ParkingLot
{
private://property tempat parkir ada kapasitas dan jumlah kendaraan
    int kapasitas;
    int jumlahKendaraanSaatIni;

public:
    //constructor
    ParkingLot(){
        this->kapasitas = 0;
        this->jumlahKendaraanSaatIni = 0;
    }
    // overload constructor
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
    //destructor
    ~ParkingLot(){

    }
};