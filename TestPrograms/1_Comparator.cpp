#include <iostream>
#include <algorithm>
#include <iterator> // For std::begin() and std::end()

template <typename T>
struct CompareTypes{

  bool operator()(T var1, T var2){
    return var1 < var2;
  }
  
};


 int main(){

   int nums [5]  = { 4, 6, 1, 2, 7};

   std::sort(std::begin(nums), std::end(nums), CompareTypes<int>());

   std::cout << "Result: ";
   for (int num : nums){
     std::cout << num << " ";
   }
   std::cout << std::endl;

   return 0;
   
 }
