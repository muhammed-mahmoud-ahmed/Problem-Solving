/**
@file    P_First_digit_.cpp
@version 1.0.0
@brief   Static solution for detects first digit
@author  Muhammed Mahmoud (muhammed76mahmoud.ahmed@gmail.com)
@date    2023-02-02
*/


/* -------------------- Linking section -------------------- */
#include<iostream>
using namespace std;
/*-----------------------------------------------------------*/


/* ------------------ Definition section ------------------ */
/*----------------------------------------------------------*/


/* -------------- Global Declaration section -------------- */
/*----------------------------------------------------------*/


/* --------------------- Main section --------------------- */
int main()
{
    int number;
    cin >> number;
    number = number / 1000;//it will store new num in int so it will neglect numbers less than one
    if((number % 2) == 0)
        cout << "EVEN";
    else
        cout << "ODD";
}
/*----------------------------------------------------------*/


/* ---------------- Implementation section ---------------- */
/*----------------------------------------------------------*/


/* --------------------- Revision Log --------------------- 

    Date                  By                  Description
    ------------          ------------        ------------
    30/12/2002            Muhammed Mahmoud    hello world 

----------------------------------------------------------*/