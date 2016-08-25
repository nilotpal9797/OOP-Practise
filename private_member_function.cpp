#include <bits/stdc++.h>
using namespace std;

class shape{
 private:
  int len,br;
  void show(){
   if(len==br)
   cout << "Square"<<endl;
   else 
    cout << "Rectangle "<<endl;
  }
 public:
 shape(){len=1;br=2;}
 shape(int a,int b){len=a;br=b;}
 void area(){
  show();
  cout << "Area is ";
  cout << len*br << endl;
 }
};

int main(){
 shape obj1;
 shape obj2(10,10);
 obj1.area();
 obj2.area();
 return 0;
 }

