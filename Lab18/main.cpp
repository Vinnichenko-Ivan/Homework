#include<iostream>
#include<fstream>
#include<ctime>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
    
    srand(time(0));
    ifstream fin("input");
    ofstream fout("output");
    long long int n=100000,m=0;
    float x,y,z,a=2,b=3,c=4;
    int answer[5];
    for(int i=0;i<n;i++){

        x=2*(float)rand()/RAND_MAX;
        y=2*(float)rand()/RAND_MAX;
        //z=c*2*(float)rand()/RAND_MAX-c;
        if(x*x+y*y<=1){
            m++;
        }
        if(i==999){
            answer[0]=m; 
        }
        if(i==4999){
            answer[1]=m;
        }
        if(i==14999){
            answer[2]=m;
        }
        if(i==49999){
            answer[3]=m;
        }
        if(i==99999){
            answer[4]=m;
        }
    }
    cout<<4*m/n;
    fout<<1000<<"\t"<<5000<<"\t"<<15000<<"\t"<<50000<<"\t"<<100000<<endl;
    for(int i=0;i<5;i++){
        fout<<answer[i]<<"\t";
    }
    fin.close();
    fout.close();
   
    return 0;
}
