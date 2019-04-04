#include <iostream>
#include <string>

struct Foo{

  int val;

  Foo(){
    this->val = 0;
  }

  Foo(int inVal){
    this->val = inVal;
    // std::cout << "Original value : " << this->val << std::endl;
  }

  void operator++(){
    this->val += 2;
    // std::cout << "New value : " << this->val << std::endl;
  }

};


template <typename T>
class Incrementer{

public:
  Incrementer(T inValue){
    this->value = inValue;
    std::cout << "Original value : " << value << std::endl;
  }

  void operator++(){
    this->value++;
    std::cout << "New value : " << value << std::endl;
  }

private:
  T value;

};


template <>
class Incrementer <bool>{

public:
  Incrementer(bool b){
    this->value = b;
    std::string output = (this->value) ? "true" : "false";
    std::cout << "Original value : " << output << std::endl;
  }

  void operator++(){
    this->value = !this->value;
    std::string output = (this->value) ? "true" : "false";
    std::cout << "New value : " << output << std::endl;
  }

private:
  bool value;

};


template <>
class Incrementer <Foo>{

public:
  Incrementer(){
    std::cout << "Original value : " << this->myF.val << std::endl;
  }

  void operator++(){
    ++this->myF;
    std::cout << "New value : " << this->myF.val << std::endl;
  }

private:
  Foo myF;

};


int main(){

  Incrementer<int> testInc(5);

  std::cout << "Generic type: " << std::endl;
  for (int i = 0; i < 5; i++){
    ++testInc;
  }
  std::cout << std::endl;

  Incrementer<bool> boolInc(true);
  std::cout << "Specialization type: " << std::endl;
  for (int i = 0; i < 5; i++){
    ++boolInc;
  }

  std::cout << std::endl;

  Incrementer<Foo> fooInc;
  std::cout << "Specialization type: " << std::endl;
  for (int i = 0; i < 5; i++){
    ++fooInc;
  }

  return 0;
}

