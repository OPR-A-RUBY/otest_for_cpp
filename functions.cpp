void print (string word) {
  cout << word << endl;
  }

void print (string word, float a) {
  cout << word << " " << a << endl;
  }
  
float del (float a, float b) {
  float res;
  try {
    if (b !=0)
      res = a / b;
    else
      throw (b);
    } catch (int number) {
	res = a;
    } 				// Time = 0.52.00
  return res;
  }

int function() {

    cout << "_____________ FUNCTION _____________________________________" << endl;
    
    string hi = "Hello, big World!";
    print (hi);
    
    float res = del (23, 2);
    print ("Result is", res);
    
    return 0;
}
