#ifndef TEST_H
#define TEST_H
#include "pch.h"
#include "point.h"
#include "matrix.h"
#include "VECTOR_4"
#include "misc.h"


namespace tester{

  template<class Function>
  class Test {
  private:
    const char* msg;

  public:
    Test();
    Test(const point& p);
    Test(const VECTOR_4& v4);
    Test(const matrix& m);
    Test(const char* str);
    Test(Function func);
    ~Test();
  };


}






#endif //TEST_H
