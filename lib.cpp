//
// Created by squer on 08/12/2021.
//

#include "lib.h"
bool res (char list[10][20],char name[20],int &i){
    for(i=0;i<10;i++){
        if(list[i][0]==name[0]){
            for(int j=1;j<20;j){
                if(j==19){
                    return true;
                }
                j++;
            }
        }


    }
    return false;

}
