#include <type_traits>
#include <stdio.h>

/*
 * type_traits are used to determine info about a type, and can be used to ensure
 * that a particular type is valid for a certain situation
*/

template <typename T>
struct is_pointer{
  static const bool value = false;
};

template<typename T>
struct is_pointer<T*>{
  static const bool value = true;
};


template <typename F>
void foo(F arg){

  static_assert(is_pointer<F>::value == false, "Err - cannot use pointer");

  printf("Type is not a pointer%d\n", 1);

}


int main(){

  char * ptr = new char[5];
  char regChar = 'c';

  foo(regChar);
  foo(ptr);       // Compilation will fail if uncommented, static assert fails

  return 0;
}
