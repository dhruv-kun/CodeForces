package codeForces;

import java.util.Scanner;

public class BeautifulYear {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int n=in.nextInt();
		int r,r1,r2,r3,x;
		while(true) {
			 x = ++n;
			 r = x%10;
			 x =x/10;
			 r1 = x%10;
			 x =x/10;
			 r2 = x%10;
			 x =x/10;
			 r3 = x%10;
			 x =x/10;
			 if(r!=r1 && r!=r2 && r!=r3 && r1!=r2 && r2!=r3 && r2!=r3) {
				 break;
			 }
			 
			 
		}
		System.out.println(n);
	}

}
