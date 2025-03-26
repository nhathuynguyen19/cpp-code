#include <bits/stdc++.h>
using namespace std;

/*chuan bi test case, luu tru cung voi thu muc cua file chuong trinh hoac nam trong file ct

test1

input:
10
1 2 3 4 5 6 7 8 9 10
output:
2

test2
input:
6
4 2 4 7 1 6
output
3

*/


int main(){
	#ifndef ONLINE_JI/DGE
	freopen("test1.inp", "r", stdin);
	#endif
	
	int n, A, dem = 0;
	int N[10] = {4, 7, 16, 28, 44, 47, 49, 64, 74, 77};
	
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> A;
		for (int i = 0; i < 10; ++i){
			if(A == N[i]){
				dem++;
			}
		}
	}
	cout << dem;
	return 0;
}
