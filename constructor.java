import java.util.Scanner;

class rectangle{
  int l,b;
  public rectangle(){
    l=1;b=1;
  }
 public rectangle(int a,int c){
   l=a;b=c;
 }
 public void area(){
   System.out.println("Area is"+l*b);
 }
}

class constructor{
 public static void main(String args[]){
  rectangle obj1 = new rectangle();
  rectangle obj2 = new rectangle(3,4);
  obj1.area();
  obj2.area();
 }

}
