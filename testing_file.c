// C++ program to demonstrate working of stoi()
// Work only if compiler supports C++11 or above.
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string a;
	std::stringstream ss;
	char cc;
	int b=0, c=0, j=0, i=0,ii=0,d[10],count=0,k=0;
	getline(cin,a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        j=i;

    }
	for(i=j+1,k=0;a[i]!='\0';i++,k++){
	    cc = a[i];
	    ii = cc - '0';
	    d[k] = ii;
	}
	for (unsigned l = 0; d[l]!=0 ;++l)
        ss << d[l];
         int result,number;
    ss >> result;
    cin>>number;
    cout<<result*number;
	return 0;
}
