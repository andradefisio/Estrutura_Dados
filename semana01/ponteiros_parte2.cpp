

#include<iostream>
using namespace std;

int main()
{	
	/*
	//neste código a memória está sendo alocada estaticamente, isto é, em tempo de compilação
	int a = 10;
	int *intPointer;
	intPointer = &a;
	*intPointer = 50;
	
	cout<< "o valor do endereço de memória de interPointer é "<< intPointer << endl;
	cout<< "interPointer = "<< *intPointer << endl;
	return 0;
	*/

	int anotherInt;
	int *intPointer = new int; // alocação dinâmica = em tempo de execução;
	*intPointer = 50;
	anotherInt = *intPointer;

	cout << "O valor de anotherInt será então o valor associado ao endereço de memória para o qual aponta intPointer, ou seja, "<< anotherInt << endl;
	cout << "intPointer = " << intPointer << ". Este é o valor do endereço de memória para o qual intPointer aponta." <<endl;
	return 0;
}
