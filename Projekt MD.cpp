

// C++ program to generate random numbers 
#include <cstdlib> 
#include <iostream> 
#include <time.h> 
#include <vector>

using namespace std;


class Punkt
{
public:
    Punkt() 
    {
        
    };

    ~Punkt() {};

    void  dodajWspolrzedne()
    {
        X = rand() % 20 + 1;
        Y = rand() % 20 + 1;
    }

    void wyswietlWspolrzedne()
    {
        cout<< X<<" ";
        cout << Y;
    }


    void dodajPolaczenie(int punkt)
    {
        Polaczenia.push_back(punkt);
    }


private:
    int X, Y;
    vector<int> Polaczenia;
};

int main() 
{ 
    int punktyMax = 7;

    srand(time(0));

    Punkt asdf[7];

    for (int i = 0; i < punktyMax; i++)
    {

    asdf[i].dodajWspolrzedne();

    cout << "punbkt " << i<<" ";
    asdf[i].wyswietlWspolrzedne();

    cout << endl;
    }



    return 0; 

}

