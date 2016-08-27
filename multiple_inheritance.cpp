#include<bits/stdc++.h>
using namespace std;

class A{
private:
  int a;
public:
  A(){a=1;}
  A(int a){this->a=a;}
  void show_a(){
     cout << this->a << endl;
  }
};

class B:public A{
private:
  int b;
public:
  B(){A(1);this->b=1;}
  B(int a,int b):
   A(a)
   {
     this->b=b;
   }
  void show_b(){
     cout << this->b << endl;
  }
};

class C:public B{
private:
  int c;
public:
  C(){B(1,1);this->c=1;}
  C(int a,int b,int c):
  B(a,b)
  {
    this->c=c;
  }
 void show_c(){
   cout << this->c << endl;
 }
};

int main(){
 C obj1;
 C obj2(5,6,7);
 obj1.show_a();
 obj1.show_b();
 obj1.show_c();
 obj2.show_a();
 obj2.show_b();
 obj2.show_c();
 return 0;
}
