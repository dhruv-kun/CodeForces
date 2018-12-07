package codeForces;

import java.util.Scanner;

public class Borze {

	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		String s = in.next();
		char[] a = s.toCharArray();
		for(int i=1 ; i<=a.length;i++ ) {
			if(a[i-1]=='-') {
				if(a[i]=='-') {
					System.out.print(2);
					i++;
				}else if(a[i]=='.') {
					System.out.print(1);
					i++;
				}
			}else if(a[i-1]=='.') {
				System.out.print(0);
			}
		}
	}

}
