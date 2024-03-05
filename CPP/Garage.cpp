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

class Garage // class untuk garasi 
{
// ios::sync_with_stdio(0);

private:
    string namaGarasi;
    int luasGarasi;
    vector<Vehicle*> daftarKendaraan;//disini menggunakan composite daftar kendaraan ke vehicle dan array object dengan vector

public:
//constructor default untuk parkinglot dibawahnya constructor overload karena tidak memungkinkan untuk null pada data jadi di defaultkan
    Garage()
    {
        this->namaGarasi = "";
        this->luasGarasi = 0;
    }

    Garage(string namaGarasi){
        this->namaGarasi = namaGarasi;
        this->luasGarasi = 0;

    }

    Garage(string namaGarasi, int luasGarasi){
        this->namaGarasi = namaGarasi;
        this->luasGarasi = luasGarasi;
    }
//getter dan setter
    void setNamaGarasi(string namaGarasi){
        this->namaGarasi = namaGarasi;
    }

    string getNamaGarasi(){
        return this->namaGarasi;
    }

    void setLuasGarasi(int luasGarasi){
        this->luasGarasi = luasGarasi;
    }

    int getLuasGarasi(){
        return this->luasGarasi;
    }
//menambahkan kendaraan ke daftar kendaraan
    void addDaftarKendaraan(Vehicle* vehicle) {
        daftarKendaraan.push_back(vehicle);
    }

     // Metode untuk mendapatkan daftar kendaraan dalam garasi
    vector<Vehicle*> getDaftarKendaraan() {
        return daftarKendaraan;
    }

    ~Garage(){

    }
};