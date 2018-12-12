package codeForces;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Isyourhorseshoeontheotherhoof {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int count=0;
		ArrayList<Integer> al = new ArrayList<>();
		for(int i=0 ; i<4 ; i++) {
			int s = in.nextInt();
			al.add(s);
		}
		Collections.sort(al);
		for(int j = 1 ;j<al.size();j++) {
			if(al.get(j-1).equals(al.get(j))) {
				
				++count;
			}
		}
		System.out.println(count);

	}

}
