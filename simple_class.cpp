#include <bits/stdc++.h>
using namespace std;

class shape{
 private:
  int l,br;
 public:
  shape(){l=1;br=2;}
  shape(int a,int b){
     l=a;br=b;
   }
  void area(){
   cout <<l*br<<endl;
  }
};

int main(){
 shape obj1;
 shape obj2(10,10);
 cout << "Area of obj1 is ";
 obj1.area();
 cout << "Area of obj2 is ";
 obj2.area();
 return 0;
}
