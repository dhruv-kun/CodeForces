package codeForces;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Cupboards {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		
		ArrayList<Integer> al = new ArrayList<>();
	
		for(int i=0 ; i<2*n ; i++) {
			al.add(in.nextInt());
		}
			ArrayList<Integer> odd = new ArrayList<>();
			ArrayList<Integer> even = new ArrayList<>();
			
		for(int i=0; i<2*n ; i++) {
			if(i%2==0) {
				even.add(al.get(i));
			}else {
				odd.add(al.get(i));
			}
			
		}
			int a = Collections.frequency(odd, 0);
			int b = Collections.frequency(odd, 1);
			int count = 0;
			if(a<b) {
				count += a;
			}else {
				count += b;
			}
			
			int x = Collections.frequency(even, 0);
			int y  = Collections.frequency(even, 1);
			
			if(x<y) {
				count += x;
			}else {
				count += y;
			}
			System.out.println(count);
		
	}

}
