
#include <bits/stdc++.h>
using namespace std;
 
void func(vector<string> arr, vector<string> query, int d, int n){
    
    int ans[d], index = 0;
    for(int i=0; i<d; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(query[i] == arr[j]){
                count += 1;
            }
        }
        ans[index] = count;
        index += 1;
        count = 0;
    }
    for(int i=0; i<d; i++){
        cout<<ans[i]<<endl;
    }
}

int main() {
 
    string arr_size, que_size;
    getline(cin, arr_size);
    int n = stoi((arr_size));
    
    vector<string> arr(n);
    for(int i=0; i<n; i++){
        string element;
        getline(cin, element);
        arr[i] = element;
    }
    
    getline(cin, que_size);
    int d = stoi((que_size));

    vector<string> query(d);
    for(int i=0; i<d; i++){
        string element;
        getline(cin, element);
        query[i] = element;
    }
    
    
    func(arr, query, d, n);
    

    return 0;
}
