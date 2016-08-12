#include "trianguloPascal.h"

trianguloPascal::trianguloPascal(int l){
	lineas=l;
}
int trianguloPascal::factorial(int linea){
	int fac=1;
	for(int i =1;i<=linea;i++){
		fac*=i;
	}
	return fac;
}

int trianguloPascal::calcularPascal(int numero,int posicion){
	int salida;
	salida=factorial(numero)/(factorial(numero-posicion)*factorial(posicion));
	return salida;
}
trianguloPascal::~trianguloPascal(){

}


