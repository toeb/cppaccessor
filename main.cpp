#include <cppaccessor/accessor.h>


template<typename T>
struct accessor{

};

class Example1{
public:
  accessor<int> value()const{
  }
private:
  int _value;
};

int main(){

}