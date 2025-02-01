#include <iostream>
#include <vector>
using namespace std;

void minAndmax(vector<int> &arr) {

      int min=arr[0],max=arr[0],n=arr.size();
        for(int i=0; i<n; i++){
            if(max<=arr[i])
              max=arr[i];
            if(min>=arr[i])
              min=arr[i];
        }

        cout<<"Minimum : "<<min<<endl;
        cout<<"Maximum : "<<max<<endl;
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5, 8 };

    minAndmax(arr);

    return 0;
}