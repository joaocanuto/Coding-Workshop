#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl '\n'
#define mset(A,X) memset(A,X,sizeof A)

const int maxn = 1e6;

int findPot(int x){
    int cont = 0;
    if(x%2 != 0) return 0;
    else{
        for(int i=0; i < 21; i++){
            if(x%2 == 0){
                x = x/2;
                cont++;
            }
        }
    }
    return cont;
}

void solve(){
    int n; cin >> n;
    vector<int> nums;
    int cont = n;
    for(int i=0;i<n;i++){
        int aux; cin >> aux;
        nums.pb(aux);
        cont -= findPot(aux); 
    }
    
    if(cont >= n){
        cout << 0 << endl;
        return;
    }
    // int maiorPot2 = 0;
    // for(int i=1; i <= n; i = i*2){
    //     maiorPot2 = i;
    // }

    // for(int i=maiorPot2; i > 1; i = i/2){
    //     cont -= findPot(i);
    // }

    // for(int i=n; i > 0;i--){
    //     int x = findPot(i);
    // }

    
    vector<int> v; 
    for(int i=1; i <= n; i++){
        v.pb(findPot(i));
    }
    v.sort(v.begin(), v.end());
    int op = 0;
    for(int i=0; i < n; i++){
        cont -= v[i]; 
        op++;
        if(cont == 0){
            cout << op << endl;
            return;
        }
    }
    cout << -1 << endl;
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int t;
	
	cin>>t; //*/
	//t = 1; //*/
	while(t--) solve();

	return 0;
}
