// دالة العرض ( دالة ثابتة بدون تغيير) + دالة بتعمل تغيير

#include <iostream>
using namespace std;

class Car
{
public:
    int speed;

    Car(int s)
    {
        speed = s;
    }

    // دالة بتعرض السرعة فقط
    void print() const
    {
        cout << speed << endl;
    }

    // دالة بتغيّر السرعة
    void accelerate()
    {
        speed = speed + 20;
    }
};

int main()
{
    Car car1(100);

    car1.accelerate();
    car1.print();

    return 0;
}