import java.util.Scanner;
import java.lang.Math;

public class B {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		for (int tt=0; tt<t; tt++) {
			int p = in.nextInt();
			int f = in.nextInt();
			int cntS = in.nextInt();
			int cntW = in.nextInt();
			int s = in.nextInt();
			int w = in.nextInt();
			
			if(w<s) {
				int temp = s;
				s = w;
				w = temp;
				
				temp = cntS;
				cntS = cntW;
				cntW = temp;
			}else if(w==s && cntW>cntS) {
				int temp = cntS;
				cntS = cntW;
				cntW = temp;
			}
			
			int ans = 0;
			
			for(int i=0; i<=cntS; i++) {
				int temp_ans = 0;
				int temp_p = p;
				
				if(i*s > temp_p)
					continue;
				temp_p -= i*s;
				temp_ans += i;
				
				// remain => (cntS-i)
				int temp_f = f;
				
				int j = cntS-i;
				
				while(j>=0) {
					if(j*s<=temp_f) {
						temp_ans += j;
						temp_f -= j*s;
						break;
					}
					j--;
				}
				
				j = cntW;
				while(j>=0) {
					if(j*w<=temp_p) {
						temp_ans += j;
						break;
					}
					j--;
				}
				
				j = cntW - j;
				
				while(j>=0) {
					if(j*w<=temp_f) {
						temp_ans += j;
						break;
					}
					j--;
				}
				
				ans = temp_ans>ans ? temp_ans : ans;
			}
			
			System.out.println(ans);
		}
	}

}
