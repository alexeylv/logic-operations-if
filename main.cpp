#include <iostream>

int main() {
  int a = 1;
  int b = 2, c = 3; // строчка "int result;" не требуется. операция выполняется без неё, с ней появляется ошибка

  

  if ((a>b) && (a>c))
  {
    std::cout << "Here\n";
  }
  else{
    std::cout << "There\n";
  }
  
}
