#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    srand(time(0));
    int a=0;
    bool randomeInt;
    ifstream fin("input");
    ofstream fout("output");
    int buff,summ=0;
    for(int i=0;i<12;i++)
    {
        fin>>buff;
        for(int j=0;j<buff;j++)
        {
            randomeInt=rand()%2;
            if(randomeInt){
                a++;
            }
        }
        fout<<a<<endl;
        a=0;
    }
    fin.close();
    fout.close();
    return 0;
}
