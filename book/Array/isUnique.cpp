// if string has all unique character

//brute force
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "somiethind";
//     int n = s.length();
//     int flag = 0;
//     for(int i=0;i<n ; i++){
//         for(int j=i+1;j<n;j++){
//             if(s[i]==s[j]){
//                 flag =1;
//                 break;
//             }
//         }
//     }
//     if(flag==0){
//         cout<<"string is unique";
//     }
//     else{
//         cout<<"string is not unique";
//     }
//     return 0;
// }
//time complexity = O(n^2)
// space complexity = O(1)


// by sorting
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "somethind";
//     sort(s.begin(), s.end());
//     int flag = 0 ;
//     for(int i=0;i<s.length()-1;i++){
//         if(s[i]==s[i+1]){
//             flag =1;
//             break;
//         }
//     }
//     if(flag == 0){
//         cout << "String is Unique.";
//     }
//     else{
//         cout << "String is not Unique";
//     }
//     return 0;
// }
// tc = O(nlogn);
// sc = O(1);


// books
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "something";
    bool set[128] = {false};
    if(s.length()>128){
        cout<<"not possible";
        return 0;
    }
    int flag = 0;
    for(int i=0;i<s.length();i++){
        int val = s[i];
        if(set[val]){
            flag=1;
            break;
        }
        set[val] = true;
    }
    if(flag==1){
        cout<<"string is not unqiue";
    }else{
        cout<<"string is unique";
    }
    return 0;
}