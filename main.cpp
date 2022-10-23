#include <iostream>
#include <string>

using namespace std;
#include "variables_type.cpp"

int main() {
    
    cout << "Hello World!" << endl;
    
    var_type(); // Переменые и костанты

    int num_1, num_2, result;
    
    cout << "Enter num_1: ";
    cin >> num_1;
    cout << "Enter num_2: ";
    cin >> num_2;
    
    result = num_1 + num_2;
    cout << num_1 << " + " << num_2 << " = " << result << endl;
    
    result = num_1 - num_2;
    cout << num_1 << " - " << num_2 << " = " << result << endl;
    
    result = num_1 * num_2;
    cout << num_1 << " * " << num_2 << " = " << result << endl;
    
    result = num_1 / num_2;
    cout << num_1 << " / " << num_2 << " = " << result << endl;
    
    return 0;
}
