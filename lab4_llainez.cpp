#include <iostream>
using namespace std;
void divicion(int*,int,int);
int* formar(int);
int main(int argc,char const *argv[]){
	int op=0;
	while(op!=3){
		cout<<"1.-Ejercicio 1"<<endl<<"2.-Ejercicio 2"<<endl<<"...";
		cin>>op;
		
		switch(op){
			case 1:{
				cout<<"\tEjercicio 1"<<endl;
				int grado;
				cout<<"Ingrese grado del polinomio mas alto: ";
				cin>>grado;
				int* polinomio=formar(grado);
				int binomio;
				cout<<"Ingrese binomio: ";
				cin>>binomio;
				divicion(polinomio,grado,binomio);
				delete[] polinomio;
				break;
			
			}
		}
	}
	return 0;
}
void divicion(int* polinomio,int grado,int binomio){
	int* cociente=new int[grado];
	int residuo;
	int tem=1;
	for(int i=0;i<grado+1;i++){
		if(i==0){
			tem=polinomio[i];
		}else{
			tem=polinomio[i]+(tem*binomio);
		}
		if(i==grado){
			residuo=tem;
		}
		cociente[i]=tem;
		
	}
	int gradoTem=grado-1;
	cout<<"El cociente es: ";
	for(int i=0;i<grado;i++){
		if(i==grado-1){
			cout<<cociente[i]<<endl;
		}else{
			cout<<cociente[i]<<"x^"<<gradoTem<<" + ";
		}
		gradoTem--;
	}
	cout<<"El residuo es: "<<residuo<<endl<<endl;
	int salida[grado+1];
	int salida2[grado+1];
	for(int i=0;i<grado+1;i++){
		salida[i]=0;
		salida2[i]=0;
	}
	for(int i=0;i<grado+1;i++){
		cout<<"********************************************"<<endl;
		for(int j=0;j<grado+1;j++){
			cout<<polinomio[j]<<" ";
		}
		cout<<"| "<<binomio<<endl;
		if(i==0){
			for(int h=0;h<grado+1;h++){
				cout<<salida[i]<<" ";
			}
			cout<<"| "<<endl<<"----------------"<<endl;
		}else{
			salida[i]=cociente[i-1];
			for(int l=0;l<grado+1;l++){
				cout<<salida[l]<<" ";
			}
			cout<<"| "<<endl<<"-------------------"<<endl;
		}
		salida2[i]=cociente[i];
		for(int p=0;p<grado+1;p++){
			cout<<salida2[p]<<" ";
		}
		cout<<endl;
		
	}
	
	
}
int* formar(int grado){
	int gradoTem=grado;
	int* polinomio=new int[grado+1];
	for(int i=0;i<grado+1;i++){
		int tem=0;
		cout<<"Ingrese el polinomio x^"<<gradoTem<<": ";
		cin>>tem;
		polinomio[i]=tem;
		gradoTem--;
	}
	return polinomio;
}
