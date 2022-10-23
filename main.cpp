#include <iostream>
#include <string>

using namespace std;
#include "variables_type.cpp"

int main() {
    
    cout << "Hello World!" << endl;
    
    var_type(); // Переменые и костанты

    int num_1, num_2, result;
    float res;
    
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
    
    result = num_1 % num_2;
    cout << num_1 << " % " << num_2 << " = " << result << endl;
    
    res = (float)num_1 / (float)num_2;
    cout << num_1 << " / " << num_2 << " = " << res << endl;
    
    // Опрерации над переменной
    num_1 = num_1 + 23;
    num_1 += 23;
    num_1 -= 23;
    num_1 *= 23;
    num_1 /= 23;
    num_1 %= 23;   // Остаток от деления
    
    // Добавление 1
    num_2 = num_2 + 1;
    num_2 += 1;
    num_2++;
    
    // Вычитание 1
    num_2 = num_2 - 1;
    num_2 -= 1;
    num_2--;
    
    return 0;
}
