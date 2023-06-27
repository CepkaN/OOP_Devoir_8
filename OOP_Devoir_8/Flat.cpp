#include"Flat.h"

Flat::Flat():_numero(0),_area(0),_prezzo(0){}

Flat::Flat(int numero, int area, long long prezzo) :_numero(numero), _area(area), _prezzo(prezzo) {}

Flat::Flat(Flat& fl) :_numero(fl._numero), _area(fl._area), _prezzo(fl._prezzo) {}

Flat::~Flat() {}

void Flat::Mostra() {
	std::cout << "Номер квартиры : " << _numero << '\n';
	std::cout << "Площадь        : " << _area << '\n';
	std::cout << "Цена           : " << _prezzo << "\n\n";
}
void Flat::operator==(Flat& fl) {
	if (_area == fl._area) {
		std::cout << "Площади одинаковые.\n"; return;
	}
	std::cout << "Площади разные.\n";
}
Flat& Flat::operator=(Flat& fl) {
	if (this == &fl) { return *this; }
	_numero = fl._numero;
	_area - fl._area;
	_prezzo = fl._prezzo;
	return *this;
}
void Flat::operator>(Flat& fl) {
	Flat max;
	if (_prezzo > fl._prezzo) {
		max = *this;
	}
	else
		max = fl;
	std::cout << "Цена квртиры номер " << max._numero << " больше\n";
}