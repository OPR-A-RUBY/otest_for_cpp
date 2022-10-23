#include <iostream>
#include <string>

using namespace std;
#include "variables_type.cpp"
#include "algebras.cpp"
#include "if_then.cpp"
#include "arrays.cpp"
#include "loops.cpp"
#include "strings.cpp"
#include "functions.cpp"

class Car {
  
private:
  int height;
  float speed;
  
public:
  Car () {}  				// Конструктор без параметров
  
  Car (int height, float speed) { 	// Конструктор с параметрами
    this->height = height;
    this->speed = speed;
  }
  
  void setValues (int height, float speed) {
    this->height = height;
    this->speed = speed;  
  }
  
  void print () {
    cout << this->height << " - " << this->speed << endl;
  }
  
};
  
int main() {
    
    cout << "Hello World!" << endl;
    
    // var_type();   // Переменые и костанты

    // algebra();    // Математические операции над перемнными
    
    // if_then();    // Условия и ветвления 
    
    // arrays();     // Массивы
    
    // loops();      // Циклы
    
    // strings();     // Строки
    
    // function();    // Функции
    
    cout << "_____________ CLASS ______________________________________" << endl;
    
    Car shkoda(1100, 234.4);
    shkoda.print ();
    
    Car audi;
    audi.setValues(2000, 314.7);
    audi.print ();
    
    return 0;
}
