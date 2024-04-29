#ifndef mat_hpp
#define mat_hpp

#include <stdio.h>
#include <iostream>
#include <algorithm>

class mat{
protected:
    int n;
    int m;
public:
    mat(int=1,int=1);
    mat(const mat& );
    mat& operator=(const mat&);
    virtual ~mat();
}


#endif