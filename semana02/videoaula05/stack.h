#include "item_type.h"

const int MAX_ITEMS = 100; // o tamanho máximo do vetor será de 100

class Stack {
 public:
  Stack();   // Construtor (usando "new")
  ~Stack();   // Destrutor (usando "delete")
  bool isEmpty() const;
  bool isFull() const;
  void print() const;
  
  void push(ItemType);
  ItemType pop();
 private:
  int length;
  ItemType* structure;
};

