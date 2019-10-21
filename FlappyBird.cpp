#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include <bits/stdc++.h>
#define wincall   initwindow(1000,390,"FLAPPY BIRDS")
using namespace std;

//necessary variable declarations
int score=0;
int bdx1,bdx2;

int l = 300, y = 200,s=0;

int j=200;
int x=25;

int co1=19,co2=19;

int overflag =0;
vector<int> sc;
//variable declarartions end
void showscore()
{
    settextstyle(3,0,6);
          char arr[50];
          if(!score)
          {
            score=score%1000;
            sc.push_back(score);
        }
        sc.push_back(score);
        sort(sc.rbegin(),sc.rend());
     sprintf(arr,"score : %d",sc[0]);
     outtextxy(100,200,arr);

     delay(1200);
     //cleardevice();
}
void startpage()
{
    int f =0;
    setbkcolor(RED);
    settextstyle(3,0,6);
    outtextxy(l, y, "FLAPPY BIRD");
    setbkcolor(WHITE);
    delay(1200);
    cleardevice();
}

int rands(int lower, int upper)
{


        int num = (rand() %
           (upper - lower + 1)) + lower;
        return num;

}
bool check()
{
      char m;
      cleardevice();
      settextstyle(6,0,3);
      outtextxy(100,200,"Press Any Key to play");
      delay(1200);
      cleardevice();
             if(kbhit()){
             m=getch();
             overflag=0;
             return 0;
            }
            return 1;
}
void img(int j)
{


    readimagefile("flappy.jpg",50,50+j,100,100+j);
    co1=50+j;
    co2=100+j;
}
bool gameover()
{
     outtextxy(200,200,"NOOO! GAME OVER");
     delay(1200);
     cleardevice();
     showscore();
        delay(1200);
        cleardevice();
    int v=check();
     if(v)
     {
          setbkcolor(RED);
    settextstyle(3,0,6);
    delay(100);
    outtextxy(l, y, "Return to desktop");
    delay(1200);
        return 0;
    }
    j=200;
     x=25;
     co1=19;
     co2=19;
    return 1;

}
void pipes(int x1,int x2,int r1,int r2,int i,int mb1,int mb2)
{

    line(x1-i,20,x1-i,r1+mb1);
    line(x2-i,20,x2-i,r1+mb1);
    line(x1-i,r1+mb1,x2-i,r1+mb1);
    line(x1-i,380,x1-i,r2+mb2);
    line(x2-i,380,x2-i,r2+mb2);
    line(x1-i,r2+mb2,x2-i,r2+mb2);
    int  bdx1=x1-i;
    int  bdx2=x2-i;

    if(bdx1>=50 && bdx2 <=100)
    {
        score++;
       if(co1<=r1+mb1 || co2>=r2+mb2)
       {
           settextstyle(6,0,3);
           cleardevice();
           overflag=1;
           cleardevice();

       }

    }


}
/*void showscore()
{
    settextstyle(3,0,6);
          char arr[50];
     sprintf(arr,"score : %d",score);
     outtextxy(100,200,arr);

     delay(1200);
     cleardevice();
}*/


void birdfly()
{
    if(kbhit())
    {
        char b= getch();
         j-=20;

           img(j);
            delay(100);
            cleardevice();
    }else{
    j+=6;
    img(j);
    delay(100);
    cleardevice();
    }

}


void play()
{

wincall;
   //initgraph(&gdrive, &gmode, NULL);*/

    startpage();
int i=0;
int pq=0;
while(1){
    setbkcolor(WHITE);

    int x;



     int mb1=rands(80,150);//up
    int mb2=rands(220,300);//low



    while(1)
    {
        setactivepage(pq);
        birdfly();
        i+=5;
        setcolor(BLACK);
        line(20,20,10000,20);
        if(co2<=20)
        {

            overflag = 1;
            cleardevice();
            return;
        }
       setcolor(BLACK);
        line(20,380,10000,380);
        if(co1>=335){

            overflag = 1;
            cleardevice();
            return;
        }


        pipes(100,120,50,60,i,mb1,mb2);
         if(overflag)return;




        pipes(150,170,30,15,i,mb1,mb2);
         if(overflag)return;

        pipes(240,260,30,0,i,mb1,mb2);
         if(overflag)return;

        pipes(330,350,50,-6,i,mb1,mb2);
         if(overflag)return;

          pipes(420,440,40,-12,i,mb1,mb2);
         if(overflag)return;


        pipes(510,530,10,30,i,mb1,mb2);
         if(overflag)return;

         pipes(600,620,40,9,i,mb1,mb2);
         if(overflag)return;

         pipes(690,710,8,5,i,mb1,mb2);
         if(overflag)return;

         pipes(780,800,90,35,i,mb1,mb2);
         if(overflag)return;

          pipes(870,890,80,10,i,mb1,mb2);
         if(overflag)return;

          pipes(960,980,25,35,i,mb1,mb2);
         if(overflag)return;

          pipes(1050,1070,30,-15,i,mb1,mb2);
         if(overflag)return;

          pipes(1140,1160,50,5,i,mb1,mb2);
         if(overflag)return;

          pipes(1230,1250,75,15,i,mb1,mb2);
         if(overflag)return;

          pipes(1320,1340,5,35,i,mb1,mb2);
         if(overflag)return;

          pipes(1410,1430,50,6,i,mb1,mb2);
         if(overflag)return;



             pipes(1500,1520,50,-16,i,mb1,mb2);
         if(overflag)return;




        pipes(1590,1610,30,6,i,mb1,mb2);
         if(overflag)return;

        pipes(1680,1700,30,0,i,mb1,mb2);
         if(overflag)return;

        pipes(1770,1790,50,-6,i,mb1,mb2);
         if(overflag)return;

          pipes(1860,1880,40,-12,i,mb1,mb2);
         if(overflag)return;


        pipes(1950,1970,10,30,i,mb1,mb2);
         if(overflag)return;

         pipes(2040,2060,40,9,i,mb1,mb2);
         if(overflag)return;

         pipes(2130,2150,8,5,i,mb1,mb2);
         if(overflag)return;

         pipes(2220,2240,90,35,i,mb1,mb2);
         if(overflag)return;

          pipes(2310,2330,80,10,i,mb1,mb2);
         if(overflag)return;

          pipes(2400,2420,25,35,i,mb1,mb2);
         if(overflag)return;

          pipes(2490,2510,30,-15,i,mb1,mb2);
         if(overflag)return;

          pipes(2580,2600,50,5,i,mb1,mb2);
         if(overflag)return;

          pipes(2670,2690,75,15,i,mb1,mb2);
         if(overflag)return;

          pipes(2760,2780,5,35,i,mb1,mb2);
         if(overflag)return;

          pipes(2850,2870,50,6,i,mb1,mb2);
         if(overflag)return;



         pipes(2940,2960,50,-6,i,mb1,mb2);
         if(overflag)return;




        pipes(3030,3050,30,6,i,mb1,mb2);
         if(overflag)return;

        pipes(3120,3140,30,0,i,mb1,mb2);
         if(overflag)return;

        pipes(3210,3230,50,-6,i,mb1,mb2);
         if(overflag)return;

          pipes(3300,3320,40,-12,i,mb1,mb2);
         if(overflag)return;


        pipes(3390,3410,10,30,i,mb1,mb2);
         if(overflag)return;

         pipes(3480,3500,40,9,i,mb1,mb2);
         if(overflag)return;

         pipes(3570,3590,8,5,i,mb1,mb2);
         if(overflag)return;

         pipes(3660,3680,90,35,i,mb1,mb2);
         if(overflag)return;

          pipes(3750,3770,80,10,i,mb1,mb2);
         if(overflag)return;

          pipes(3840,3860,25,35,i,mb1,mb2);
         if(overflag)return;

          pipes(3930,3950,30,-15,i,mb1,mb2);
         if(overflag)return;

          pipes(4020,4040,50,5,i,mb1,mb2);
         if(overflag)return;

          pipes(4110,4130,75,15,i,mb1,mb2);
         if(overflag)return;

          pipes(4200,4220,5,35,i,mb1,mb2);
         if(overflag)return;

          pipes(4290,4310,50,-6,i,mb1,mb2);
         if(overflag)return;


        pipes(4380,4400,50,6,i,mb1,mb2);
         if(overflag)return;




        pipes(4470,4490,30,6,i,mb1,mb2);
         if(overflag)return;

        pipes(4560,4580,30,0,i,mb1,mb2);
         if(overflag)return;

        pipes(4650,4670,50,-6,i,mb1,mb2);
         if(overflag)return;

          pipes(4740,4760,40,-12,i,mb1,mb2);
         if(overflag)return;


        pipes(4830,4850,10,30,i,mb1,mb2);
         if(overflag)return;

         pipes(600,620,40,9,i,mb1,mb2);
         if(overflag)return;

         pipes(4920,4940,8,5,i,mb1,mb2);
         if(overflag)return;

         pipes(5010,5030,90,35,i,mb1,mb2);
         if(overflag)return;

          pipes(5100,5120,80,10,i,mb1,mb2);
         if(overflag)return;

          pipes(5190,5210,25,35,i,mb1,mb2);
         if(overflag)return;

          pipes(5280,5300,30,-15,i,mb1,mb2);
         if(overflag)return;

          pipes(5370,5390,50,5,i,mb1,mb2);
         if(overflag)return;

          pipes(5460,5480,75,15,i,mb1,mb2);
         if(overflag)return;

          pipes(5550,5570,5,35,i,mb1,mb2);
         if(overflag)return;

          pipes(5640,5660,50,6,i,mb1,mb2);
         if(overflag)return;



             pipes(5730,5750,50,-10,i,mb1,mb2);
         if(overflag)return;




        pipes(5820,5840,30,6,i,mb1,mb2);
         if(overflag)return;

        pipes(5910,5930,30,0,i,mb1,mb2);
         if(overflag)return;

        pipes(6000,6020,50,-6,i,mb1,mb2);
         if(overflag)return;

          pipes(6090,6110,40,-12,i,mb1,mb2);
         if(overflag)return;


        pipes(6180,6200,10,30,i,mb1,mb2);
         if(overflag)return;

         pipes(6270,6290,40,9,i,mb1,mb2);
         if(overflag)return;

         pipes(6360,6380,8,5,i,mb1,mb2);
         if(overflag)return;

         pipes(6450,6470,90,35,i,mb1,mb2);
         if(overflag)return;

          pipes(6540,6560,80,10,i,mb1,mb2);
         if(overflag)return;

          pipes(6630,6650,25,35,i,mb1,mb2);
         if(overflag)return;

          pipes(6720,6740,30,-15,i,mb1,mb2);
         if(overflag)return;

          pipes(6810,6830,50,5,i,mb1,mb2);
         if(overflag)return;

          pipes(6900,6920,75,15,i,mb1,mb2);
         if(overflag)return;

          pipes(6990,7010,5,35,i,mb1,mb2);
         if(overflag)return;

          pipes(7080,7100,50,-6,i,mb1,mb2);
         if(overflag)return;

         pipes(7170,7190,50,0,i,mb1,mb2);
         if(overflag)return;




        pipes(7260,7280,30,6,i,mb1,mb2);
         if(overflag)return;

        pipes(7350,7370,30,0,i,mb1,mb2);
         if(overflag)return;

        pipes(7440,7460,50,-6,i,mb1,mb2);
         if(overflag)return;

          pipes(7530,7550,40,-12,i,mb1,mb2);
         if(overflag)return;


        pipes(7620,7640,10,30,i,mb1,mb2);
         if(overflag)return;

         pipes(7710,7730,40,9,i,mb1,mb2);
         if(overflag)return;

         pipes(7800,7820,8,5,i,mb1,mb2);
         if(overflag)return;

         pipes(7890,7910,90,35,i,mb1,mb2);
         if(overflag)return;

          pipes(7980,8000,80,10,i,mb1,mb2);
         if(overflag)return;

          pipes(8070,8090,25,35,i,mb1,mb2);
         if(overflag)return;

          pipes(8160,8180,30,-15,i,mb1,mb2);
         if(overflag)return;

          pipes(8250,8270,50,5,i,mb1,mb2);
         if(overflag)return;

          pipes(8340,8360,75,15,i,mb1,mb2);
         if(overflag)return;

          pipes(8430,8450,5,35,i,mb1,mb2);
         if(overflag)return;

          pipes(8520,8540,50,6,i,mb1,mb2);
         if(overflag)return;








}
 setvisualpage(pq);
 //delay(100);//check this carfully
 cleardevice();
 if(pq==1)pq=0;
 else pq =0;
}
}



int main()
{



   while(1){

       play();
       if(overflag)
       {
           if(gameover())
            {
                continue;
            }
            else{
                break;
            }
       }

   }


}



