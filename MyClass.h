// Declaration of MyClass

#ifndef C_RULETHREE2_MYCLASS_H
#define C_RULETHREE2_MYCLASS_H


class MyClass
{
private:
    int* _value;
public:
    MyClass();                                 // Default constructor
    MyClass (const MyClass& oriObj);           // Copy constructor
    MyClass& operator=(const MyClass& oriObj); // Copy assignment operator
    void SetVal(const int& val);
    int GetVal() const;
    ~MyClass();                                // Destructor
};


#endif //C_RULETHREE2_MYCLASS_H
