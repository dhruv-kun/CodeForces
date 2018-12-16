package codeForces;

import java.util.ArrayList;
import java.util.Scanner;



public class WayTooLongWords {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = new String();
		int n = in.nextInt();
		ArrayList<String> al = new ArrayList<>();
		for(int i=0;i<n;i++) {
			s = in.next();
			char[] c = s.toCharArray();
			int size= c.length-2;
			if(size>8) {
				String us = c[0]+Integer.toString(size)+c[size+1];
				al.add(us);
			}else {
				al.add(s);
			}
		}
		for(String as : al)
			System.out.println(as);
	}
}
