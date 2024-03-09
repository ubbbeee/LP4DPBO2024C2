# /* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
#    kuliah OOP untuk keberkahanNya maka saya tidak
#    melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/

from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot

# program utama
def main():
    # Membuat objek mobil dan motor untuk dimasukkan ke dalam daftar kendaraan
    mobil1 = Car(5, 5, "D1234AAA", "Avanza", 2009, "Merah")
    mobil2 = Car(4, 4, "D5678BBB", "Brio", 2010, "Biru")
    mobil3 = Car(5, 5, "D9101CCC", "Fortuner", 2011, "Kuning")
    mobil4 = Car(5, 5, "D6789HJ", "Rush", 2006, "Silver")

    motor1 = Motorcycle("Sport", 8, "D1212AAA", "CRF", 2012, "Hitam")
    motor2 = Motorcycle("Trail", 7, "D3434BBB", "Beat", 2013, "Putih")
    motor3 = Motorcycle("Custom", 6, "D5656CCC", "Vario", 2014, "Abu")
    motor4 = Motorcycle("Bebek", 10, "D7878DDD", "Supra", 2015, "Hijau")

    # Membuat objek garasi
    slotParkir = ParkingLot(10) # Kapasitas tempat parkir 10 kendaraan
    garasi = Garage("Garasi A", 100, slotParkir) # Nama garasi "Garasi A", luas 100m2, dengan slot parkir

    # Menampilkan atribut garasi sebelum dan sesudah kendaraan dimasukkan
    print("Nama Garasi:", garasi.getNamaGarasi())
    print("Luas Garasi Sebelum Adanya Kendaraan:", garasi.getLuasGarasi(), "m2") # Luas garasi sebelum kendaraan dimasukkan
    print("Kapasitas Parkir Sebelum Adanya Kendaraan:", garasi.getSlotParkir().getKapasitas()) # Kapasitas parkir sebelum kendaraan dimasukkan
    print("Kendaraan Terparkir:", garasi.getSlotParkir().getJumlahKendaraanSaatIni())
    print("\n")

    # Menambahkan mobil dan motor ke garasi
    garasi.addMobil(mobil1)
    garasi.addMobil(mobil2)
    garasi.addMobil(mobil3)
    garasi.addMobil(mobil4)
    garasi.addMotor(motor1)
    garasi.addMotor(motor2)
    garasi.addMotor(motor3)
    garasi.addMotor(motor4)

    # Menampilkan atribut garasi sebelum dan sesudah kendaraan dimasukkan
    print("Nama Garasi:", garasi.getNamaGarasi())
    print("Luas Garasi Sesudah Ada Kendaraan Yang Masuk:", garasi.getLuasGarasi(), "m2") # Luas garasi setelah kendaraan dimasukkan
    print("Kapasitas Parkir Sesudah Ada Kendaraan Yang Masuk:", garasi.getSlotParkir().getKapasitas()) # Kapasitas parkir setelah kendaraan dimasukkan
    print("Kendaraan Terparkir:", garasi.getSlotParkir().getJumlahKendaraanSaatIni())

    # Menampilkan data mobil
    print("\nDaftar Mobil Terparkir:\n")
    kendaraanMobilKe = 0
    for mobil in garasi.getDaftarKendaraanMobil():
        kendaraanMobilKe += 1
        print("Mobil ke -", kendaraanMobilKe)
        print("Plat Nomor:", mobil.getPlatNomor())
        print("Merk:", mobil.getMerk())
        print("Tahun Produksi:", mobil.getTahunProduksi())
        print("Warna:", mobil.getWarna())
        print("Jumlah Kursi:", mobil.getJumlahKursi())
        print("Jumlah Pintu:", mobil.getJumlahPintu(), "\n")

    kendaraanMotorKe = 0
    # Menampilkan data motor
    print("\nDaftar Motor Terparkir:\n")
    for motor in garasi.getDaftarKendaraanMotor():
        kendaraanMotorKe += 1
        print("Motor ke -", kendaraanMotorKe)
        print("Plat Nomor:", motor.getPlatNomor())
        print("Merk:", motor.getMerk())
        print("Tahun Produksi:", motor.getTahunProduksi())
        print("Warna:", motor.getWarna())
        print("Jenis Motor:", motor.getJenisMotor())
        print("Kapasitas Tangki:", motor.getKapasitasTangki(), "L\n")

if __name__ == "__main__":
    main()
