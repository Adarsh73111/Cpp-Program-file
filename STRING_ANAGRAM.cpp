#include<iostream>
#include<string.h>
using namespace std;
void anagram(char s1[],char s2[]) {
    int len1,len2,size,found=0,not_found=0;
    len1 = strlen(s1);
    len2 = strlen(s2);

    if(len1 == len2) {
        size = len1;

        for(int i=0 ; i<size ; i++) {
            found=0;
            for(int j=0 ; j<size ; j++) {

                if(s1[i]==s2[j]) {
                    found=1;
                    break;
                }
            }
            if(found == 0) {
                not_found=1;
                break;
            }
        }
        if(not_found == 1) 
        cout<<"First string is not a anagram of other string"<<endl;
        else
        cout<<"First string is a anagram of other string"<<endl;
    }
    else
    cout<<"Both string must contains equal number of characters to be the anagram of other string"<<endl;
}
int main () {
    char s1[20],s2[20];
    cout<<"Enter your first string : "<<endl;
    cin.getline(s1,20);
    cout<<"Enter your second string : "<<endl;
    cin.getline(s2,20);
    anagram(s1,s2);
    return 0;
}





















