/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
#pragma once//kayak requiered once di php
//library
#include <iostream>
#include <string>
#include "Vehicle.cpp"

using namespace std;

// class untuk mobil subclass dari kendaraan/Vehicle
class Car : public Vehicle
{
private://property mobil ada jumlah kursi dan jumlah pintu
    int jumlahKursi;
    int jumlahPintu;

public:
    //constructor
    Car()
    {
        this->jumlahKursi = 0;
        this->jumlahPintu = 0;
    }
    //overload
    Car(int jumlahKursi, string platNomor, string merk, int tahunProduksi, string warna) : Vehicle(platNomor, merk, tahunProduksi, warna){
        this->jumlahKursi = jumlahKursi;
        this->jumlahPintu = 0;
    }

    Car(int jumlahKursi, int jumlahPintu, string platNomor, string merk, int tahunProduksi, string warna) : Vehicle(platNomor, merk, tahunProduksi, warna){
        this->jumlahKursi = jumlahKursi;
        this->jumlahPintu = jumlahPintu;
    }
    //getetr dan setter
    void setjumlahKursi(int jumlahKursi){
        this->jumlahKursi = jumlahKursi;
    }

    int getjumlahKursi(){
        return this->jumlahKursi;
    }

    void setJumlahPintu(int jumlahPintu){
        this->jumlahPintu = jumlahPintu;
    }

    int getJumlahPintu(){
        return this->jumlahPintu;
    }
    //destructor
    ~Car(){

    }
};