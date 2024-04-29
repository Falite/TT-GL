#ifndef matAIJ_hpp
#define matAIJ_hpp

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include "mat.hpp"

template<typename T>
class matAIJ : public mat {
private:
    map<IJ,T> m_mat
public:
    matAIJ(int=1,int=1);
    ~matAIJ();
    matAIJ(maiAIJ const& matAIJ);
    void add(int i,int j,T aij);
}

#endif 