#include <iostream>
#include <cstdlib>

using namespace std;

int V = 5, 
	E = 10;

class Vertice
{
public:
	int x, y;
	Vertice();
	~Vertice();

private:
	void create_point(int *x, int *y)
	{

	};
};

Vertice::Vertice()
{
	create_point(x,y);
}

Vertice::~Vertice()
{
}


int main()
{
	Vertice Vertice1;


	int *vertices = new int[V];

	for (int i = 0; i < V; i++)
	{
		vertices[i] = i + 1;
	}


	
	
	for (int i = 0; i < 15; i++)
	{
		int wybranyWierzch = rand() % V + 1;
		cout << wybranyWierzch <<endl;
	}
}
