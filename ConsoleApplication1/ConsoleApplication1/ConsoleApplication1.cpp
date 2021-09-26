#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Pipe
{
	int id;
	int d;
	int l; //ot 10 do 200 sdelat' ogranichenie
	string remont; 
};

struct KampStation
{
	int id, at, atr; //at - amunt of tsehov vsego. atr - amount of tsehov v rabote
	float eff; //eff - effectivnost'
	string name;
};

void PrintePipe(Pipe& p)
{
	cout << "Pipe number: " << p.id << "\n It's diameter is: " << p.d << " mm " << " \n It's lenght: " << p.l << " km "<< "It it's in remont? The answer is "<<p.remont;
}

Pipe AddPipe()
{
	Pipe p;
	p.id = 1;
	cout << "Vvedite diameter ";
	cin >> p.d;
	cout << "Vvedite lenght ";
	cin >> p.l;
	cout << "Vvedite yes, esli truba v remonte. Inache no ";
	cin >> p.remont;
	return p;
}

KampStation AddStation() {
	KampStation s;
	s.id = 1;
	cout << "Vvedite name of station"; cin >> s.name;
	cout << "Vvedite obshee kolichestvo tsehov"; cin >> s.at;
	cout << "Vvedite kolichestvo rabitaushih tsehov"; cin >> s.atr;
	cout << "Vvedite effectivnost' stantsii"; cin >> s.eff;
	return s;
}

void PrintStation(KampStation& s)
{
	cout << "Kompressornaya station with id " << s.id << " is named " << s.name << " It has " << s.at << " tsehov vsego and " << s.atr << " tsehov rabotaut. Effectivnost' of station is " << s.eff;
}

int main()
{
	int a, b;
	Pipe p;
	KampStation s;

	do {
		cout << "1.Add Pipe\n" << "2.Add Kompressornaya station\n" << "3.See all objects\n" << "4.Edit Pipe\n" << "5.Edit Kompressornaya station\n" << "6.Save\n" << "7.Download\n";
		switch (b)
		{
		case 1:
				p = AddPipe();
				PrintePipe(p);
			break;
		case 2:
			s=AddStation();
			PrintStation(s);
			break;
		case 3:
			if (s.id and p.id) { PrintePipe(p); PrintStation(s);}
			else if (s.id) PrintStation(s);
			else if (p.id) PrintePipe(p);
			else cout << "Dannih net. Neobhodimo vvesti.";
			break;
		case 4:
		}

	} 
	while (a != 0);

}
