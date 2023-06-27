#include<iostream>
#include"Flat.h"



int main() {
	setlocale(LC_ALL, "Russian");
	Flat* flat1 = new Flat(46, 77, 2000000);
	Flat* flat2 = new Flat(1, 40, 1500000);
	Flat* flat3 = new Flat(65, 120, 7000000);
	Flat* flat4 = new Flat(12, 89, 5400000);
	Flat* flat5 = new Flat(9, 103, 6000000);
	flat1->Mostra();
	flat2->Mostra();
	flat3->Mostra();
	flat4->Mostra();
	flat5->Mostra();
	std::cout << '\n';
	(flat2 = flat1)->Mostra();
	flat3->operator>(*flat5);
	flat4 == flat2;
	



	return 0;
}