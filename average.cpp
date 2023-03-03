#include<iostream>
#include<cstdlib>
using namespace std;
int main(int argc,char* argv[])
{
    int a=0,avg;
    if(argc<=1)
    {
        cout <<"Please input numbers to find average.\n";
    }
    else
    {
        cout <<"---------------------------------\n";
        for(int i=1;i<argc;i++)
        {
            a+=atoi(argv[i]);
        }
        avg=a/(argc-1);
        cout <<"Average of "<<argc-1<<" numbers = "<<avg<<"\n";
        cout <<"---------------------------------";
    
    }
    
}
