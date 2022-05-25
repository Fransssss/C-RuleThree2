// Title: Rule of Three
// Purpose:  Practice using Rule of Three, dynamically create block of memory, set value, and delete allocated memory
// Author: Fransiskus Agapa
// Have fun - enjoy the process - practices make improvement

#include <iostream>
#include "MyClass.h"
using std::cout;
using std::endl;

int TestCpyCon(MyClass locObj)
{
    int sqrt = 0;
    sqrt = locObj.GetVal() * 2;
    return sqrt;
}

int main()
{
  cout << endl;
  int sqrt = 0;                                                 // variable to test copy constructor
  MyClass fClass;                                               // call default constructor
  MyClass sClass;
  MyClass tClass;
  cout << endl << "=Initial value of MyClass objects=" << endl;
  cout << "1st object of class' value: " << fClass.GetVal() << endl;
  cout << "2nd object of class' value: " << sClass.GetVal() << endl;
  cout << "3rd object of class' value: " << tClass.GetVal() << endl;
  cout << endl;

  // copy constructor testing
  fClass.SetVal(10);
  sqrt = TestCpyCon(fClass);                              // call copy constructor
  cout << "1st object of class' value: " << fClass.GetVal() << endl;
  cout << "1st object of class sqrt^2 value: " << sqrt << endl;
  cout << endl;

  // copy assignment operator= testing
  sClass.SetVal(40);
  tClass = sClass;                                              // call copy assignment operator=
  cout << "2nd object of class' value: " << sClass.GetVal() << endl;
  cout << "3rd object of class' value: " << tClass.GetVal() << endl;
  cout << endl;

  sClass.SetVal(50);                                            // indication that changing value of the object won't affect the other object's value
  cout << "2nd object of class' value: " << sClass.GetVal() << endl;
  cout << "3rd object of class' value: " << tClass.GetVal() << endl;
  cout << endl;

  cout << "=Updated value of MyClass objects=" << endl;
  cout << "1st object of class' value: " << fClass.GetVal() << endl;
  cout << "2nd object of class' value: " << sClass.GetVal() << endl;
  cout << "3rd object of class' value: " << tClass.GetVal() << endl;

  return 0;
}
