#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("input");
    ofstream fout("output");
    int buff,summ=0;
    for(int i=0;i<10;i++){
        fin>>buff;
        summ+=buff;
        fout<<buff*2<<endl;
    }
    fout<<summ;
    fin.close();
    fout.close();
    return 0;
}
