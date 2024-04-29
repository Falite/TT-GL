#include <iostream>
#include<algorithm>
#include<string>
#include<vector>

#include "matAIJ"
#include "IJ"
#include "mat"

class Generer {
public:
    int operator()(){
        return rand%10;
    }
}


int main(){
    int m=10;
    int n=10;
    vector<int> vec(m,Generer());
    vector<int> vecres(m,0);

    matAIJ<complex<double>> matcomp(n,m);  //Q4

    matAIJ<int> saucisse(n,m);
    
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            saucisse.add(i,j,rand%10)
        }
    }
    
    vecres=saucisse.matve(vec)

    cout << vecres << endl;

}