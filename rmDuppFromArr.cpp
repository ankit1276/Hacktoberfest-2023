#include <bits/stdc++.h>

using namespace std;

int rmDuplicates(int* A, int n){
    if(n==0 || n==1){
        return n;
    }
    vector<int> temp;

    temp.push_back(A[0]);
    for(int i = 1; i < n ; i++){
        if(A[i]==A[i-1]){
            continue;
        }else{
            temp.push_back(A[i]);
        }
    }


    int size = temp.size();

    for(int i = 0; i < size; i++){
        A[i] = temp[i];
    }

    return size;

}

int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i =0; i < n; i++){
        cin>>A[i];
    }
    int newSize = rmDuplicates(A, n);
    cout<<newSize<<endl;
    for(int i = 0 ; i < newSize; i++){
        cout<<A[i];
        if(i!=newSize-1) cout<<" ";
    }

    return 0;
}
