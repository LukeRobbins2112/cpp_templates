
#include <iostream>

template <typename T, size_t Size = 5>
class SizedArray{

public:
  SizedArray(T * inArr);
  void Print();
  
private:
  T arr[Size];
  
};

template<typename T, size_t Size>
SizedArray<T, Size>::SizedArray(T * inArr){
  for (int i = 0; i < Size; i++){
    this->arr[i] = inArr[i];
  }
}

template<typename T, size_t Size>
void SizedArray<T, Size>::Print(){

  std::cout << "Array values: ";
  for (int i = 0; i < Size; i++){
    std::cout << this->arr[i] << " ";
  }
  std::cout << std::endl;
}

int main(){

  int inputArr[5] = {5, 4, 3, 2, 1};
  SizedArray<int, 5> sizedArr(inputArr);

  sizedArr.Print();

  return 0;
}
