// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        int adj[n+1][n+1];
        // indegree matrix n+1 as its 1 based nodes
        vector<int> indeg(n+1,0);
        // adjancency matrix
        for(int i = 1;i<= n;i++){
            for(int j =1;j<=n;j++){
                if( i < j){
                    adj[i][j] = 1;
                    indeg[j] ++;
                }else{
                    adj[i][j] = 0;
                }
            }
        }
        // adding the edges to be removed into vector
        vector<vector<int>> pair_todelete(m,vector<int>(2,0));
        for(int i = 0;i<m;i++){
            cin>>pair_todelete[i][0];
            cin>>pair_todelete[i][1];
        }
        // removing edges from graph matrix and reducing indegree of those to 1
        for(int i =0;i<m;i++){
            int u = pair_todelete[i][0];
            int v = pair_todelete[i][1];
            if(adj[u][v] == 1){
                adj[u][v] = 0;
                indeg[v]--;
            }
        }
        //stack with level
        queue<int> st;
        // pusing into queue the node who have 0 indegree
        for(int i=0;i<n+1;i++){
            if(indeg[i] == 0){
                st.push(i);
            }
        }
        //traversing till stack is empty
        vector<int> ans;
        while(!st.empty()){
            auto node = st.front();
            st.pop();
            ans.push_back(node);
            for(int j =1;j<=n;j++){
                if(adj[node][j] == 1){
                    indeg[j]--;
                    if(indeg[j] == 0){
                        st.push(j);
                    }
                }
            }
        }
        int p = ans.size();
        for(int i=1;i<=p;i++){
            cout<<ans[i]<<" ";
        }
        
    }
    
    return 0;
}
Input:
3 // test cases
3 2// 3 = no of nodes in graph 2 = edges need to remove
1 3 // (1,3) & (2,3) are one need to be removed
2 3
4 0
4 2
1 2
1 3

Output:
1 3 2 0 
1 2 3 4 0 
1 2 3 4 0 // need to do changes to not print 0
