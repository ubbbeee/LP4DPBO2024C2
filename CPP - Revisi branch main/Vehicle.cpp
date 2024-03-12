/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
#pragma once // kayak requiered once di php
// library
#include <iostream>
#include <string>

using namespace std;
// kelas untuk kendaraan yang merupakan superclass dari Car dan Motorcycle
class Vehicle
{
private:               // pembauatan property private
    string platNomor;  // string plat nomor
    string merk;       // string merk
    int tahunProduksi; // untuk tahunProduksi
    string warna;      // untuk warna

public:
    Vehicle() // constructor
    {
        this->platNomor = "";
        this->merk = "";
        this->tahunProduksi = 0;
        this->warna = "";
    }
    // overload constructor
    Vehicle(string platNomor)
    {
        this->platNomor = platNomor;
        this->merk = "";
        this->tahunProduksi = 0;
        this->warna = "";
    }
    // overload constructor

    Vehicle(string platNomor, string merk)
    {
        this->platNomor = platNomor;
        this->merk = merk;
        this->tahunProduksi = 0;
        this->warna = "";
    }
    // overload constructor

    Vehicle(string platNomor, string merk, int tahunProduksi)
    {
        this->platNomor = platNomor;
        this->merk = merk;
        this->tahunProduksi = tahunProduksi;
        this->warna = "";
    }
    // overload constructor

    Vehicle(string platNomor, string merk, int tahunProduksi, string warna)
    {
        this->platNomor = platNomor;
        this->merk = merk;
        this->tahunProduksi = tahunProduksi;
        this->warna = warna;
    }

    // getter dan setter
    void setPlatNomor(string platNomor)
    {
        this->platNomor = platNomor;
    }

    string getPlatNomor()
    {
        return this->platNomor;
    }

    void setMerk(string merk)
    {
        this->merk = merk;
    }

    string getMerk()
    {
        return this->merk;
    }

    void setTahunProduksi(int tahunProduksi)
    {
        this->tahunProduksi = tahunProduksi;
    }

    int getTahunProduksi()
    {
        return this->tahunProduksi;
    }

    void setWarna(string warna)
    {
        this->warna = warna;
    }

    string getWarna()
    {
        return this->warna;
    }
    ~Vehicle() // destructor
    {
    }
};