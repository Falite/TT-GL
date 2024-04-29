#include "matAIJ.hpp"
#include<iostream>
#include<algorithm>
#include "IJ.hpp"
#include "mat.hpp"
using namespace std;

template<typename T>
matAIJ(int m,int n){
    IJ temp(m,n);
    this->m_map=map<temp,T>(IJ,0);
}

template<typename T>
matAIJ(maiAIJ const& matAIJ)

template<typename T>
void add(int i,int j,T aij){
    IJ temp(i,j);
    if(m_map(IJ)+=aij != 0){
        this->m_map(IJ)+=aij;
    }
}

template<typename T>
vector<T> matAIJ::matve(vector<T> x){
    vector<T> res(this->m,0);
    auto it=res.begin();
    while(it!=res.end()){
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                IJ(i,j);
                res+=this->map(IJ)*x[i];
            }
        }
        ++it;
    }
    return res;
}

offstream& matAIJ::operator<<(offstream &flux,matAIJ const& mymat){
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            IJ temp(i,j);
            flux << this->map[IJ] << " " ;
        }
        flux << endl;
    }
    return flux;
}