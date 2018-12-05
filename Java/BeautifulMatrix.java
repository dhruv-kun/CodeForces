package codeForces;

import java.util.Scanner;

public class BeautifulMatrix {
	public static void main(String[] args) {
		int[][] mat = new int[5][5];
		int x = 0,y = 0;
		Scanner in = new Scanner(System.in);
		for(int i = 0 ; i < mat[0].length; i++){
			for(int j =0 ; j < mat.length; j++) {
				mat[i][j] = in.nextInt();
				if(mat[i][j]==1) {
					x=i+1;y=j+1;
				}
			}
		}
		int z = Math.abs(x-3) + Math.abs(y-3); 
		System.out.println(z);
	}
}
