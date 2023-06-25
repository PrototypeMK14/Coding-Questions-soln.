#include <iostream>
#include <vector>
using namespace std;

// Recursive soln:-
int bsearch(vector<int>&arr, int low, int high, int x) {
    int mid = (low+high)/2;

    if(low>high) 
        return -1;
    
    if(arr[mid]==x) 
        return mid;

    if(arr[mid]>x) {
        return bsearch(arr, low, high-1, x);
    }
    else {
        return bsearch(arr, low+1, high, x);
    }
}

/* Iterative soln:-
int iterbserach(vector<int>&arr, int x) {
    int low = 0;
    int high = arr.size()-1;
    
    while(low<=high) {
        int mid = (low+high)/2;

        if(arr[mid]==x) return mid;

        if(arr[mid]>x) high = high-1;
        else low = low+1;
    }

    return -1;
}
*/

int main() {
    vector<int> arr{10,20,30,40,50};
    cout<<bsearch(arr,0,arr.size()-1,10);
    return 0;
}
