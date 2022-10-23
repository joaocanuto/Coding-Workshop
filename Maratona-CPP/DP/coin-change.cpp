// Solutions for coin-change problem

// Encontrando uma unica solução:

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
vector<int> moedas;
int n, m;
bool t = false;

int dp[maxn];

void troco(int x, int i){
    if(t || i > m || x < 0) return;

    //cout << x << " " << i << endl;

    if(x == 0) t = true;

    int next = i + 1;

    troco(x - moedas[i], next);
    troco(x, next);
}

void solve(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int aux; cin >> aux; moedas.pb(aux);
    }
    troco(n, 0);
    if(t) cout << "S";
    else cout << "N";
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int t;
	
	//cin>>t; //*/
	t = 1; //*/
	while(t--) solve();

	return 0;
}

//