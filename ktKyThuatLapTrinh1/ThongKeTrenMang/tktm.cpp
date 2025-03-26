#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("t.inp", "r", stdin);
	#endif

	int n;
	int lon;
	int nho;
	int dem_nho = 0;
	int dem_lon = 0;
	cin >> n;

	vector<int> a(n);

	//nhap mang a
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	//pt nho va lon nhat
	nho = a[0];
	lon = a[0];
	for(int i = 0; i < n; ++i){
		if(nho > a[i]){
			nho = a[i];
		}
		if(lon < a[i]){
			lon = a[i];
		}
	}

	//dem
	for(int i = 0; i < n; ++i){
		if(a[i] == nho) dem_nho++;
		if(a[i] == lon) dem_lon++;
	}
	if(n = dem_nho && n == dem_lon) cout << dem_nho;
	else cout << dem_nho + dem_lon;
	

	return 0;
}
