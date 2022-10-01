#include "TestRetangle.h"
#include <iostream>
#include<locale>

using namespace std;

TestRetangle::TestRetangle() {};

void TestRetangle::menu() {
	setlocale(LC_ALL,"PT_BR");

	int continuar=1;
	double largura, comprimento;

	while (continuar) {

		cout << "Digite o comprimento (> 0.0): ";
		cin >> comprimento;
	
		while (comprimento <=0)
		{
			cout << "N�mero inv�lido digite um n�mero (> 0.0): ";
			cin >> comprimento;
		}
	
		objetoRectangle.setComprimento(comprimento);

		cout << "Digite a largura (> 0.0): ";
		cin >> largura;

		while (largura <= 0)
		{
			cout << "N�mero inv�lido digite um n�mero (> 0.0): ";
			cin >> largura;
		}

		objetoRectangle.setLargura(largura);

		cout << "A Per�metro � de " << objetoRectangle.calculaPerimetro() << endl;
		cout << "A �rea � de " << objetoRectangle.calculaArea() << endl<<endl;

		cout << "Voc� deseja deseja continuar? 1- SIM e 0- N�o";
		cin >> continuar;
	}

}
