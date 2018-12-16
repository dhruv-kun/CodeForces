package codeForces;

import java.util.Scanner;

public class BoyorGirl {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in .next();
		long count = s.chars().distinct().count();
		if(count%2 == 0)
			System.out.println("CHAT WITH HER!");
		else 
			System.out.println("IGNORE HIM!");

	}

}
