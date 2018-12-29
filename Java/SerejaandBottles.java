package codeForces;

import java.util.ArrayList;
import java.util.Scanner;

import javafx.util.Pair;


public class SerejaandBottles {
	

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n =in.nextInt();
		int a = n;
		ArrayList<Pair<Integer, Integer>> al = new ArrayList<>();
		int count=0;
		for(int i=0;i<n ; i++) {
			Pair<Integer, Integer> p = new Pair<Integer, Integer>(in.nextInt(), in.nextInt());
			al.add(p);
		}
		for(int i=0 ; i<n ; i++) {
			for(int j=0 ;j<n ; j++) {
				if(al.get(i).getKey().equals(al.get(j).getValue()) && i!=j) {
					--a;
					break;
				}
			}
		}
		System.out.println(a);
	}

}
