package codeForces;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Hexadecimalstheorem {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in) ;
		long n = in.nextLong();
		ArrayList<Integer> al = new ArrayList<>();
        int i = 1, t1 = 0, t2 = 1;
        

        while (t1 <= n)
        {
            al.add(t1);

            int sum = t1 + t2;
            t1 = t2;
            t2 = sum;

            
        }
        
        if(n==3)System.out.println(1+" "+1+" "+1);
        else if(n==2) System.out.println(0+" "+1+" "+1);
        else if(n==1) System.out.println(0+" "+0+" "+1);
        else if(n==0) System.out.println(0+" "+0+" "+0);
        else {
        	int a = al.indexOf((int)n);
        	System.out.println(al.get(a-4)+" "+al.get (a-3)+" "+al.get(a-1));
        }
		
	}
	

}
