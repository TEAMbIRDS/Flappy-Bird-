#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
using namespace std;
int rands(int lower, int upper)
{


        int num = (rand() %
           (upper - lower + 1)) + lower;
        return num;

}
int main()
{

    int gdrive=DETECT,gmode;
      int l = 200, y = 200;

   initgraph(&gdrive, &gmode, NULL);
    setbkcolor(RED);

   settextstyle(3,0,6);
   outtextxy(l, y, "FLAPPY BIRDS ::::::::::: THE GAME");
    settextstyle(0,0,3);
    delay(1200);
    cleardevice();
     settextstyle(3,0,6);
    outtextxy(l, y, "GAME STARTING ...");
    delay(1200);
    cleardevice();
    settextstyle(3,0,6);

    outtextxy(l, y, "GAME STARTING ...");
    settextstyle(0,0,3);
    delay(1200);
    cleardevice();






   int j=100;
    int x=25;
    int f =0,overflag =0;



while(1){
        if(overflag ==1)
        {

            char b = getchar();
            if(b=='y')
            {
                overflag = 0;
                continue;
                outtextxy(l,y,"STARTING AGAIN");
                delay(1200);
                cleardevice();
                continue;
            }
            setcolor(CYAN);
            settextstyle(3,0,3);
            outtextxy(l, y, "GAME Terminated");
            overflag =0;
            delay(1200);
            break;
        }
    mb1=rnads(20,100);//up
    mb2=rnads(210,380);//low
    x=35;
    j=100;

    for(int i=0; i<15000; i+=3)
    {
        //for horizontal lines-+
        //if(j>=380 && j<=20)break;
        setcolor(YELLOW);
        line(20-i,380,10000-i,380);
        if(j+24>=380){

                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

        line(20-i,20,10000-i,20);
        if(j-24<=20 ){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }




   line(76-i,380,76-i,mb2);
    if(x+10  >=76-i && ( j>=260 && j<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    line(76-i,20,76-i,10+mb1);
    if(x+10  >=76-i && ( j>=20 && j<=100)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
   line(132-i,380,132-i,100+mb2);
   if(x+10  >=132-i && ( j>=220 && j<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    line(132-i,20,132-i,20+mb1);

    if(x+10  >=132-i && ( j>=20 && j<=90)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

    line(188-i,380,188-i,100+mb2);
    if(x+10  >=188-i && ( j>=200+mb2 && j<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    line(188-i,20,188-i,40+mb1);

    if(x+10  >=188-i && ( j>=20 && j<=110)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

    line(244-i,380,244-i,150+mb2);
    if(x+10  >=244-i && ( j>=330 && j<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    line(244-i,20,244-i,40+mb2);
     if(x+10  >=244-i && ( j>=20 && j<=130)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

    line(300-i,380,300-i,100+mb1);

     if(x+10  >=300-i && ( j>=230 && j<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    line(300-i,20,300-i,30+mb1);
    if(x+10  >=300-i && ( j>=20 && j<=90)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

     line(356-i,380,356-i,100+mb2);

     if(x+10  >=356-i && ( j>=280 && j<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    line(356-i,20,356-i,30+ mb1);
    if(x+10  >=356-i && ( j>=20 && j<=150)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

    line(412-i,380,412-i,90+mb2);
    if(x+10  >=412-i && ( j>=230 && j<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    line(412-i,20,412-i,100+mb1);
    if(x+10  >=412-i && ( j>=20 && j<=110)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

    line(468-i,380,468-i,140+mb1);
    if(x+10  >=468-i && ( j>=310 && j<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    line(468-i,20,468-i,20+mb1);
    if(x+10  >=468-i && ( j>=20 && j<=150)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

     line(524-i,380,524-i,280);
     if(x+10  >=524-i && ( j>=280 && j<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    line(524-i,20,524-i,110);

    if(x+10  >=524-i && ( j>=20 && j<=110)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

    line(580-i,380,580-i,230);

    if(x+10  >=580-i && ( j>=230 && j<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    line(580-i,20,580-i,80);

     if(x+10  >=580-i && ( j>=20 && j<=80)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

    line(636-i,380,636-i,100+mb2);

     if(x+10  >=636-i && ( j>=280 && j<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
   line(636-i,20,636-i,100);

   if(x+10  >=636-i && ( j>=20 && j<=100)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

    line(692-i,380,692-i,120+mb2);

    if(x+10  >=692-i && ( j>=310 && j<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    line(692-i,20,692-i,100+mb1);

    if(x+10  >=692-i && ( j>=20 && j<=130)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }


    line(748-i,20,748-i,20+mb1);

     if(x+10  >=748-i && ( j>=20 && j<=70)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

    line(804-i,380,804-i,100+mb2);

     if(x+10  >=804-i && ( j>=230 && j<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    line(804-i,20,804-i,27+mb1);

    if(x+10  >=804-i && ( j>=20 && j<=90)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    */
    line(860-i,380,860-i,100+mb2);

    if(x+10  >=860-i && ( j+10>=220 && j+10<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }
    line(860-i,20,860-i,30+mb1);

    if(x+10  >=860-i && ( j+10>=20 && j+10<=80)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

    line(916-i,380,916-i,130+mb2);

    if(x+10  >=916-i && ( j+10>=300 && j+10<=380)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }

    line(916-i,20,916-i,120+mb1);

    if(x+10  >=916-i && ( j+10>=20 && j+10<=120)){
                cleardevice();
             outtextxy(l, y, "Game over!");
             overflag = 1;
                delay(1200);
                break;
        }





        int flag=0;


        if(kbhit())
        {
            char b = getch();
            flag =1;
        }


        if(flag)
        {
            x+=1;

            j-=20;

            //if(j>=380 && j<=20)break;

            circle(x,j,10);
            delay(150);

            cleardevice();


            flag=0;
        }


        x+=1;
        j+=6;




        //if(j>=380 && j<=20)break;

        circle(x,j,10);

        delay(120);

        cleardevice();

    }


}

    closegraph();

}
