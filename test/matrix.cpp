// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n =5;
//     int matrix[n][n];
//     for(int i=0 ; i<n ;i++){
//         for(int j=0 ; j<n;j++){
//             // if(i==0 1|| j==0 || i==n-1 || j==n-1){
//             //     matrix[i][j]=1;
//             // }
//             // else{
//             //     matrix[i][j]=0;
//             // }
//             if((i==0 && j==0) || (i==0 && j==n-1) || (j==0 && i==n-1) || (i==n-1 && j==n-1)){
//                 matrix[i][j]=1;
//             }
//             else{
//                 matrix[i][j]=0;
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m =4;
    int n =3;
    int matrix[m][n];
    for(int i=0 ; i<m ;i++){
        for(int j=0 ; j<n;j++){
            if((i==1 && j==1) || (i==n-1 && j==1)){
                matrix[i][j]=1;
            }
            else{  
                matrix[i][j]=0;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}