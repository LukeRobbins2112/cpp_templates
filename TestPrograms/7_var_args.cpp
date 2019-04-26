#include <iostream>

/*
 * This program demonstrates parameter packing - variable args in templates
 * Notice the syntax:
 *      - The template syntax is "<typename... Args>"
 *      - The argument is "Args... args"
 *      - The arg usage is "args..."
*/

void print(){

  std::cout << "No args remaining - empty print" << std::endl;
}

template<typename Arg, typename... Args>
void print(Arg a, Args... args){

  std::cout << a << std::endl;
  print(args...);

}

int main(){


  print(1, 3.14, "first string", "second string");

  return 0;

}
