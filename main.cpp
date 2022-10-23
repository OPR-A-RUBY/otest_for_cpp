#include <iostream>
#include <string>

using namespace std;
#include "variables_type.cpp"
#include "algebras.cpp"
#include "if_then.cpp"

int main() {
    
    cout << "Hello World!" << endl;
    
    var_type(); // Переменые и костанты

    algebra();  // Математические операции над перемнными
    
    if_then();  // Условия и ветвления 
    
    
    cout << "_____________ ARRAY ________________________________________" << endl;
    
    int array_i[4];
    array_i[0] = 23;
    
    cout << array_i[0] << endl;
    
    
    
    float array[5];
    array[0] = 12.45;
    
    cout << array[0] << endl;
    
    
      
    return 0;
}
