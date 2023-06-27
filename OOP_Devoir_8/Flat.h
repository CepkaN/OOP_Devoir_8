#pragma once
#include<iostream>

class Flat {
private:
	int _numero;
	int _area;
	long long _prezzo;
public:
	Flat();
	Flat(int numero,int area, long long prezzo);
	Flat(Flat&fl);
	~Flat();
	void Mostra();
	void operator==(Flat& fl);
	Flat& operator=(Flat& fl);
	void operator>(Flat& fl);
};