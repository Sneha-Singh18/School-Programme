#include<iostream>
#include <algorithm>
using namespace std;
int compare(string s1, string s2) {
   //convert s1 and s2 into lower case strings
   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
   transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
   if(s1.compare(s2) == 0){
       return 1;
   } else {
       return 0;
   }
       
}
compare2string() {
   string s1, s2;
   cout << "Enter the first String: ";
   getline (cin,s1);
   cout << "Enter the second string: ";
   getline (cin,s2);
   if(compare(s1, s2)) {
      cout << "Both string are same";
   }else{
      cout << "Both string are not same";
   }
}
