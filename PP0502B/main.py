class TABLICE(object):
    def ParametryWejsciowe(self):
        self.liczbatestow = int(raw_input())
        self.liczby = []
        self.wynik = []
    def Przetworz(self):
        for i in range(self.liczbatestow):
            self.liczby = raw_input().strip().split()
            self.liczby = self.liczby[1:]
            self.liczby.reverse()
            self.wynik.append(self.liczby)  # Sposob na wyswietlenie listy w formie 678899
    def Wyswietl(self):
        for i in self.wynik:
            print ' '.join(i)






d = TABLICE()
d.ParametryWejsciowe()
d.Przetworz()
d.Wyswietl()
