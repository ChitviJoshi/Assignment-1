#include <iostream> 
using namespace std; 
int main() 
{ 
    int n; 
    cout<<"enter no of elements"; 
    cin>>n; 
    int A[n]; 
    for(int i = 0; i < n; i++) { 
        cout << "Enter element " << i + 1 << ": "; 
        cin >> A[i]; 
    } 
    cout << "The created array: "; 
    for(int i = 0; i < n; i++) { 
        cout << A[i] << " "; 
    } 
    cout << "\n"; 
    
    cout<<"Removing duplicates"; 
    for (int i=0;i<n;i++){ 
        for(int j=i+1;j<n;j++){ 
            if (A[i]==A[j]){ 
                for (int c = j; c < n - 1; c++) { 
                    A[c] = A[c + 1];} 
                n--; 
            } 
    }} 
    cout << "The updated array: "; 
    for(int i = 0; i < n; i++) { 
        cout << A[i] << " "; 
    } 
    cout << "\n"; 
    
    return 0; 
} 