#include <bits/stdc++.h>
using namespace std;

class shape{
private:
 int len,br;
public:
 shape(){len=2;br=1;}
 shape(int a,int b){len=a;br=b;}
 void area();                         //Declaration Inside
};

void shape :: area(){                 // Definition outside
 cout << len*br << endl;
}

int main(){
 shape obj1;
 shape obj2(10,10);
 cout << "Area of obj1 " ;
 obj1.area();
 cout << "Area of obj2 is ";
 obj2.area();
 return 0;
}
