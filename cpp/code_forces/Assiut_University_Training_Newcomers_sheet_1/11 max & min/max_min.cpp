/**
@file    max&min.cpp
@version 1.0.0
@brief   max and min of inputs 
@author  Muhammed Mahmoud (muhammed76mahmoud.ahmed@gmail.com)
@date    2023-01-29
*/


/* Linking section */
#include<iostream>
using namespace std;
/*-----------------*/


/* Main section */
int main()
{
    signed int inputNumbers[3];
    cin>>inputNumbers[0];//here you will put first value to store it in max & min
    signed int maxNum=inputNumbers[0];
    signed int minNum=inputNumbers[0];
    for(int iterator=1;iterator<3;iterator++)
    {
        cin>>inputNumbers[iterator];
        if(maxNum<inputNumbers[iterator])
        maxNum=inputNumbers[iterator];
        if(minNum>inputNumbers[iterator])
        minNum=inputNumbers[iterator];
        //i used above to if because each one will be executed individually
    }
    cout<<minNum<<" "<<maxNum;
}
/*--------------*/


/* Revision Log */
/*--------------*/
/*    Date                  By                  Description*/
/*    ------------          ------------        ------------*
/*    29/1/2023            Muhammed Mahmoud    max&min */