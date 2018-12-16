package codeForces;

import java.util.Scanner;

public class Bitpp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int a = 0;
		for(int i=0 ; i<n ; i++) {
			String s = in.next();
			if(s.equals("X++") || s.equals("++X"))
				++a;
			else
				--a;
		}
		System.out.println(a);
	}

}
