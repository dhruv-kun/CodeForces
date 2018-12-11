package codeForces;

import java.util.Scanner;

public class StonesontheTable {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		int count=0;
		String s1=in.next();
		char[] s = s1.toCharArray();
		
		for(int i=1 ; i<s.length;i++) {
			
			if(s[i-1]==s[i]) {
				count++;
			}
		}
		System.out.println(count);
	}

}
