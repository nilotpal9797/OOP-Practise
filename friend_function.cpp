#include <bits/stdc++.h>
using namespace std;

class shape{
 private:
  int len,br;
 public:
  shape(){len=1;br=2;}
  shape(int a,int b){len=a;br=b;}
  friend int area(shape);
};

int area(shape a){
 cout << a.len*a.br << endl;
}

int main(){
 shape obj1;
 shape obj2(10,10);
 cout << "Area of obj1 is ";
 area(obj1);
 cout << "Area of obj2 is ";
 area(obj2);
 return 0;
}
