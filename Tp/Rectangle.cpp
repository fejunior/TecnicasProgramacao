#include "Rectangle.h"

Rectangle::Rectangle() {
	comprimento = 1.0;
	largura = 1.0;
}

void Rectangle::setComprimento(double number) {
	comprimento = number;
}

void Rectangle::setLargura(double number) {
	largura = number;
}

double Rectangle::getComprimento()const {
	return comprimento;
}

double Rectangle::getLargura()const {
	return largura; 
}

double Rectangle::calculaPerimetro()const {
	return 2 * (comprimento * largura);
}

double Rectangle::calculaArea()const {
	return comprimento * largura;
}
