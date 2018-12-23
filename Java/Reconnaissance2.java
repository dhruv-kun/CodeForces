package codeForces;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Scanner;

import javafx.util.Pair;

public class Reconnaissance2 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		LinkedList<Pair<Integer, Integer>> ll = new LinkedList<>();
		int j=0;
		int c = n+1;
		while(n>0) {
			ll.add(new Pair<Integer, Integer>(in.nextInt(), ++j));
			n--;
		}
		int diff;
		int min = -1 ;
		int pos1 = 0 ,pos2 = 0;
		for(int i=0 ; i<c ; i++) {
			Pair<Integer, Integer> p =ll.removeFirst();
			Pair<Integer, Integer> q =ll.getFirst();
			
			
			diff = Math.abs(p.getKey()-q.getKey());
			
			if(min>diff || min==-1) {
				min=diff;
				pos1 = p.getValue();
				pos2 = q.getValue();
				
			}
			ll.addLast(new Pair<Integer, Integer>(p.getKey(), p.getValue()));
			
			
			
		}
		System.out.println(pos1 +" "+pos2);

	}

}
