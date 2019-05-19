#ifndef TEMPLATE_METHOD_H_INCLUDED
#define TEMPLATE_METHOD_H_INCLUDED
#include "../common.h"

namespace TEMPLATE_METHOD {
// In software engineering, the template method pattern is a behavioral design pattern that
//      defines the program skeleton of an algorithm in a method, called
//      template method, which defers some steps to subclasses.[1]
//          It lets one redefine certain steps of an algorithm without changing the algorithm's structure.[2]
//  This use of "template" is unrelated to C++ templates.

class IAbstractClass // Shape
{
  public:
  virtual void primitiveMethod1() = 0; //      Draw (Color c)
  virtual void primitiveMethod2() = 0; //      Draw (Color c)
  virtual void primitiveMethod3() = 0; //      Draw (Color c)
  // ...

  virtual void templateMethod() final {
    //      Move (Point to)     {  Draw (black); current=to; Draw (white);  }
    cout << "in void IAbstractClass::templateMethod()\n";
    // ..
    primitiveMethod1();
    // ..
    primitiveMethod2();
    // ..
    primitiveMethod3();
    // ..
  }
};

class ConcreteClass : public IAbstractClass // Circle : Shape
{
  public:
  void primitiveMethod1() { //      Draw (Color c)
    cout << "in void ConcreteClass::primitiveMethod1()\n";
  }
  void primitiveMethod2() { //      Draw (Color c)
    cout << "in void ConcreteClass::primitiveMethod2()\n";
  }
  void primitiveMethod3() { //      Draw (Color c)
    cout << "in void ConcreteClass::primitiveMethod3()\n";
  }

  // ...
};

};     // namespace TEMPLATE_METHOD
#endif // TEMPLATE_METHOD_H_INCLUDED
