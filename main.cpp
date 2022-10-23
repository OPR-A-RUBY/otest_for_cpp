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
#include "classes.cpp"

  
int main() {
    
    cout << "Hello World!" << endl;
    
    var_type();   // Переменые и костанты

    algebra();    // Математические операции над перемнными
    
    if_then();    // Условия и ветвления 
    
    arrays();     // Массивы
    
    loops();      // Циклы
    
    strings();     // Строки
    
    function();    // Функции
    
    classes();       // Классы
    
    cout << "_____________ END ______________________________________" << endl;
    
    return 0;
}
