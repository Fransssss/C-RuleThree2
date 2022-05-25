// Implementation of MyClass

#include "MyClass.h"
#include <iostream>

using std::cout;
using std::endl;

MyClass::MyClass()
{
    cout << "[Default Constructor called]" << endl;
    _value = new int;                        // dynamically allocate a memory block before assign a value
    *_value = 0;                             // set default value to zero
}

MyClass::MyClass(const MyClass &oriObj)
{
    cout << "[Copy Constructor called]" << endl;
    _value = new int;                       // dynamically allocate a memory block before assign a value
    *_value = *(oriObj._value);             // set data member's value to value from the parameter
}

MyClass& MyClass::operator=(const MyClass &oriObj)
        {
            cout << "[Copy Assignment Operator= called]" << endl;
            if(this != &oriObj)            // make the value of data member and the original value is different
            {
                delete _value;            // delete old value
                _value = new int;         // dynamically allocate a memory block before assign a value
                *_value = *(oriObj._value);
            }
            return *this;                 // return updated value of data member
        }

void MyClass::SetVal(const int &val)
{
    cout << "[Set a value]" << endl;
    *_value = val;
}

int MyClass::GetVal() const
{
    return *_value;
}

MyClass::~MyClass()
{
    delete _value;                     // free allocated memory to avoid memory leak
}