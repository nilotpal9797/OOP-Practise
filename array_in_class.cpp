#include <bits/stdc++.h>
using namespace std;

class marks{
 private:
  int roll;
  char name[17];
 public:
  marks(){roll=-1;strcpy(name,"Unavailable");}
  marks(int a,char * s){roll=a;strcpy(name,s);}
  void show();
};

void marks :: show(){
 cout << "Name and roll no are "<<name<<" "<<roll<<endl;
}

int main(){
 marks student1;
 marks student2(1,"Ram");
 student1.show();
 student2.show();
 return 0;
} 
