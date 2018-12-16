package codeForces;

import java.util.Scanner;

public class PetyaandStrings {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in) ;
		String s1 = in.next();
		String s2 = in.next();
		if(s1.compareToIgnoreCase(s2) == 0)
		System.out.println(0);
		else if(s1.compareToIgnoreCase(s2) > 0)
			System.out.println(1);
		else
			System.out.println(-1);
	}

}
