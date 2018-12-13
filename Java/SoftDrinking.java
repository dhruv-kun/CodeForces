package codeForces;

import java.util.Scanner;

public class SoftDrinking {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int  n, k, l, c, d, p, nl, np;
		n =in.nextInt();
		k=in.nextInt();
		l=in.nextInt(); 
		c=in.nextInt(); 
		d=in.nextInt(); 
		p=in.nextInt(); 
		nl=in.nextInt(); 
		np=in.nextInt();
		
		int c0 = (k*l)/nl;
		int c1 = c*d;
		int c3 =p/np;
		
		int min = Math.min(c0, c1);
		if(min<c3)
			System.out.println(min/n);
		else
			System.out.println(c3/n);
	}

}
