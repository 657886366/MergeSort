//
//  main.cpp
//  MergeSort
//
//  Created by Conghui Deng on 9/17/19.
//  Copyright © 2019 Conghui Deng. All rights reserved.
//

#include <iostream>
#include<fstream>
#include<string>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    ifstream file1(argv[1]);
    ifstream file2(argv[2]);
    ofstream file3(argv[3]);
    
    
    int d1,d2;
    file1>>d1;
    
    file2>>d2;
    
    while(!file1.eof()|| !file2.eof()){
        while(!file1.eof()&& !file2.eof()){
        if(d1<=d2){
            file3<<d1<<'\n';
            file1>>d1;
            
            
            
        }
        else if(d1>d2){
            file3<<d2<<'\n';
            
            file2>>d2;
        }
        }
        if(file1.eof()){
            
            while(!file2.eof()){
                file2>>d2;
                
                
                file3<<d2<<'\n';
            }
                
        }
        else if(file2.eof()){
            
            
            while(!file1.eof()){
                file1>>d1;
                
                
                file3<<d1<<'\n';
            }
            
        }
        
    }
    cout<<"Merge finished";
    file1.close();
    file2.close();
    file3.close();
    return 0;
}
