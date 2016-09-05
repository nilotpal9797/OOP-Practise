import java.util.*;

class object{
 private int l,b;
 public object(){l=2;b=3;}
 public object(int a,int c){
  l=a;
  b=c;
 }
 public void show(){
  System.out.println("Length is "+l);
  System.out.println("Breadth is "+b);
 }
}


class constructor{
 public static void main(String[] args){
   object a = new object(5,6);
   a.show();
   object b = new object();
   b.show();
 }
}
