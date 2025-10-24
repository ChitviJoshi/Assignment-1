//could not dynamically input array as argument(have to keep either columns/rows constant)
#include <iostream>
using namespace std;

void reverse(int a[],int n){
    int temp=0;
    for(int i=0; i<n/2;i++){
        temp=a[(n-1)-i];
        a[(n-1)-i]=a[i];
        a[i]=temp;
    }
    cout<<"reversed array"<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

void transpose(int m, int n, int a[][3]){
    int t[m][n];
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            t[i][j]=a[j][i];
        }
    }
    cout<<endl<<"Transpose"<<endl;
    for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        cout<< t[i][j]<<" ";
    }
    cout<<endl;
    }
    }


void multiply(int a[][3], int b[][2], int c[][2]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}

int main() {
    int arr[5]={5,8,9,2,3};
    int A[3][3]={{10, 9, 8}, {7, 6, 5}, {4, 3, 2}};
    int B[3][2]={{4, 5}, {7, 2}, {8, 9}};
    int C[3][2];
    reverse(arr,5);
    transpose(3,3,A);

    multiply(A, B, C);
    cout<<"Multiply Result"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
