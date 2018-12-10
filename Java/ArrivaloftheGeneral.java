package codeForces;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class ArrivaloftheGeneral {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in= new Scanner(System.in);
		int n = in.nextInt();
		ArrayList<Integer> h = new ArrayList<>();
		for(int i=0; i <n; i++)
			h.add(in.nextInt());
		int max = Collections.max(h);
		int min = Collections.min(h);
		
		
		int x = h.lastIndexOf(min);
		int y = h.indexOf(max);
	
		int count;
		if(x<y) {
			count = y + (n-2-x) ;
		}else {
			count = y + (n -1-x);
		}
		System.out.println(count);
				
	}

}
