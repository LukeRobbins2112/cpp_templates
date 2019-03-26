#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T>
class MyArray{

public:
  MyArray(T arr[], int inSize);
  void print();
  
private:
  T * ptr;
  int size;

};


// ** Have to include this when defining the functions
// Notice the <T> parameter in the class specifier as well
template <typename T>
MyArray<T>::MyArray(T arr[], int inSize){

  this->size = inSize;

  this->ptr = new T[size];
  for (int i = 0; i < inSize; i++){
     this->ptr[i] = arr[i];
  }
  
}

template <typename T>
void MyArray<T>::print(){

  std::cout << "Array data: ";
  for (int i = 0; i < this->size; i++){
    std::cout << this->ptr[i] << " ";
  }
  std::cout << std::endl;

}


int main(){

  int intArr [5] = { 5, 1, 4, 3, 2};
  MyArray<int> myArr(intArr, 5);

  myArr.print();

  return 0;

}
