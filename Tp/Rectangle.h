#ifndef RECTANGLE_H
#define RECTANGLE_H 

class Rectangle
{
	private:
		double comprimento;
		double largura;
	public:
		Rectangle();
		void setComprimento(double);
		void setLargura(double);
		double getComprimento()const;
		double getLargura()const;
		double calculaPerimetro()const;
		double calculaArea()const;
};
#endif // !RETANGLE_H

