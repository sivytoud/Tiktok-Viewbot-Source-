// made by sivylol
// dont care what you do with this source, aslong as you know what your doing

// ill add encryption in next recode

#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>


#include "colors.hpp"
int menu; // menu shit


using namespace std;



int main()
{
	SetConsoleTitle("Sivy's tt bot source"); // change title here 


    Color(9);
	cout << R"(

             
                                _______ _____ _  _________ ____  _  __
                                |__   __|_   _| |/ /__   __/ __ \| |/ /
                                   | |    | | | ' /   | | | |  | | ' / 
                                   | |    | | |  <    | | | |  | |  <  
                                   | |   _| |_| . \   | | | |__| | . \ 
                                   |_|  |_____|_|\_\  |_|  \____/|_|\_\
                                        
                                        

                                                

                                                       
)";


     cout << "                                  [>] Welcome To Viewbot Recode\n\n"; 
     Sleep(3000);

     cout << "                                  [1] Send Views   \n   ";
     cout << "                               [2] Discord   \n  ";
     cout << "                                [3] Exit   \n\n  ";
     cout << "                                [>] Choose an Option:  ";
     cin >> menu;


     ////////////////////////////////////////////////////////////

    



     switch (menu)
     {
     case 1:
     {
         system("start https://freer.in/"); // bot
         Sleep(-1);
     }
     case 2:
     {
         system("start https://discord.com/"); // example, just put your discord server
         Sleep(-1);
     }
     case 3:
     {
         exit(0);
     }
     }
         
     




	Sleep(-1); // dont delete

}