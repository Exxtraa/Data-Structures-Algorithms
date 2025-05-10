bool comparitor(pair<int,int>p1 , pair<int,int>p2){
    if(p1.second<p2.second)return true;
    else return false;
};

int definePairSorting(){
    vector<pair<int,int>> v = {{5,6,}{8,9}{4,3}};

    sort(v.begin(), v.end(),comparitor);

    for(auto l : v){
        cout << l.first << " " << l.second << endl;
    }

    return 0;
}