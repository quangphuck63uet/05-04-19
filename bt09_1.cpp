#include<iostream>
#include<cstring>
using namespace std;
char* concat(const char* str1, const char* str2)
{
    int temp = strlen(str1) + strlen(str2);
    char* str3 = new char[temp];
    strncpy(str3, str1, temp);
    strcat(str3, str2);
    return str3;
}
int main()
{
    const char* str1="Nguyen quang phuc ";
    const char* str2="xau trai";
    cout << concat(str1, str2) << endl;
}
