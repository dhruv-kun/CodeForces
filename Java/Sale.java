package codeForces;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Sale {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int sum = 0;
		int n = in.nextInt();
		int m = in.nextInt();
		ArrayList<Integer> al = new ArrayList<>();
		for(int i=0 ; i<n ; i++) {
			al.add(in.nextInt());
		}
		Collections.sort(al);
		for(int i=0 ; i<m ; i++) {
			if(al.get(i)<0)
			sum -= al.get(i);
		}
		if(sum<0)
			System.out.println(0);
		else
			System.out.println(sum);

	}

}
