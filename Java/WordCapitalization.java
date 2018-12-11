package codeForces;

import java.util.Scanner;

public class WordCapitalization {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.next();
		
		char []s1 = s.toCharArray();
		
		s1[0] = Character.toUpperCase(s1[0]);
		for(char a :s1)
			System.out.print(a);
		
		
	}

}
