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

    void wyswietlWspolrzedne() {
        cout << X << " ";
        cout << Y;
    }

    void dodajPolaczenie(int punkt) {
        Polaczenia.push_back(punkt);
    }

    void wyswietlPolaczenia() {
        cout << "Connections: ";
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
    int punktyMax = 7;

    srand(time(0));

    Punkt asdf[7];

    for (int i = 0; i < punktyMax; i++) {
        asdf[i].dodajWspolrzedne();

        cout << "punkt " << i << " ";
        asdf[i].wyswietlWspolrzedne();

        cout << endl;
    }


    // Displaying connections
    for (int i = 0; i < punktyMax; i++) {
        cout << "punkt " << i << " ";
        asdf[i].wyswietlPolaczenia();
    }

    return 0;
}
