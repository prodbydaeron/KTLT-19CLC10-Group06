#ifndef _HEADER_H_
#define _HEADER_H_
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

//****SYSTEM*****//
int checkChoice(string Choice, int Number);
void clearScreen();
void warnScreen();
int choiceScreen(int Number);
//***************//

//User Interface//
void Login();
void firstUI();
void showMenu();
void studentFeatureUI();
void editFeatureStu();
void viewFeatureStu();
void courseFeatureUI();
void editFeatureCourse();	
void staffUI();
//**************//		
#endif					
