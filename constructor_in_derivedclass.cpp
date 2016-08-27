#include<bits/stdc++.h>
using namespace std;

class A{
private:
  int a;
public:
  A(){a=1;}
  A(int a){this->a=a;}
  void show_a(){
     cout << this->a <<endl;
  }
};

class B{
private:
  int b;
public:
  B(){b=1;}
  B(int b){this->b=b;}
  void show_b(){
    cout << this->b << endl;
  }
};

class C:public A,public B{
private:
  int c;
public:
  C(int x,int y,int z):
  A(x),B(y)
  {
    c=z;
  }
 void show_c(){
    cout << c << endl;
 }
};

int main(){
  C obj1(5,6,7);
  obj1.show_a();
  obj1.show_b();
  obj1.show_c();
  return 0;
}
