#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

int main()
{
    int gdrive=DETECT,gmood;
    int rhx,rhy,j,x,i,save=100;
    initgraph(&gdrive,&gmood,NULL);
    j=100;
    x=35;

     line(20,380,580,380);
    line(20,20,580,20);

    for(i=0; i<10000; i+=5)
    {
        //for horizontal lines
         line(20,380,580,380);
        line(20,20,580,20);

        //for pipes
    line(76,380,76,260);
    line(76,20,76,80);

    line(132,380,132,220);
    line(132,20,132,90);

    line(188,380,188,250);
    line(188,20,188,90);

    line(244,380,244,330);
    line(244,20,244,170);

    line(300,380,300,230);
    line(300,20,300,140);

     line(356,380,356,280);
    line(356,20,356,170);

    line(412,380,412,230);
    line(412,20,412,110);

    line(468,380,468,320);
    line(468,20,468,180);

     line(524,380,524,280);
    line(524,20,524,110);




        int flag=0;
        if(kbhit())
        {
            char b = getch();
            flag =1;
        }
        if(flag)
        {
            x+=4;
            j-=20;
            if(j==20) break;
            circle(x,j,10);
            delay(150);
            cleardevice();
            flag=0;
        }
        x+=4;
        j+=6;
        if(j==380) break;
        circle(x,j,10);
        delay(120);
        cleardevice();
    }
    closegraph();
}


