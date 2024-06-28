#include <stdio.h>
#include <math.h>

// Ham de ktra 
void ktra(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if(a[i]>1){
        	a[i]=0;
		}
		if(a[i]<0){
			a[i]=-1*a[i];
		}
        }
}

// Ham gan mang B thanh A
void gan(int A[], int B[], int n,int m) {
    for (int i = 0; i < n; i++) {
        A[i] = B[i];
    }
    for (int i = n; i < m; i++) {
        A[i] = 0; 
    }
}

// Ham tinh gia tri de xet
int xet(int b[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if(b[i]!=0) s+=b[i];;
    }
    return s;
}

// Ham lay do dai mang
int dodai(int a[], int n) {
    int m = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] != 0) {
            m = i + 1;
            break;
        }
    }
    return m;
}

// ham de tru da thuc
void tru(int A[], int B[], int C[], int n) {
    for (int i = 0; i < n; i++) {
        C[i] = A[i] ^ B[i]; 
    }
}

// Ham de nhan da thuc
void nhan(int A[], int B[], int m, int n, int temp[]) {
    for (int i = 0; i < m + n - 1; i++) {
        temp[i] = 0;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            temp[i + j] += A[i] * B[j]; 
        }
    }
}

// ham de chia
void chia(int a[], int b[], int m, int n, int q[], int r[]) {
    
    for (int i = 0; i < m; i++) {
        r[i] = a[i];
    }

    
    for (int i = 0; i < m - n + 1; i++) {
        q[i] = 0;
    }

    for (int i = m - 1; i >= n - 1; i--) {
        q[i - n + 1] = r[i] / b[n - 1];
        for (int j = 0; j < n; j++) {
            r[i - j] -= q[i - n + 1] * b[n - 1 - j];
        }
    }
}

// ham de in 
void print(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            printf("%dx^%d", a[i], i);
            if (i != n - 1) {
                printf(" + ");
            }
        }
    }
    printf("\n");
}

int main() {
    int a[4] = {1, 1, 0, 1}; // a(x) = x^3 + x + 1
    int b[3] = {1, 1, 1};    // b(x) = x^2 + x + 1
    int x[4] = {0,0,0,0}, y[4] = {0,0,0,0}, x1[4] = {0,0,0,0}, x2[4] = {1,0,0,0}, y1[4] = {1,0,0,0}, y2[4] = {0,0,0,0};
    int B = 7;
    int q[4];
        int r[4];
        int i=1;
    while (B>0) {
    	printf("lap lan thu %d:\n",i);
        int m=dodai(a,4);
        int n=dodai(b,3);
        printf("(%d,%d)\n",m,n);
        chia(a, b, m, n, q, r); 
        ktra(q, m - n + 1);
        ktra(r, m);
        printf("q:");
         print(q, m-n+1); 
         printf("r:");
         print(r, m);
        int dq = dodai(q, m - n + 1);
        int dr = dodai(r, m);
        
        int dx1 = dodai(x1, 4);
        printf("x:");
        int temp[9];
        nhan(q, x1, dq, dx1, temp);
        ktra(temp, dq + dx1 - 1);
	      
        tru(x2, temp, x, dq+dx1-1); 
        ktra(x,4);
         print(x, 4); 
        int dy1 = dodai(y1, 4);
        nhan(q, y1, dq, dy1, temp); 
        ktra(temp, dq + dy1 - 1);
        tru(y2, temp, y, dq+dy1-1); 
        int dy=dodai(y,4);
        ktra(y,dy);
        printf("y:");
        print(y, dy);  
        
        gan(a, b, n,m); 
        printf("a:");
        print(a, m); 
        
        gan(b, r, dr,n); 
        printf("b:");
          print(b, n); 
          
        gan(x2, x1, 4,4); 
        printf("x2:");
        int dx2=dodai(x2,4);
        print(x2, dx2); 
        
        gan(x1, x, 4,4);  
        printf("x1:");
        dx1=dodai(x1,4);
        print(x1, 4); 
    
        gan(y2, y1,4,4);
		printf("y2:"); 
        print(y2, 4); 

        gan(y1, y, 4,4); 
		printf("y1:"); 
        print(y1, 4); 
        
        printf("b:");
        B=xet(b,n); 
        printf("%d\n",B);
        i++;

    }

    printf("Da thuc nghich dao:\n");
    print(y2, 4); 

    return 0;
}