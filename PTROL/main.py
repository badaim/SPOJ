class PTROL(object):
    def liczba_testow(self):
        self.liczba = int(raw_input())
        self.G = []
        self.Wynik = []
    def pobierz_dane(self):
        for i in range(self.liczba):
            self.G = raw_input().strip().split()
            self.G.append(self.G[0])
            self.G[0] = self.G.pop(len(self.G)-1)
            self.G.append(self.G[1])
            self.G.pop(1)
            self.G = self.G[1:]
            self.Wynik.append(self.G)
    def wyswietl(self):
        for x in self.Wynik:
            print ' '.join(x)



d = PTROL()
d.liczba_testow()
d.pobierz_dane()
d.wyswietl()
