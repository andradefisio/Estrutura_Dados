
#include <iostream>
#include <cmath>

using namespace std;

// função sqrt (square root ou "raiz quadrada") 
/*
int main(){
	float myFloat = 7.4;
	cout << " A raíz quadrade de myFloat é " << sqrt(myFloat) << endl;

	return 0;

}
*/


// função potência pow(número, potencia que deseja elevar). Ex. 4 elevado ao quadrado >> pow(4,@)
/*
int main(){
	float myFloat = 7.4;
	cout << " myFloat elevado ao quadrado é: " << pow(myFloat,2) << endl;

	cout << " myFloat elevado ao cubo é: " << pow(myFloat,3) << endl;
	return 0;

}

/*
 Calcule o quadrado de duas variaveis float;
 Em seguida some-as;
 Depois retirar a raiz quadrada da resposta. 
 sqrt((pow(a,2) + pow(b,2))
*/

float test(float a, float b){
	float computeSqrt;
	computeSqrt = pow(a,2) + pow(b,2);
	computeSqrt = sqrt(computeSqrt);
	cout << "A resposta é " << computeSqrt;
	return computeSqrt;
}

int main(){
	float a;
	float b;
	computeSqrt;
	


}


















