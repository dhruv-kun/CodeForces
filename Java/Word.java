package codeForces;

import java.util.Scanner;
import java.lang.*;

public class Word {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.next();
		char s1[] = s.toCharArray();
		int lCount=0,uCount=0;
		for(int i=0 ; i<s1.length; i++) {
			if(Character.isUpperCase(s1[i])){
				uCount++;
			}else {
				lCount++;
			}
		}
		if(uCount>lCount) {
			System.out.println(s.toUpperCase());
		}else {
			System.out.println(s.toLowerCase());
		}
		
		
	}
}
