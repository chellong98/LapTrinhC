//ph�n t� th� ba, m�t ���ng tr�n v� m�t h�nh qu�t qu�t t� 90 ��n 360 ��.
# include "graphics.h"
#include "stdio.h"
#include "conio.h"
main()
	{
		int md=0,mode;
		initgraph(&md,&mode,"C:\\TC\\BGI");
		setbkcolor(BLUE);
		setcolor(YELLOW);
		setfillstyle(SOLID_FILL,RED);;
		arc(160,50,0,90,45);
		circle(160,150,45);
		pieslice(480,150,90,360,45);
		getch();
		closegraph();
	}
