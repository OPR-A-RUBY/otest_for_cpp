#include <iostream>
#include <string>

using namespace std;
#include "variables_type.cpp"
#include "algebras.cpp"
#include "if_then.cpp"
#include "arrays.cpp"
#include "loops.cpp"
#include "strings.cpp"

void print (string word) {
  cout << word << endl;
  }

int main() {
    
    cout << "Hello World!" << endl;
    
    // var_type(); // Переменые и костанты

    // algebra();  // Математические операции над перемнными
    
    // if_then();  // Условия и ветвления 
    
    // arrays();   // Массивы
    
    // loops();       // Циклы
    
    strings();     // Строки
    
    cout << "_____________ STRING ______________________________________" << endl;
    
    string hi = "Hello, big World!";
    print (hi);
    
    return 0;
}
