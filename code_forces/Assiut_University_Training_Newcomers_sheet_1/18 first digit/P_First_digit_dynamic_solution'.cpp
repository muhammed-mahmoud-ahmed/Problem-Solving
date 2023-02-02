/**
@file    P_First_digit_.cpp
@version 1.0.0
@brief   Dynamic solution for detects first digit (positive nums)
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
    for(;number>9; )
    {
        number = number / 10;
    }
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
    2/2/2023            Muhammed Mahmoud    Detects first digit odd or even 

----------------------------------------------------------*/