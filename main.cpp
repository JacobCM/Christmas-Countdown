//
//  main.cpp
//  Christmas
//
//  Created by Jacob Clarke-McRae on 2016-11-08.
//  Copyright © 2016 Jacob Clarke-McRae. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    time_t currentTime=time(0);
    long year=31557600, christmas=31014144;
    long currentDate=(currentTime-5*60*60)%year; //subtract 5 hours from currentTime for GMT to EST conversion
    long diff=christmas-currentDate;
    double days=(double)diff/86400;

    if (days>-1&&days<=0){
        cout<<"It's Christmas!"<<endl;
        return 0;
    }
    else if (days<=-1)
        days=days+365;
    
    cout<<days<<" days until Christmas."<<endl;
    
    return 0;
}