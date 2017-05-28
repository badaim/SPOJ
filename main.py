class MWPZ06(object):
    def liczba_testow(self):
        self.liczba = int(raw_input())
    def pobierz(self):
        self.G = []
        self.Wynik = []
        for i in range(self.liczba):
            self.wejscie = int(raw_input())
            self.G.append(self.wejscie)
        for y in self.G:
            self.Wynik.append(y*y)
    def Wyswietl(self):
        for i in self.Wynik:
            print i

d = MWPZ06()
d.liczba_testow()
d.pobierz()
d.Wyswietl()
