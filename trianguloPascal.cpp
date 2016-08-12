#include "trianguloPascal.h"

trianguloPascal::trianguloPascal(int l){
	linea=l;
}
trianguloPascal::factorial(int linea){
	int fac=1;
	for(int i =1;i<=linea;i++){
		fac*=i;
	}
	return fac;
}




