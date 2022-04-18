// Создайте класс HugeInt, который хранит в 40-элементном массиве
// цифр целые числа разрядностью до 40 знаков
// Разрядность указать в конструкторе.

// TODO:
// Предусмотреть функции + - == < <= > >= и проверки на 0
// Используйте приватные поля для данных
// определите конструктор, который должен содержать значения по умолчанию
// напишите методы установки и извлечения значений (set, get)
// выполнения операций ввода и вывода значения объекта созданного класса
// Напишите конструктор копий, оператор присваивания, деструктор
// Напишите программу для тестирования вашего класса

//* READY:
// operators: == != < <= > >=

#include <iostream>
#include "HugeInt.h"

using namespace std;

int main() {
  HugeInt test("618");   test.print();
  HugeInt test2("618");  test2.print();
  HugeInt test3("619");  test3.print();
  HugeInt test4("-618"); test4.print();

  cout << "618 == 618  : " << (test == test2) << endl;
  cout << "618 == 619  : " << (test == test3) << endl;
  cout << "618 == -618 : " << (test == test4) << endl;
  
  cout << "618 != 618  : " << (test != test2) << endl;
  cout << "618 != 619  : " << (test != test3) << endl;
  cout << "618 != -618 : " << (test != test4) << endl;

  cout << "618 < 618  : " << (test < test2) << endl;
  cout << "618 < 619  : " << (test < test3) << endl;
  cout << "618 < -618 : " << (test < test4) << endl;

  cout << "618 <= 618  : " << (test <= test2) << endl;
  cout << "618 <= 619  : " << (test <= test3) << endl;
  cout << "618 <= -618 : " << (test <= test4) << endl;

  cout << "618 > 618  : " << (test > test2) << endl;
  cout << "618 > 619  : " << (test > test3) << endl;
  cout << "618 > -618 : " << (test > test4) << endl;

  cout << "618 >= 618  : " << (test >= test2) << endl;
  cout << "618 >= 619  : " << (test >= test3) << endl;
  cout << "618 >= -618 : " << (test >= test4) << endl;

  HugeInt lol("42");
  unsigned int kek = 42;
  cout << "42 == 42 : " << (lol == (HugeInt) kek) << endl;

  HugeInt lol_copy(lol);
  HugeInt lol_copy_invert(lol, true);
  cout << "42 == copy 42 : " << (lol == lol_copy) << endl;
  cout << "42 == copy -42 : " << (lol == lol_copy_invert) << endl;
  cout << "42 < copy -42 : " << (lol < lol_copy_invert) << endl;
  cout << "42 > copy -42 : " << (lol > lol_copy_invert) << endl;

  HugeInt zero_1(0);
  HugeInt zero_2("0");
  cout << "zero 1 == 0 : " << zero_1.is_zero() << endl;
  cout << "zero 2 == 0 : " << zero_2.is_zero() << endl;
  cout << "42 == 0 : " << lol.is_zero() << endl;
}