import java.util.Scanner

class fibrec{
	void rec(int count){
	int n1=0,n2=1,n3=0;
	if(count>0){
	n3=n1+n2;
	n1=n2;
	n2=n3;
	System.out.println(" "+n3);
	rec(count-1);
	}
	}
}

class Onea{
	public static void main(String args[]){
	Scanner sc= new Scanner(System.in); 
	int n1=0,n2=1,n3,i,count;
	System.out.pritln("enter the number of terms");
	count=sc.nextInt();
	System.out.println(n1+" "+n2);
	// without recursion 
	for(i=2;i<=terms;++i){
		n3=n1+n2;
		n1=n2;
		n2=n3;
		System.out.println(" "+n3);
	}
	
	// with recursion
	System.out.println(0+" "+1);
	fibrec fb= new fibrec();
	fb.rec(count-2);

	}

}