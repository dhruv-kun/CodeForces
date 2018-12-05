
import java.util.*;

public class YoungPhysicist {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
	int n ;
	n= in.nextInt();
	int sumx=0, sumy=0 , sumz=0;
	for(int i=0 ; i < n ;i++) {
		sumx += in.nextInt();
		sumy += in.nextInt();
		sumz += in.nextInt();
		
	}
	
	if(sumx==0&&sumy==0&&sumz==0) {
		System.out.println("YES");
	}else {
		System.out.println("NO");
	}
	in.close();
	}

}

