#include<iostream>
#include<conio2.h>
#include<windows.h>
using namespace std;
main()
{
	int px[5]={15,16,17,18,19};
	int py[5]={5,5,5,5,5};
	int npx=0;
	int npy=0;
	int matriz[20][20]={{0}};
	
	
	int x=-1;
	int y=0;
	while(true)
    {
        if(GetAsyncKeyState(VK_LEFT))
        {
            y=0;
            x=-1;
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            y=0;
            x=1;
        }
        if(GetAsyncKeyState(VK_UP))
        {
            x=0;
            y=-1;
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
        	x=0;
           y=1;        
        }
        npx=px[0]+x;
        npy=py[0]+y;
        gotoxy(px[4],py[4]); 
		cprintf(" ");
        for(int c=4;c>=1;c--)
		{
		     	px[c]=px[c-1];
		     	py[c]=py[c-1];
		}		
		px[0]=npx;
		py[0]=npy;
		
		     	 
		for(int c=0;c<=4;c++)
		{
		     	 gotoxy(px[c],py[c]); 
				cprintf("*");
		}		
		
      
	
        Sleep(300); // NEW LINE OF CODE - pauses for 10 milliseconds
    }
    /*
	textbackground(BLUE);//black color
	clrscr();
	textcolor(15); //white color
	gotoxy(10,10); cprintf("WINDOW-1");
	*/
	system("pause");
}
