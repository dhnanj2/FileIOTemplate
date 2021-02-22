#include<bits/stdc++.h>

using namespace std;

#define pb push_back

#define all(c) (c).begin(), (c).end()

#define sz(x) (int)(x).size()

#define FOR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))

#define pii pair<int,int>

#define ll long long 

#define pb push_back

#define S second

#define F first

const int MOD = 1e9+7;

static const auto __optimize__ = []() {

std::ios::sync_with_stdio(false);

std::cin.tie(nullptr);

std::cout.tie(nullptr);

return 0;

}();

vector<int> fread_ints(ifstream &in) {
    vector<int> ans;
    int data;
    while (in>>data) {
        ans.push_back(data);
    }
    return ans;
}

vector<string> fread_strings(ifstream &in) {
    vector<string> ans;
    string data;
    getline(in,data);
    stringstream ss(data);
    while(ss>>data){
        ans.push_back(data);
    }
    return ans;
}

template<typename T>
void fwrite_vector(ofstream &out ,vector<T> &data) {
    for(auto i:data) {
        out<<i<<" ";
    }
    out<<"\n";
}


int main()
{
    string testSet = "a_example";
    string file_path = "D:\\Google\\HashCode21\\PraciceRound\\";

    ifstream in_file(file_path+testSet);

    if(!in_file) {
        cerr<<"Input File Not opening";
        return 0;
    }

    int m=0, t2=0 ,t3=0, t4=0;
    in_file>>m>>t2>>t3>>t4;
    
    vector<vector<string>> pizza;
    
    string soln_file_name = "soln_"+testSet;

    ofstream out_file(file_path+soln_file_name);

    FOR(i,0,m,1) {
        int sz=0;
        in_file>>sz>>ws;
        auto ing = fread_strings(in_file);
        cout<<sz<<" "<<ing.size()<<" ";
        pizza.push_back(ing);
        fwrite_vector(out_file,ing);
    }

    cout<<"\n\t\tsolution saved succesfully\n";

    in_file.close();
    out_file.close();

    return 0;
}
