#include <iostream>
using namespace std;

// Printing all Elements

/*
int main(){
    int arr[5] = {1,2,3,4,5};
    int l = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i < l;i++){
        cout << arr[i] << endl;
    }
}
*/

// Max or Min of Array

/*
int main(){
    int arr[5] = {1,2,3,4,5};
    int l = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i = 0;i < l;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << max << endl;
}
*/

/*
int main(){
    cout << "Enter the Number : ";
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        a[i] = i+1;
        cout << a[i] << endl;
    }
}
*/

// Frequency of an Element

/*
int main(){
    int arr[8] = {1,2,2,3,4,2,5,6};
    int l = sizeof(arr)/sizeof(arr[0]);
    int n;
    cin >> n;
    int p = 0;
    for(int i = 0;i < l;i++){
        if(arr[i] == n){
            p++;
        }
    }
    cout << p << endl;
}
*/

// Reverse an Array

/*
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int l = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i < l/2;i++){
        int temp = arr[i];
        arr[i] = arr[l-i-1];
        arr[l-i-1] = temp;
    }
    for(int i = 0;i < l;i++){
        cout << arr[i] << endl;
    }
}
*/

// Sort an Array 

/*
int main(){
    int arr[5] = {5,4,3,2,1};
    int l = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i < l;i++){
        for(int j = i;j < l;j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0;i < l;i++){
        cout << arr[i] << endl;
    }

}
*/

// Check if array is Sorted

/*
int main(){
    int arr[5] = {1,2,2,4,5};
    int l = sizeof(arr)/sizeof(arr[0]);
    bool found = false;
    for(int i = 0;i < l-1;i++){
        if(arr[i] > arr[i+1]){
            found = true;
        }
    }
    if(found){
        cout << "Not Sorted";
    }else{
        cout << "Sorted";
    }
}
*/

// Insert at a Given Position

/*
int main(){
    int arr[5] = {1,2,3,4,5};
    int l = sizeof(arr)/sizeof(arr[0]);
    int n,m;
    cin >> n >> m;
    if(n > 0 && n < l){
        arr[n] = m;
    }
    for(int i = 0;i < l;i++){
        cout << arr[i] << endl;
    }
}
*/

// Right Rotate by K Position 

/*
int main(){
    int arr[5] = {1,2,3,4,5};
    int l = sizeof(arr)/sizeof(arr[0]);
    int n;
    cin >> n;
    for(int j = 0; j < n; j++) {
        int temp = arr[l - 1];

        for(int i = l - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
    }
    for(int i = 0;i < l;i++){
        cout << arr[i] << endl;
    }
}
*/