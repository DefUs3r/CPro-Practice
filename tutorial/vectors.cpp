#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    //vector is a datatype like an array with more functionality.
    cin>>n;
    cout<<n<<endl; //endl is new line
    vector<int> vect(10); //initialising the vector....can do without size also(used in graph algos)
    for (int i = 0; i < 10; i++)
    {
    	vect[i]=i;
    }
    vect.push_back(1);//pushback adds a newer block to the vector. Syntax is vector_name.pushback(no.of pushbacks)
    vect[10]=900;
    for (int i = 0; i < 10; i++)
    {
    	cout<<vect[i]<<endl;
    }
    cout<<"outcome of push_back\t"<<vect[10]<<endl;//for printing text in cout use apostrophes.
    return 0;
}