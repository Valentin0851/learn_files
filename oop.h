#include<includes.h>

// Делегирующий конструктор
struct S {
  S(int a) {
  }

  S(int a, size_t c): S(a) {
  }
};

//Можно явно попросить компилятор сгенерировать метод  если он его умеет генерировать (конструктор по умолчанию, конструктор копирования, оператор присваивания, деструктор и тд).

struct S {
  S(int a) {}
  S() = default;
};

//Можно запретить компилятору генерировать метод

struct S {
  S(const S&) = delete;
};

// дружественные функции

class C {
  int a = 0;
  friend void foo(int);
  friend class D;
};

void foo(int b) {
  C c;
  std::cout << c.a + b; // c.a это OK
}

class D {};

// перегрузка оператора []

class Vector {
public:
  int& operator[](size_t index) { return arr_[index]; }
  const int& operator[](size_t index) const {return arr_[index]; }
private:
  int* arr_ = nullptr;
  size_t size_ = 0;
};



