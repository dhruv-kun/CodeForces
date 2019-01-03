package codeForces;

import java.util.Scanner;

public class StringTask {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.next();
		char[] c = s.toCharArray();
		String sb = "";
		for(int i=0 ; i<c.length ; i++) {
			
			if(c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'||c[i]=='Y'||c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='y') {
				continue;
			}
			
			sb += "."+c[i];
		}
		System.out.println(sb.toLowerCase());
	}

}
