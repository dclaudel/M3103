/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: claudeld
 *
 * Created on 9 novembre 2016, 16:06
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 * 
 * 
 */

int factorielleIter(int n)
// {n ≥ 0} => {résultat = n!(soit 1×2×...×n−1×n}
{
    int somme=1;
    while(n>0){
        somme=somme*n;
        n--;
    }
    return somme;
}

int factorielleRec(int n)
// {n ≥ 0} => {résultat = n!(soit 1×2×...×n−1×n}
{
    if(n<2){
        return 1;
    }
    else{
        return n*factorielleRec(n-1);
    }
}

bool estPair(int n){
    if(n==0){
        return true;
    }
    else if(n==1){
        return false;
    }
    else{
        return estPair(n-2);
    }
}





int main(int argc, char** argv) {

    int n=6;
    int somme=factorielleIter(n);
    cout<<somme<<endl;
    int somme2=factorielleRec(n);
    cout<<somme2<<endl;
    if(estPair(n))
        cout<<"n est pair"<<endl;
    else
        cout<<"n est impair"<<endl;
    return 0;
}

