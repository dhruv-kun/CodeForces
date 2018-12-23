package codeForces;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Football {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		ArrayList<String> al = new ArrayList<>();
		
		while(n>0) {
			al.add(in.next());
			n--;
		}
		HashSet<String> set = new HashSet<String>();
		set.addAll(al);
		int max = 0;
		int curr;
		String st = null;
		System.out.println(set);
		for(String s : set) {
			
		curr =	Collections.frequency(al, s);
		
		if(max<curr) {
			max = curr;
			st = s;
		}
		}
		System.out.println(st);
	}
	

}
