# /* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
#    kuliah OOP untuk keberkahanNya maka saya tidak
#    melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/

from ParkingLot import ParkingLot
from Motorcycle import Motorcycle
from Car import Car

# Class for Garage
class Garage:# class untuk garasi mengcomposite class parkinglot, kendaraan Car dan Motorcycle karena pasti didalam garasi akan ada kendaraan motor dan mobil
    def __init__(self, namaGarasi="", luasGarasi=0, slotParkir=None):
        self.__namaGarasi = namaGarasi
        self.__luasGarasi = luasGarasi #luas garasi dibutuhkan untuk mengimplementasikan luas dari garasi ketika ada kendaraan terparkir di garasi maka luas garasi akan berkurang dalam artian kendaraan yang akan diparkirkan akan tidak bisa dimasukkan ketika luas dari garasi sudah tidak ada slot parkir
        self.__daftarKendaraanMobil = [] #untuk memasukkan bermacam objek kendaraan mobil ke dalam daftar kendaraan mobil menggunakan vector
        self.__daftarKendaraanMotor = [] #untuk memasukkan bermacam objek kendaraan motor ke dalam daftar kendaraan motor menggunakan vector
        self.__slotParkir = slotParkir if slotParkir else ParkingLot() #membuat slotparkir mengcomposite dari parkinglot

    # Method untuk menambah mobil ke garasi
    def addMobil(self, mobil):
        if self.__slotParkir.getKapasitas() - self.__slotParkir.getJumlahKendaraanSaatIni() > 0 or self.__luasGarasi != 0:#di kondisikan jika kapasitas masih ada untuk kendaraan atau luas garasi masih ada maka object kendaraan mobil dapat diparkirkan di garasi
            self.__slotParkir.setJumlahKendaraanSaatIni(self.__slotParkir.getJumlahKendaraanSaatIni() + 1) #ketika object mobil dimasukkan maka kendaraan yang terparkir di garasi akan bertambah 1
            self.__daftarKendaraanMobil.append(mobil)#memasukkan object mobil kedalam daftar kendaraan mobil
            self.__luasGarasi -= 10#ketika object dimasukkan maka luas garasi berkurang 10 terus jika ada mobil dimasukkan sampai luas garasi 0
            self.__slotParkir.setKapasitas(self.__slotParkir.getKapasitas() - 1)#begitupun kapasitas ketika mobil dimasukkan maka kapasitas kendaraan digarasi berkurang 1
        else:
            print("Garasi Penuh")#kalau kondisi kapasitas dan luas garasi sudah 0 atau tidak ada maka beri alert garasi penuh

    # Method to add a motor ke garasi
    def addMotor(self, motor):
        if self.__slotParkir.getKapasitas() - self.__slotParkir.getJumlahKendaraanSaatIni() > 0 or self.__luasGarasi != 0:
            self.__daftarKendaraanMotor.append(motor)
            self.__slotParkir.setJumlahKendaraanSaatIni(self.__slotParkir.getJumlahKendaraanSaatIni() + 1)
            self.__luasGarasi -= 10
            self.__slotParkir.setKapasitas(self.__slotParkir.getKapasitas() - 1)
        else:
            print("Garasi Penuh")

    # Getter dan setter
    def setNamaGarasi(self, namaGarasi):
        self.__namaGarasi = namaGarasi

    def getNamaGarasi(self):
        return self.__namaGarasi

    def setLuasGarasi(self, luasGarasi):
        self.__luasGarasi = luasGarasi

    def getLuasGarasi(self):
        return self.__luasGarasi

    def setDaftarKendaraanMobil(self, daftarKendaraanMobil):
        self.__daftarKendaraanMobil = daftarKendaraanMobil

    def setDaftarKendaraanMotor(self, daftarKendaraanMotor):
        self.__daftarKendaraanMotor = daftarKendaraanMotor

    def getDaftarKendaraanMobil(self):
        return self.__daftarKendaraanMobil

    def getDaftarKendaraanMotor(self):
        return self.__daftarKendaraanMotor

    def getSlotParkir(self):
        return self.__slotParkir

    def setSlotParkir(self, slotParkir):
        self.__slotParkir = slotParkir

    def __del__(self):
        pass
