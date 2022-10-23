class Car {
  
private:
  int height;
  float speed;
  
public:
  Car () {}  				// Конструктор без параметров
  
  Car (int height, float speed) { 	// Конструктор с параметрами
    this->height = height;
    this->speed = speed;
  }
  
  void setValues (int height, float speed) {
    this->height = height;
    this->speed = speed;  
  }
  
  void print () {
    cout << this->height << " - " << this->speed << endl;
  }
  
  ~Car () {
    cout << "All is okay!" << endl;
  }
  
};


int classes() {
    
    cout << "_____________ CLASS ______________________________________" << endl;
    
    Car shkoda(1100, 234.4);
    shkoda.print ();
    
    Car audi;
    audi.setValues(2000, 314.7);
    audi.print ();
    
    return 0;
}
