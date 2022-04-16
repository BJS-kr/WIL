#include <cstring>
#include <iostream>

class Car {
  protected:
    int speed;
    char name[40];
  public:
    int gear;
    Car() {}
    ~Car() { std::cout << "Car destroyed" << std::endl; }
    Car(int s, int g, char* n) 
      :speed(s), gear(g){
        strcpy(name, n);
    }

    void changeGear(int g=4) {
      gear = g;
    }

    void speedUp() {
      speed+=5;
    }

    void display() {
      std::cout << "speed: " << speed << " gear: " << gear << " name: " << name << std::endl;
    }

    void whereAmI() {
      std::cout << "address: " << this << std::endl;
    }
};

int main() {
  Car myCar(0, 0, "bjs");
  
  myCar.whereAmI();
  myCar.speedUp();
  myCar.changeGear();
  myCar.changeGear(8);
  myCar.speedUp();
  myCar.display();
  myCar.whereAmI();

  return 0;
}