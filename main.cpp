#include <iostream>
#include <string>

using namespace std;
#include "variables_type.cpp"
#include "algebras.cpp"
#include "if_then.cpp"
#include "arrays.cpp"

int main() {
    
    cout << "Hello World!" << endl;
    
    // var_type(); // Переменые и костанты

    // algebra();  // Математические операции над перемнными
    
    // if_then();  // Условия и ветвления 
    
    // arrays();   // Массивы
    
    cout << "_____________ LOOPS ______________________________________" << endl;
    
    for (int i = 0; i < 10; i++) {  // 1, 2, 3, 4, ... 9 
        cout << i << endl; 
    }
    
    
    for (float i = 100; i >= 10; i /= 2) {  // 100, 50, 25, 12.5 
        cout << i << endl; 
    }
    
    int i = 0;				// 0, 2, 4, 6, 8, 10
    while (i <= 10) {
	cout << i << endl;
	i += 2;
    }
    
    
    int j = 100; 			// 100 - условие после тела цикла
    do {
       cout << j << endl;
    } while (j < 10);
    
    
    char arrch[3] = {'s', 'r', 'c'};
    for (int i = 0; i <3; i++){
      cout << arrch[i] << endl;
      }
        
    return 0;
}
