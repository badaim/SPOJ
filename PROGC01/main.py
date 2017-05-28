class PROGC01(object):

    def ZliczWiersze(self):
        self.licznik = 0
        try:
            while True:
                self.dane = raw_input()
                self.licznik = self.licznik + 1

        except EOFError:
            pass
        print self.licznik
d = PROGC01()
d.ZliczWiersze()
