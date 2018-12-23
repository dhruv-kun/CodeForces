package codeForces;

import java.util.Scanner;

public class Parallelepiped {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in) ;
		int x,y,z;
		x = in.nextInt();
		y = in.nextInt();
		z = in.nextInt();
		
		int l,b,h;
		
		
		b = (int) Math.sqrt((z*x)/y);
		l = x/b ;
		h = z/b ;
		
		System.out.println(4*(l+b+h));

	}

}
