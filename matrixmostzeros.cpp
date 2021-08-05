#include <bits/stdc++.h> 
using namespace std; 
void solve();
int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

// #ifndef ONLINE_JUDGE 
//    freopen("input.txt", "r", stdin); 
//    freopen("error.txt", "w", stderr); 
//    freopen("output.txt", "w", stdout); 
//    #endif
//    // main code
    int N, colcount = 0, colnumber = 0, maxcount = 0;
    cin>>N;
    int v[N][N], j;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>v[i][j];
        }
    }
    
    for(int j = 0; j < N; j++){
        for(int i = 0; i < N; i++){
            if(v[i][j] == 0){
                colcount++;
            }
        }
        if(colcount > maxcount){
            maxcount = colcount;
            colnumber = j;
        }
        colcount = 0;
    }

    cout<<colnumber<<endl;


    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
}