#include <iostream>
#include <string.h>
using namespace std;
int main(void) {
char string1[] = "this is";
char string2[] = "test";
char string3[] = "Hello ";
char string4[] = "world!";
cout<< string3<<endl;
strcat(string3,string4);
cout<<string3<<endl;
strcpy(string1,string2);
cout<<string1<<endl;
}
