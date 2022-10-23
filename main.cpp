#include <iostream>
#include <string>

using namespace std;
#include "variables_type.cpp"
#include "algebras.cpp"

int main() {
    
    cout << "Hello World!" << endl;
    
    var_type(); // Переменые и костанты

    algebra();  // Математические операции над перемнными
    
    bool isHappy = true;
    int age;
    cin >> age;
    // (age < 18)  (age <= 18)  (age == 18)
    // (age > 18)  (age >= 18)  (age != 18)
    if (age > 18) {
       cout << "Your age is bigger than 18" << endl; 
    } else if (age == 18) {
       cout << "Your age is equal 18" << endl;    
    } else {
       if (isHappy == true)
           cout << "You are Happy" << endl; 
       cout << "Your age is less than 18" << endl; 
    }
    
    if (isHappy)
        cout << "You are Happy!" << endl; 
	
    if (!isHappy)
        cout << "You are not Happy!" << endl; 
	
    return 0;
}
