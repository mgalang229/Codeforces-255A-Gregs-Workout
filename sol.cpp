#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a[20], n;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	int cnt = 1, chest = 0, biceps = 0, back = 0;
	for(int i = 0; i < n; i++){
		if(cnt == 1){
			chest += a[i];
		} else if(cnt == 2){
			biceps += a[i];
		} else if(cnt == 3){
			back += a[i];
		}
		if(cnt == 3) cnt = 1;
		else cnt++;
	}
	if(chest > biceps){
		if(chest > back) cout << "chest\n";
		else cout << "back\n";
	} else{
		if(biceps > back) cout << "biceps\n";
		else cout << "back\n";
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	solve();
	return 0;
}