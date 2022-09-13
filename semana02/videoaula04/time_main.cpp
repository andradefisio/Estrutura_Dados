#include <iostream>
#include "time.h"    
using namespace std;

int main() {
  /*
    Neste primeiro objeto, passamos todos os parâmetros. Em outras
    palavras, nenhum valor padrão foi usado.
   */
  
  Time t1(23, 59, 59);   
  t1.print();       // 23:59:59
  t1.setHour(12);
  t1.setMinute(30);
  t1.setSecond(15);
  
  t1.print();       // 12:30:15
  cout << "Hour:    " << t1.getHour()   << endl;
  cout << "Minute:  " << t1.getMinute() << endl;
  cout << "Second:  " << t1.getSecond() << endl;

  /*
    Nesta segunda instância, usamos o padrão apenas para minutos e
    segundos.
    o código foi compilado usando >> g++ *.cpp  é gerado o arquivo a.out
    Para executá-lo, digitar na linha de comando ./a.out

*/
  Time t2(12); 
  t2.print();  // 12:00:00

  Time t3(23, 59, 58);
  t3.print();  // 23:59:58
  t3.nextSecond();
  t3.print();  // 23:59:59
  t3.nextSecond();
  t3.print();  // 00:00:00

  Time t4(13);
  t4.print();

  Time t5(17,30,00);
  t5.print();
  t5.nextSecond();
  t5.print();
  t5.nextSecond();
  t5.print();

}


