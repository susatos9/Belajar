#include<bits/stdc++.h>
using namespace std;

const int N = 200;
int ar[N][N], n, m;
set<string> res;

bool homogen(int x, int y, int size){
	for(int i = x; i < x + size; i++){
		for(int j = y; j < y + size; j++){
			if(ar[i][j] == 0) return false;
		}
	}
	return true;
}

void brute(int x, int y, int size, string now){
	if(homogen(x, y, size)){
		res.insert(now);
		return ;
	}
	if(size == 1) return ;
	size /= 2;
	brute(x, y, size, now + '0'); // 0
	brute(x, y + size, size, now + '1'); // 1
	brute(x + size, y, size, now + '2'); // 2
	brute(x + size, y + size, size, now + '3'); // 3
}

int main(){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++) ar[i][j] = 0;
	}
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) cin >> ar[i][j];
	}
	int mx = max(n, m);
	n = m = mx;
	while(__builtin_popcount(n) != 1){
		n++; m++;
	}
	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < n; j++) cout << ar[i][j] << ' ';
	// 	cout << '\n';
	// }

	brute(0, 0, n, "1");
	cout << (int)res.size() << '\n';
	for(string s : res) cout << s << '\n';

}