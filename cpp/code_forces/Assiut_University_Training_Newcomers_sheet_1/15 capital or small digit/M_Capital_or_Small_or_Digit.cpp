/**
@file    M_Capital_or_Small_or_Digit.cpp
@version 1.0.1
@brief   this code based on ascii table 
@author  Muhammed Mahmoud (muhammed76mahmoud.ahmed@gmail.com)
@date    2023-01-31
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
    char inputCharacter;
    cin>>inputCharacter;
    // if(inputCharacter == 65 || inputCharacter ==97)
    // {
    //     cout<<"ALPHA"<<endl;    
    // }
    //garbage
    if(inputCharacter>=65 && inputCharacter <97)
    {   cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL";
    }
    else if(inputCharacter>=97 && inputCharacter <=122)
    {
    cout<<"ALPHA"<<endl;
    cout<<"IS SMALL";
    }
    else 
    cout<<"IS DIGIT";
}
/*----------------------------------------------------------*/


/* ---------------- Implementation section ---------------- */
/*----------------------------------------------------------*/


/* --------------------- Revision Log --------------------- 

    Date                  By                  Description
    ------------          ------------        ------------
    31/1/2023            Muhammed Mahmoud     big or small 
    1/2/2023             Muhammed Mahmoud     edited alpha word 
----------------------------------------------------------*/