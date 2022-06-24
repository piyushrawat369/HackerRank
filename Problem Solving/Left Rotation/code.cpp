#include <iostream>
using namespace std;
 
void func(int arr[], int n, int d){
    int ans[n], index = 0;
    for(int i=d; i<n; i++){
        ans[index] = arr[i];
        index += 1;
    }
    for(int i=0; i<d; i++){
        ans[index] = arr[i];
        index += 1;
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}

int main() {
 
    int n, d;
    cin>>n>>d;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    func(arr, n, d);
    
    return 0;
}
