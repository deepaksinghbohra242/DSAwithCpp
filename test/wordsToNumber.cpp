#include <iostream>
using namespace std;

int main() {
    string s1[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
                   "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string s2[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string s4 = "";
    int temp;
    long long in;
    cin >> in;

    if (in == 0) {
        cout << "zero";
    } else if (in == 100000) {
        cout << "one lakh";
    } else if (in < 20) {
        cout << s1[in];
    } else {
        if (in >= 1000) {
             temp = in/1000; 
                if(temp>=20){
                    s4 += s2[(temp/10)] +" "+ s1[temp%10] + " thousand ";
                }
                else{
                    s4+=s1[temp]+ " thousand ";
                }
            in %= 1000;
        }
        if (in >= 100) {
            temp = in / 100;
            s4 += s1[temp] + " hundred ";
            in %= 100;
        }
        if (in >= 20) {
            temp = in / 10;
            s4 += s2[temp] + " ";
            in %= 10;
        }
        if (in > 0) {
            s4 += s1[in] + " ";
        }
    }
    cout << s4;
    return 0;
}
