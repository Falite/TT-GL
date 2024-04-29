#include "mat.hpp"
#include<iostream>

mat(int n,int m){
    this->n=n;
    this->m=m;
}
mat(const mat& other){
    if(this!=other){
        this->n=other.n;
        this->m=other.m;
    }
}
mat& operator=(const mat&){
    if(this!=other){
        this->n=other.n;
        this->m=other.m;
    }
}
