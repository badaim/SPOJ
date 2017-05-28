class PP0602A(object):
    def liczba_testow(self):
        self.liczba = int(raw_input())
        self.G = []
        self.P = []
        self.N = []
        self.Wynik = []
    def pobierz_dane(self):
        for i in range(self.liczba):
            self.G = raw_input().strip().split()
            self.G = self.G[1:]
            self.P = self.G[1::2]
            self.N = self.G[0::2]
            self.G = self.P + self.N
            self.Wynik.append(self.G)

    def wyswietl(self):
        for x in self.Wynik:
            print ' '.join(x)



d = PP0602A()
d.liczba_testow()
d.pobierz_dane()
d.wyswietl()
