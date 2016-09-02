import java.util.Scanner;

class rectangle{
  int length,breadth;
  public void put(int l,int b){
  	length=l;
  	breadth=b;
  }
  public void area(){
  	System.out.println(length*breadth);
  }
  public void perimeter(){
  	System.out.println(2*(length+breadth));
  }

}

class simple_class{
	public static void main(String [] args){
     Scanner sc=new Scanner(System.in);
     rectangle one = new rectangle();
     one.put(5,6);
     one.area();
     one.perimeter();
	}
}
