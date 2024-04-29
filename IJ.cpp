#include "IJ.hpp"
#include<iostream>




IJ(int i,int j){
    this->i=i;
    this->j=j;
}
IJ(IJ const& other){
    if(this!=other){
        this->i=i;
        this->j=j;
    }
}
IJ& operator=(const &IJ){
    if(this!=other){
        this->i=i;
        this->j=j;
    }
}

bool operator<(IJ const& other){
    if(this->j<other.j){
        return true;
    }
    else{
        if(this->i<other.i){
            return true;
        }
        else{return false;}
    }
}

