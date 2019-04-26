#include <vector>
#include <iostream>

template <typename Container>
typename Container::value_type accumulate(const Container & cont){

  typename Container::value_type result;

  for (auto & element : cont){
    result += element;
  }

  return result;
}


int main(){

  std::vector<int> vec = {1, 2, 4, 7};

  int result = accumulate(vec);

  std::cout << "Result: " << result << std::endl;

  return 0;
}
