#include <bits/stdc++.h>
using namespace std;

class A{
 protected:
   int a;
 public:
   int b;
   A(int x,int y){a=x;b=y;}
   A(){a=0;b=0;}
   void show(){
     cout << a <<" "<< b << endl;
   }
};

int main(){
 A obj(2,2);
 cout << obj.b << endl; // Protected members are visible and directly accessible by objects
 return 0;
}
