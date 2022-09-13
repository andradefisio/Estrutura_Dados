
/*
A classe TIME define, instancia o tempo em função de HORA, MINUTO e SEGUNDO. 
 
   As primeiras linhas de código deste arquivo servem para evitar que
  múltiplas definições da classe Time ocorram. Isso poderia ocorrer se
  você der include de dois pacotes que dão include em "time.h"
*/

#ifndef TIME_H   // Inclua esse bloco apenas se TIME_H não está definido
#define TIME_H   // Na primeira inclusão, defina TIME_H para que este
		 // bloco não seja incluído mais de uma vez.

class Time { // palavra reservad class seguid de Time (nome da classe)
 private:  // Seção Privada
  // Membros privados
  int hour;     // 0 - 23
  int minute;   // 0 - 59
  int second;   // 0 - 59
 public:   // Seção Pública
  Time(int hour = 0, int minute = 0, int second = 0); //Construtor //Se a pessoa não passar nenhum valor o padrão (default será zero).         
  int getHour() const;   
  void setHour(int hour);   
  int getMinute() const;              // métodos get e set
  void setMinute(int minute); 
  int getSecond() const; 
  void setSecond(int second);
  void print() const; // método print
  void nextSecond();  // método nextSecond
};  

#endif  // Final do bloco "#ifndef"

