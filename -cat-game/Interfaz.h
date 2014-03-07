#pragma once

#include"Tablero.h"
class Interfaz
{
private:

	Tablero t;
public:
	Interfaz(void);
	~Interfaz(void);
	void menu();
	int Switch(char opc);
	void ImprimirPos();
	void SelecionarPos();
	void ImprimirTab();
	bool Ganador();
	bool ValidarPos(int i, int j);
	
};

