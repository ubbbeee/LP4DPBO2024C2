# /* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
#    kuliah OOP untuk keberkahanNya maka saya tidak
#    melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/

from Vehicle import Vehicle

# class untuk mobil subclass dari kendaraan/Vehicle
class Car(Vehicle):
    # constructor
    def __init__(self, jumlahKursi=0, jumlahPintu=0, platNomor="", merk="", tahunProduksi=0, warna=""):
        super().__init__(platNomor, merk, tahunProduksi, warna)
        # property mobil ada jumlah kursi dan jumlah pintu
        self.__jumlahKursi = jumlahKursi
        self.__jumlahPintu = jumlahPintu

    # Getter dan setter method untuk jumlahKursi
    def setJumlahKursi(self, jumlahKursi):
        self.__jumlahKursi = jumlahKursi

    def getJumlahKursi(self):
        return self.__jumlahKursi

    # Getter dan setter method untuk jumlahPintu
    def setJumlahPintu(self, jumlahPintu):
        self.__jumlahPintu = jumlahPintu

    def getJumlahPintu(self):
        return self.__jumlahPintu
