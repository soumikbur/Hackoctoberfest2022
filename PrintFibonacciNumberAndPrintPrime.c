//Print Fibonacci number upto n.Print Prime
#include <stdio.h>
int main() {
    int n, n1 = 0, n2 = 1, n3;
	printf("Enter the Number upto n which you want:");
	scanf("%d", &n);
	printf("\n%d\n%d", n1, n2);
	for (int i = 2;i<n;i++) {
		n3 = n2 + n1;
		printf("\n%d", n3);
		int  m = 0, check = 0;
		m = n3 / 2;
		if (n3 >= 2) {
			for (int i = 2;i <= m;i++) {
				if (n3%i == 0) {		
					check = 1;
					break;
				}
			}
			if (check == 0) {
				printf(" is the Prime Number");
			}
		}
		n1 = n2;
		n2 = n3;
	}
    return 0;
}
