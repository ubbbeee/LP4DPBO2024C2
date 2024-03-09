# /* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
#    kuliah OOP untuk keberkahanNya maka saya tidak
#    melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/

# class untuk mobil subclass dari kendaraan/Vehicle
class Vehicle:
    # constructor
    def __init__(self, platNomor="", merk="", tahunProduksi=0, warna=""):
        # @dispatch 
        self.__platNomor = platNomor
        self.__merk = merk
        self.__tahunProduksi = tahunProduksi
        self.__warna = warna

    # Setter dan Getter untuk masing masing atribut karena atribut private jadi gunakan method get dan set
    def setPlatNomor(self, platNomor):
        self.__platNomor = platNomor

    def getPlatNomor(self):
        return self.__platNomor

    def setMerk(self, merk):
        self.__merk = merk

    def getMerk(self):
        return self.__merk

    def setTahunProduksi(self, tahunProduksi):
        self.__tahunProduksi = tahunProduksi

    def getTahunProduksi(self):
        return self.__tahunProduksi

    def setWarna(self, warna):
        self.__warna = warna

    def getWarna(self):
        return self.__warna
