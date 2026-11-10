// تمرين 1 على هرتسا ثالتة
// فهم الكود ومعرفة شو بطبع

#include <iostream>
using namespace std;

/// @brief 
class Car
{
public:
    int speed;
    static int count;

    Car(int s) : speed(s)
    {
        count++;
        cout << "Constructor " << speed << endl;
    }

    Car(const Car& other) : speed(other.speed)
    {
        count++;
        cout << "Copy " << speed << endl;
    }

    ~Car()
    {
        count--;
        cout << "Destructor " << speed << endl;
    }

    void changeSpeed(int s)
    {
        speed = s;
    }

    void print() const
    {
        cout << speed << " " << count << endl;
    }
};

int Car::count = 0;

void update(Car c)
{
    c.changeSpeed(300);
    c.print();
}

int main()
{
    Car car1(100);

    Car car2 = car1;

    car2.changeSpeed(200);

    update(car1);

    car1.print();
    car2.print();

    cout << Car::count << endl;

    return 0;
}