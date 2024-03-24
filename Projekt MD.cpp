#include <cstdlib>
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

class Punkt {
public:
    Punkt() {}

    ~Punkt() {}

    void dodajWspolrzedne() {
        X = rand() % 20 + 1;
        Y = rand() % 20 + 1;
    }


    void dodajPolaczenie(int punkt) {
        Polaczenia.push_back(punkt);
    }

    void wyswietlWspolrzedne() {
        cout << endl;
        cout << "x=" << X; 
        cout << " y=" << Y;
    }

    void wyswietlPolaczenia() {
        cout << "connects to: ";
        for (int punkt : Polaczenia) {
            cout << punkt << " ";
        }
        cout << endl;
    }

private:
    int X, Y;
    vector<int> Polaczenia;
};

int main() {
    int punktyMax = 7,wylosowanyPunkt;

    srand(time(0));

    Punkt asdf[7];

    for (int i = 0; i < punktyMax; i++) {
        asdf[i].dodajWspolrzedne();
    }

    for (int i = 1; i < punktyMax; i++)
    {
        wylosowanyPunkt = rand() % i;
        asdf[i].dodajPolaczenie(wylosowanyPunkt);
    }

    // Displaying connections
    for (int i = 0; i < punktyMax; i++) {
        cout << "punkt " << i << " ";
        asdf[i].wyswietlWspolrzedne();

        cout << endl;
        asdf[i].wyswietlPolaczenia();
        cout << endl;
    }

    return 0;
}
