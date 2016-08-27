#include<bits/stdc++.h>
using namespace std;

class A{
private:
  int a,b;
public:
  A(){a=1;b=1;}
  A(int x,int y){a=x;b=y;}
  void show(){
    cout << this->a <<" " << this->b << endl;
  }
};

class B:public A{
private:
  int c,d;
public:
  B(){c=3;d=4;}
  void say_hello();
  void show(){
    A::show();
    cout << c <<" "<<d << endl;
  }
};

void B::say_hello(){
  cout << "Hello"<<endl;
}
int main(){
  B obj2;
  obj2.show();
  obj2.say_hello();
  return 0;
}
