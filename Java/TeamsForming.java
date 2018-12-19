package compitition;

import java.util.Collections;
import java.util.LinkedList;
import java.util.Scanner;

public class TeamsForming {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		LinkedList<Integer> ll = new LinkedList<>();
		int n = in.nextInt();
		int ans = 0;
		for(int i=0 ; i<n ; i++) {
			ll.add(in.nextInt());
		}
		Collections.sort(ll);
		
		while(!ll.isEmpty()) {
			int x = ll.removeFirst();
			int y = ll.removeFirst();
			ans += y-x;
			
			
		}
		
		System.out.println(ans);
		

	}

}
