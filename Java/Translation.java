package codeForces;

import java.util.Scanner;

public class Translation {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		StringBuffer s = new StringBuffer();
		StringBuffer k = new StringBuffer();
		s.append(in.nextLine());
		k.append(in.nextLine());
		s.reverse();
		
		if(s.toString().equals(k.toString())) System.out.println("YES");
		else System.out.println("NO");
	}

}
