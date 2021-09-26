#include "pch.h"
#include <iostream>

struct Pipe
{
	int id;
	int d;
	int l; //ot 10 do 200 sdelat' ogranichenie
};

struct KampStation
{

};

void PrintePipe(Pipe& p)
{
	std::cout << "Pipe number: " << p.id << "It's diameter is: " << p.d << " mm " << " It's lenght: " << p.l << " km ";
}

Pipe AddPipe()
{
	Pipe p;
	p.id = 0;
	std::cout << "Vvedite diameter ";
	std::cin >> p.d;
	std::cout << "Vvedite lenght ";
	std::cin >> p.l;
	return p;
}

int main()
{
	Pipe p = AddPipe();
	PrintePipe(p);
}
