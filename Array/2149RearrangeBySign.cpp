int n = nums.size();
vector<int> ans (n,0);
int posIndex = 0,negIndex = 1;
for(int i=0;i<n;i++){
    if(nums[i] < 0){
        ans[negIndex] = nums[i];
        negIndex += 2;
    } else{
        ans[posIndex] = nums[i];
        posIndex += 2;
    }
    return ans;
}


/// This is for unusal sign numbers [2,5,-6,-8,5,3,7] 

vector<int> alternateNumbers(vector<int>&a) {
    vector<int> pos,neg;
    int n = a.size();
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        } else{
            neg.push_back(a[i]);
        }
    }

    if(pos.size() > neg.size()){
        for(int i = 0;i<neg.size();i++){
            a[i*2] = pos[i];
            a[i*2+1] = neg[i];
        }
        int index = pos.size() * 2;
        for(int i = pos.size();i<pos.size();i++){
            a[index] = pos[i];
            index++;
        }
    } else{
        for(int i = 0;i<pos.size();i++){
        a[i*2] = pos[i];
        a[i*2+1] = neg[i];
        }
        int index = neg.size() * 2;
        for(int i = neg.size();i<pos.size();i++){
            a[index] = neg[i];
            index++;
        }
    }
    return a;
}