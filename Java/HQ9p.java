package codeForces;

import java.util.Scanner;

public class HQ9p {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in) ;
		String s = in.next();
		if(s.contains("H")|| s.contains("Q") || s.contains("9") || s.contains("+")) {
			System.out.println("YES");
		}else {
			System.out.println("NO");
		}

	}

}
