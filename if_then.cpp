int if_then() {
    
     cout << "_____________ IF THEN ______________________________________" << endl;
    
    bool isHappy = true;
    int age;
    cin >> age;
    // (age < 18)  (age <= 18)  (age == 18)
    // (age > 18)  (age >= 18)  (age != 18)
    // Два условия в связке "И" - оба должны быть 'true'.
    if (age > 18 && isHappy) {
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
    
    
    
    
    // Два условия в связке "ИЛИ" - оодно из двух должны быть 'true'.
    if (age > 18 || isHappy) 
       cout << "Wow! Your age is bigger than 18" << endl; 
    
    
    
    
    int num = 12;
    switch (num) {
	case 1:
	    cout << "Num is 1" << endl;
	    break;
	case 2:
	    cout << "Num is 2" << endl;
	    break;
	case 10:
	    cout << "Num is 10" << endl;
	    break;
	case 12:
	    cout << "Num is 12" << endl;
	    break;    
	case 17:
	    cout << "Num is 17" << endl;
	    break;
	default:
	    cout << "Num is unknown" << endl;
    } 
    
    
    
    
    bool isWork = 2 == 3 ? true : false;
    int number = num == 17 ? 10 : 23;
    cout << "isWork = " << isWork << endl; 
    cout << "number = " << number << endl; 
      
    return 0;
}
