// Copy Constructor 

#include <iostream>
using namespace std;

class Car
{
public:
    int speed;

    // Constructor عادي
    Car(int s)
    {
        speed = s;
    }

    // Copy Constructor
    Car(const Car& other)
    {
        speed = other.speed;
    }

    // دالة لعرض السرعة
    void print() const
    {
        cout << speed << endl;
    }
};

int main()
{
    // إنشاء السيارة الأولى
    Car car1(100);

    // إنشاء السيارة الثانية بنسخ الأولى
    Car car2(car1);

    // تغيير سرعة السيارة الثانية
    car2.speed = 300;

    // طباعة سرعة السيارة الأولى
    car1.print();

    // طباعة سرعة السيارة الثانية
    car2.print();

    return 0;
}