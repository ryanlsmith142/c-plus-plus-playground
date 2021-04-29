#include<iostream>
using namespace std;

class MyClass {
    public:
    void myMethod() {
        cout << "Hello from myMethod\n";
    }

    public:
    void loopMethod() {
        string greeting[] = {"Hi ", "my ", "name ", "is ", "Ryan."};
        
        for (int i = 0; i <= 4; i++) {
            cout << greeting[i];
        }

    }
};

int main() {
    cout<<"Hey it's my first C++ code!\n";

    cout << "Hello World!\n";

    float weight = 2000.6;

    double balance = 12.10;

    char gender = 'm';

    string username = "ryanSmith01";

    bool isTodaySunny = false;

    //arrays

    string colors[5]={"red", "green", "pink", "blue"};

    MyClass myObj;

    myObj.myMethod();


    return 0;
}