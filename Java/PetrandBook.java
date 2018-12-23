package codeForces;

import java.util.LinkedList;
import java.util.Scanner;

import javafx.util.Pair;

public class PetrandBook {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in) ;
		int n = in.nextInt();
		LinkedList<Pair<Integer, Integer>> ll = new LinkedList<>();
		for(int i=0 ; i<7 ; i++) {
			ll.add(new Pair<Integer, Integer>(in.nextInt(), i+1));
		}
		int pos = -1;
		while(n>0) {
			Pair<Integer, Integer> p = ll.removeFirst();
			n = n - p.getKey();
			pos = p.getValue();
			
			ll.addLast(new Pair<Integer, Integer>(p.getKey(), p.getValue()));
		}
		System.out.println(pos);
	}

}
