package codeForces;

import java.util.Collections;
import java.util.Scanner;

public class HelpfulMaths {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		String s = in.next();
		char[] cs = s.toCharArray();
		
		for(int i=0 ; i<cs.length ; i++) {
			for(int j=0; j<cs.length ; j++)
			if(((i&1)==0 )&& ((j&1)==0)) {
				if(cs[i]<cs[j]) {
					cs[i] ^= cs[j];
					cs[j] ^= cs[i];
					cs[i] ^= cs[j];
				}
			}
		}
		for(int i=0 ; i<cs.length ; i++)
		System.out.print(cs[i]);
	}

}
