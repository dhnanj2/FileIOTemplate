#include<bits/stdc++.h>

using namespace std;

class FileIO {
    // name of the file from which the inputs are taken
    string file_name ;
    // path of the file from which the inputs are taken
    string file_path ;
    // name of the file in which the outputs are fed
    string soln_file_name;
    // input file object
    ifstream in_file;                           
    // output file object 
    ofstream out_file;                          

    public: 
    
    FileIO(string file_name, string file_path) : file_name(file_name) , file_path(file_path) 
    {
        in_file.open(file_path+file_name);
        if(!in_file) {
            cerr<<"\n\t\tWrong Input File or Path!!!!!!!\n";
            exit(0);
        }
        soln_file_name = "soln_"+file_name;
        out_file.open(file_path+soln_file_name);
    }
    
    ~FileIO() {
        in_file.close();
        out_file.close();
    }

    // function to read a single literal from file
    template<typename T>
    T read_once() {
        T data;
        in_file>>data;
        return data;
    }

    // function to read a line from the file and tokenise it into vector<int> 
    vector<int> read_ints() {
        vector<int> ans;
        string data;
        getline(in_file,data);
        stringstream ss(data);
        while(ss>>data){
            ans.push_back(stoi(data));
        }
        return ans;
    }
    
    // function to read a line from the file and tokenise it into vector<string> 
    vector<string> read_strings() {
        vector<string> ans;
        string data;
        getline(in_file,data);
        stringstream ss(data);
        while(ss>>data){
            ans.push_back(data);
        }
        return ans;
    }
    
    // function to write a single literal into outfile
    template<typename T>
    void write(T &data) {
        out_file<<data;
    }

    // function to write a vector<T> into the output file
    template<typename T>
    void write(vector<T> &data) {
        for(auto i:data) {
            out_file<<i<<" ";
        }
        out_file<<"\n";
    }

};
