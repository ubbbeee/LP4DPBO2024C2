# JANJI
 /* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
    kuliah OOP untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
    
# LP4DPBO2024C2
Latihan Praktikum 4 DPBO C2 Alfen Fajri Nurulhaq 2201431
program daftar kendaraan terparkir di garasi
![image](https://github.com/ubbbeee/LP4DPBO2024C2/assets/120569318/55d204ac-d342-433e-8541-2333d67aca98)
terdiri dari Vehicle ,Car ,Motorcycle, ParkingLot, dan Garage
untuk Car dan Motorcycle mengextends ke class Vehicle karena ada atribut - atribut platNomor, merk, tahunProduksi, warna yang bisa diwariskan ke class Car dan Motorcycle dari Vehicle dan Class Vehicle merupakan abstract kelas dengan kata lain masih general

untuk ParkingLot bisa diasumsikan adalah slot parkir satu kotak
sehingga pada garasi bisa has a relationship dengan parkingLot dimana garasi punya beberapa slotParkir
di Garasi saya menambahkan array of object untuk mobil dan motor yaitu daftarKendaraanMobil dan daftarKendaraanMotor
begitu pun saya menambahkan method addMobil untuk menambahkan suatu object mobil ke dalam daftarKendaraanMobil dan enambahkan method addMotor untuk menambahkan suatu object motor ke dalam daftarKendaraanMotor
dan di dalam addMobil dan addMotor saya membuat ketika object kendaraan ditambahkan ke dalam garasi/daftarKendaaraan maka jumlah kendaraan saat ini bertambah, luas garasi berkurang 10 dan kapasitas berkurang 1
ketika kapasitas sudah 0 atau luasgarasi sudah 0 maka kendaraan tidak dapat ditambahkan lagi ke dalam garasi
