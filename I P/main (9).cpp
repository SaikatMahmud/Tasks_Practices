#include <iostream>
#include <string.h>
using namespace std;
int main(void) {
char string1[] = "this is";
char string2[] = "a test";
char string3[] = "Hello ";
char string4[] = "world!";
strcpy(string2,string1);
cout<<string2<<endl;
strrev(string3);
cout<<string3<<endl;
strlen(string1);
cout<<strlen<<endl;
if(strcmp(string1, string2) == 0)
	cout<<"strings are equal"<<endl;
else cout<<"strings are different"<<endl;
return 0;
}
