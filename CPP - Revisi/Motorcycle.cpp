/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
#pragma once//kayak requiered once di php
// library
#include <iostream>
#include <string>
#include "Vehicle.cpp"

using namespace std;
// class untuk motor subclass dari kendaraan

class Motorcycle : public Vehicle
{
private://property motor ada Jenis motor dan kapasitas tangki dan sisa atribut diambild dari vehicle
    string jenisMotor;
    int kapasitasTangki;

public:

    Motorcycle()
    {
        this->jenisMotor = "";
        this->kapasitasTangki = 0;
    }

    Motorcycle(string jenisMotor, string platNomor, string merk, int tahunProduksi, string warna) : Vehicle(platNomor, merk, tahunProduksi, warna){
        this->jenisMotor = jenisMotor;
        this->kapasitasTangki = 0;
    }

    Motorcycle(string jenisMotor, int kapasitasTangki, string platNomor, string merk, int tahunProduksi, string warna) : Vehicle(platNomor, merk, tahunProduksi, warna) {
        this->jenisMotor = jenisMotor;
        this->kapasitasTangki = kapasitasTangki;
    }
    //getter dan setter
    void setJenisMotor(int jenisMotor){
        this->jenisMotor = jenisMotor;
    }

    string getJenisMotor(){
        return this->jenisMotor;
    }

    void setKapasitasTangki(int kapasitasTangki){
        this->kapasitasTangki = kapasitasTangki;
    }

    int getKapasitasTangki(){
        return this->kapasitasTangki;
    }
    //destructor
    ~Motorcycle(){

    }
};