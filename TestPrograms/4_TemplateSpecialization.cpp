#include <iostream>
#include <string>

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

  return 0;
}

