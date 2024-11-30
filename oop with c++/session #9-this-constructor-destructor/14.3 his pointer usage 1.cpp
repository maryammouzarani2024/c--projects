#include <iostream>
using namespace std;

class MyClass {
        int data;
    public:
        void SetData(int data);
        int GetData() { return data; };
};

// Same name for function argument and class member
// this pointer is used to resolve ambiguity
void MyClass::SetData(int data) {
    this->data = data;
}

int main()
{
    MyClass a;
    a.SetData(100);
    cout << a.GetData() << endl;
}