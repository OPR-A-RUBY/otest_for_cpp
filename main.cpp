#include <iostream>
#include <string>

using namespace std;
#include "variables_type.cpp"
#include "algebras.cpp"
#include "if_then.cpp"
#include "arrays.cpp"

int main() {
    
    cout << "Hello World!" << endl;
    
    var_type(); // Переменые и костанты

    // algebra();  // Математические операции над перемнными
    
    // if_then();  // Условия и ветвления 
    
    // arrays();   // Массивы
    
    cout << "_____________ LOOPS ______________________________________" << endl;
    
    for (int i = 0; i < 10; i++) {
        cout << i << endl; 
    }
    
    return 0;
}
