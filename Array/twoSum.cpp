better one

   //main code from leetcode 
   {
    map<int,int> mpp;
int n = nums.size()
for(int i =0;i<n;i++){
    int num = nums[i]
    int needed = target - num;
    if(mpp.find(mpp[target]) != mpp.end()){
        return mpp{[needed] , i}; 
    }
    mpp[num] = i;
}
return {-1,-1}
}

optimal one with two pointer approch

{
    int left =0;
    int right =0;
    sort(book.begin(),book.end())
    while(left < right){
        int sum = book[left] + book[right]
        if(sum == target){
            return "True";
        }
        else if(sum < target) left++
        else right--;
    }
    return "NO"
}