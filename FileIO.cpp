#include<bits/stdc++.h>

using namespace std;

template<typename T>
vector<T> read_vector(ifstream &in) {
    vector<T> ans;
    T temp;
    while(in>>temp) {
        ans.push_back(temp);
        in>>ws;
    }
    return ans;
}

template<typename T>
void write_vector(ofstream &out , vector<T> data) {
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

    string soln_file_name = "soln_"+testSet;

    ofstream out_file(file_path+soln_file_name);

    cout<<"\n\t\tsolution saved succesfully\n";

    in_file.close();
    out_file.close();

    return 0;
}
