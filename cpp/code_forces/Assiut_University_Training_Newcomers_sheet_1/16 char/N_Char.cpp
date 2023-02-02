/**
@file    N_Char.cpp
@version 1.0.0
@brief   capital-small converter
@author  Muhammed Mahmoud (muhammed76mahmoud.ahmed@gmail.com)
@date    2023-02-01
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
    
    if(inputCharacter>=65 && inputCharacter <97)//char is capital --> to get it's small plus 32
    inputCharacter+=32;
    
    else
    inputCharacter-=32;
    
    cout<<inputCharacter;
}

/*----------------------------------------------------------*/


/* ---------------- Implementation section ---------------- */
/*----------------------------------------------------------*/


/* --------------------- Revision Log --------------------- 

    Date                  By                  Description
    ------------          ------------        ------------
    1/2/2023            Muhammed Mahmoud    capital-small converter 

----------------------------------------------------------*/