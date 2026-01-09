# include<bits/stdc++.h>
using namespace std; 

class Solution {
  public:
    void nearlySorted(vector<int>& a, int k) {
        // code here
        int n=a.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<k;i++) pq.push(a[i])
    }
};



int main(){
    // priority_queue<int>pq;
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(3);
    pq.push(2);
    pq.push(5);

    while(!pq.empty()) {
        cout<<pq.top()<<endl;
        pq.pop();
    }


 return 0;
}