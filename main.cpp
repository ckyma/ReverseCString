/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yuchen
 *
 * Created on January 17, 2017, 6:15 PM
 */

#include <iostream>
#include <cstring>

using namespace std;

void reverseCString(const char* cstr, char * result){

    int realLen = 0;
    while(cstr[realLen] != '\0'){
        ++realLen;
    }
    
    strcpy(result, cstr);
    
    for(int i = 0; i < int(realLen / 2); ++i){
        char temp = result[i];
        result[i] = result[realLen -1 - i];
        result[realLen -1 - i] = temp;
    }
}

string reverseCString(const char* cstr){

    string str = string(cstr);
    string restr = string(str.rbegin(), str.rend());
    
    return restr;
}

/*
 * 
 */
int main(int argc, char** argv) {

    const char * cstr = "Hello";
    
    char* result = new char[20];
    
    reverseCString(cstr, result);
    
    cout << result << endl;
    
    delete result;
    
    // Or
    
    string restr = reverseCString(cstr);
    cout << restr;
    
    return 0;
}

