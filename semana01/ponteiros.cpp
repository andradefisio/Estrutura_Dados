

// usando operadores & e *

#include <iostream>
using namespace std;

int main(){
	int var;
	int *pont;

	var = 5;
	pont = &var;

	cout << " O valor da variavel var, armazenado através do seu nome é " << var << "\n O endereço armazenado pelo ponteiro é " << pont << endl;
	
	cout << "\n\n O conteúdo acessado através do ponteiro é  " << *pont << endl;

	int var2;
	var2 = *pont;
	cout << "\n O conteúdo de var passa para var2, e é " << var2 <<endl; //neste caso, foi declarada a variavel var2. Esta variável 'recebeu' o conteúde de *pont, no caso cinco. 
	cout << "\n var2 = " << *pont << endl;

	int sum;
	sum = var2 + 5;
	cout << "\n O resultado da soma de var2, que é " << var2 << " + 5, é igual a " << sum << endl;

	return 0;


}
