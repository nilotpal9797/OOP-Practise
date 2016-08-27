#include <bits/stdc++.h>
using namespace std;

class A{
public:
  int a,b;
  A(){a=1;b=2;}
  A(int a,int b){
    this->a=a;
    this->b=b;
  }
 void show(){
   cout << a <<" "<<b << endl;
 }
};

int main(){
  A obj1;
  A obj2(5,5);
  obj1.show();
  obj2.show();
  return 0;
}
