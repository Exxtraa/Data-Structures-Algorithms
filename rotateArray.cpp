//Array I
void sorted(vector<int>&arr,int k){
    int n = arr.size();

    k = k % n;

    vector<int> temp(k);
    for(int i =0;i<k;i++){
        temp[i] = arr[i];
    }
    for(int i =k;i<n;i++){
        arr[i - k] = arr[i];
    }
    for(int i = n-k;i<n;i++){
        arr[i] = temp[i -(n-k)];
    }
}

vector<int> rotateArray(vector<int>arr, int k) {
    sorted(arr,k);
    return arr;
    
}



//array II
void sorted(vector<int>&arr,int k){
    int n = arr.size();

    k = k % n;

    vector<int> temp(k);
    for(int i =0;i<k;i++){
        temp[i] = arr[i];
    }
    for(int i =k;i<n;i++){
        arr[i - k] = arr[i];
    }
    for(int i = n-k;i<n;i++){
        arr[i] = temp[i -(n-k)];
    }
}

vector<int> rotateArray(vector<int>arr, int k) {
    sorted(arr,k);
    return arr;
    
}
