
// Criando uma aplicação na qual o número que será mostrado no terminal é o quadrado do respectivo índice:

#include <iostream>
#include <math.h>
using namespace std;

const int numero_elementos = 10;

int main(){
	int c[numero_elementos]; //neste caso o tamanho do vetor foi especificado com a 'const int numero_elementos' 
	
	for (int i = 0; i < numero_elementos; i++){
		c[i] = pow(i,2);
	}
	for (int i = 0; i < numero_elementos; i++){
		cout << "A potência do índice [c" <<i<< "] = " << c[i] << "\n";
	}
	return 0;	 
}
