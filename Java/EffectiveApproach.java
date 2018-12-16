package codeForces;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class EffectiveApproach {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		ArrayList<Integer> b = new ArrayList<>();
		for(int i=0 ; i<a ; i++) {
			
			b.add(in.nextInt());
		}
		int c = in.nextInt();
		int count1=0,count2=0;
		for(int i=0 ; i<c ; i++) {
			int d = in.nextInt();
			count1 += b.indexOf(d)+1;
			
			count2 += a - b.indexOf(d);
			
		}
		System.out.print(count1+" "+count2);
		
	}

}
