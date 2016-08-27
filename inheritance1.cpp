#include<bits/stdc++.h>
using namespace std;

class fruit{
private:
  int color,smell,taste,size;
public:
  void set_size(int a){size=a;}
  void show_size(){
     if(size>10)
      cout << "This is a big fruit\n";
    else
     cout << "This is a small fruit\n";
  }

};

class apple: public fruit{
public:
  void show_color(){
    cout << "Apples are red in color\n";
  }
  void show_taste(){
    cout << "Apples are sweet in taste\n";
  }
};

int main(){
 apple A;
 A.show_taste();
 A.show_color();
 A.set_size(1);
 A.show_size();
 return 0;
}
