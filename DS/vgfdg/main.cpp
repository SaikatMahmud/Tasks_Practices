#include <iostream>

using namespace std;
//What will be the output of the following C++ code?

int main() {
    int i = 0, x = 0;
    do {
        if (i % 5 == 0) {
             cout<<x;
             x++;
             }
       ++i;
    } while(i < 10);

    cout<<x;
    return 0;
}

18.What will be the output of the following C++ code?

main(int argc, char const *argv[]) {
	const char *a = "Hello\0World";
	cout<<a;
}
