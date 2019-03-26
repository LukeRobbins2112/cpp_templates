#include <iostream>

template <typename T>
T Add(T var1, T var2){

  return var1 + var2;
}

int main(){

  int result = Add<int>(3, 4);
  float fResult = Add<float>(3.5f, 4.0f);

  std::cout << "Int Result : " << result << std::endl;
  std::cout << "Float result: " << fResult << std::endl;

  return 0;
}
