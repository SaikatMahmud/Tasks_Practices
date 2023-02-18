#include<iostream>
#include <fstream>
using namespace std;
int main()
{
fstream st; // Step 1: Creating object of fstream class
st.open("E:\MyFile.doc",ios::out); // Step 2: Creating new file
if(!st) // Step 3: Checking whether file exist
{
cout<<"File creation failed";
}
else
{
cout<<"New file created";
st<<"Saikat Mahmud"<<endl;
st<<"19-3"<<endl;
st.close(); // Step 4: Closing file
}
return 0;
}
