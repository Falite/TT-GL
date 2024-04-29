#ifndef IJ_hpp
#define IJ_hpp

#include <stdio.h>
#include <iostream>
#include <algorithm>

class IJ {
public:
    int i;
    int j;
public:
    IJ(int=0,int=0);
    IJ(const& IJ);
    IJ& operator=(const &IJ);
    virtual ~IJ();
    bool operator<(const& IJ);
}


#endif