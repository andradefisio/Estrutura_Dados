

#include <iostream>
using namespace std;

int main(){
	int myInt = 100;
	
	//adição:
	myInt = myInt + 10; //resultado 110
	cout << "O valor de myInt agora será: " << myInt << endl;
	
	//subtração:
	myInt = myInt - 10; //resultado 100
	cout << "O valor de myInt agora será: " << myInt << endl;
	
	//multiplicação:
	myInt = myInt * 10; //resultado 1000
	cout << "O valor de myInt agora será: " << myInt << endl; 
	
	//divisão:
	myInt = myInt / 10; //resultado 100
	cout << "O valor de myInt agora será: " << myInt << endl;
	
	//módulo da divisão:
	myInt = myInt % 10; //resultado 0 (o resto da divisão de 100 por 100 é 0
	cout << "O valor de myInt agora será: " << myInt << endl;
	
	myInt = 100; //retornando ao valor 100. Antes foi atribuído o valor 0 (módulo da divisão por 
	myInt = myInt + 100 * 2; //resultado é 300
	cout << "O valor de myInt agora é: " << myInt << endl;

	// myInt está valendo 300 
	myInt = (myInt + 100) * 2; //resultado é 800
	cout << "O valor de myInt agora é: " << myInt << endl;

	myInt = myInt / 8;
	myInt -=40;//resultado 60 
	cout << "O valor de myInt agora é: " << myInt << endl;

	myInt +=60;//resultado 120 
	cout << "O valor final de myInt é: " << myInt << endl;
	return 0;
}
