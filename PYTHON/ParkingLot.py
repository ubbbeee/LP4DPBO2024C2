# /* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 3 gatau 4 DPBO Composite dalam mata
#    kuliah OOP untuk keberkahanNya maka saya tidak
#    melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/

# // class untuk ParkingLot atau tempat parkir dimmiliki oleh kelas garasi karena kelas garasi membutuhkan kapasitas kendaraan terparkir dan jumlah kendaraan yang terparkir di garasi
class ParkingLot:
    def __init__(self, kapasitas=0, jumlahKendaraanSaatIni=0):
        self.__kapasitas = kapasitas
        self.__jumlahKendaraanSaatIni = jumlahKendaraanSaatIni

    # Getter dan setter methods untuk kapasitas
    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    def getKapasitas(self):
        return self.__kapasitas

    # Getter dan setter methods untuk jumlahKendaraanSaatIni
    def setJumlahKendaraanSaatIni(self, jumlahKendaraanSaatIni):
        self.__jumlahKendaraanSaatIni = jumlahKendaraanSaatIni

    def getJumlahKendaraanSaatIni(self):
        return self.__jumlahKendaraanSaatIni
