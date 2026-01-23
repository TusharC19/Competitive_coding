# include<bits/stdc++.h>
using namespace std; 

int lb(vector<int>& a, int t){
        int n=a.size();
        int s=0,e=n-1;

        int ans = -1;
        while(s<=e){
            int m=s+(e-s)/2;

            if(a[m]==t){
                ans = m;
                e = m-1;
            }

            else if(a[m]<t){
                s = m+1;
            }

            else e = m-1;
        }

        return ans;
        
    }

    int ub(vector<int>& a, int t){
        int n=a.size();
        int s=0,e=n-1;

        int ans = -1;
        while(s<=e){
            int m=s+(e-s)/2;

            if(a[m]==t){
                ans = m;
                s = m+1;
            }

            else if(a[m]<t){
                s = m+1;
            }

            else e = m-1;
        }

        return ans;
        
    }
    int countOccurrences( vector<int>& arr, int target) {
        // Your code goes here
        int upb = ub(arr,target);
        int lwb = lb(arr,target);
        cout<<upb<<" "<<lwb<<endl;
        return -1;
    }

int main(){
    vector<int>a = {0,0,1,1,1,2,3};
    int t = 1;
    int ans = countOccurrences(a,t);
    cout<<ans<<endl;
    
 return 0;
}