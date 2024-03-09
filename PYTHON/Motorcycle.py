# /* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
#    kuliah OOP untuk keberkahanNya maka saya tidak
#    melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/

from Vehicle import Vehicle

#class untuk motor subclass dari kendaraan
class Motorcycle(Vehicle):
    #property motor ada Jenis motor dan kapasitas tangki dan sisa atribut diambil dari vehicle
    def __init__(self, jenisMotor="", kapasitasTangki=0, platNomor="", merk="", tahunProduksi=0, warna=""):
        super().__init__(platNomor, merk, tahunProduksi, warna)
        self.__jenisMotor = jenisMotor
        self.__kapasitasTangki = kapasitasTangki

    # Getter dan setter method untuk jenisMotor
    def setJenisMotor(self, jenisMotor):
        self.__jenisMotor = jenisMotor

    def getJenisMotor(self):
        return self.__jenisMotor

    # Getter dan setter method untuk kapasitasTangki
    def setKapasitasTangki(self, kapasitasTangki):
        self.__kapasitasTangki = kapasitasTangki

    def getKapasitasTangki(self):
        return self.__kapasitasTangki
