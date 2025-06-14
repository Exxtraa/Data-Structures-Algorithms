//  Superior Elements
// code 360 https://www.naukri.com/code360/problems/superior-elements_6783446?leftPanelTabValue=PROBLEM

vector<int> ans;
int n = a.size();
int maxi = INT_MIN;
for(int i =n-1;i>=0;i--){
    if(a[i] > maxi){
        ans.push_back(a[i]);
    }
    maxi = max(maxi,a[i]);

}
sort(ans.begin(),ans.end());
return ans;