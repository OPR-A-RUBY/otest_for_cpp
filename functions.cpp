void print (string word) {
  cout << word << endl;
  }

void print (string word, float a) {
  cout << word << " " << a << endl;
  }
  
float del (float a, float b) {
  if (b ==0)
    return 0;
  else
    return a / b;
  }

int function() {

    cout << "_____________ FUNCTION _____________________________________" << endl;
    
    string hi = "Hello, big World!";
    print (hi);
    
    float res = del (23, 2);
    print ("Result is", res);
    
    return 0;
}
