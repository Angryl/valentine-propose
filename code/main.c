
//Program by: Rudra Pratap Singh

#include <conio.h>
#include <stdio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
void last();    // complete animation function
void message(); //message function for wish
void main()
{
     int gd = DETECT, gm;
     system("cls"); //clear screen
     initgraph(&gd, &gm, "c:\\turboc3\\bgi");
     // message();
     last();
     message();
     getch();
     closegraph();
}

void last()
{
     //declaration of data variables
     int a;
     int d, i;
     int c = 200, s = 190, f = 210, t, r, v = 180, b = 210;
     int m, n;
     int speed = 8;
     int arr[] = {400, 300, 410, 330, 410, 330, 390, 330, 390, 330, 400, 300};
     //main animation loop start here.
     for (a = 1; a <= 17 && !kbhit(); a++) //Khbit() function
     {
          t = s, r = f;
          m = v, n = b;
          for (i = 300; i <= 315 && !kbhit(); i++)
          {
               gotoxy(29, 2);
               printf("     ===Angryl===");
               line(1, 350, 630, 350);
               ellipse(400, 273, -10, 200, 15, 20);
               ellipse(401, 273, -10, 200, 15, 20);
               ellipse(405, 268, 0, 360, 2, 3);
               ellipse(395, 268, 0, 360, 2, 3);
               putpixel(395, 269, 15); //girl eye pupil
               putpixel(405, 269, 15); //girl eye pupil
               //line(398,274,403,274);
               //line(399,274,404,274);

               if (a == 17)
               {                                //setcolor(RED);
                                                // delay(200);
                    arc(398, 274, 180, 360, 1); //smile lips
                    arc(398, 275, 180, 360, 1); //smile lips
                    //arc(400,276,180,360,1);//smile lips
                    setcolor(WHITE);
               }
               else
               {
                    line(398, 274, 403, 274);
                    line(399, 274, 404, 274);
                    line(414, 279, 407, 279); //lips
               }

               line(415, 279, 408, 279);
               line(386, 279, 394, 279);
               line(387, 279, 395, 279);
               circle(400, 270, 10); //girl face
               circle(401, 270, 10);
               line(400, 300, 400, 280);
               line(401, 300, 401, 280);

               //girl arms

               if (a == 17)
               {
                    delay(200);
                    //line(400,280,380,288);
                    //line(401,280,380,288);
                    //line(380,290,400,288);
                    // line(380,290,401,288);
                    line(400, 280, 390, 290);
                    line(401, 280, 391, 290);
                    line(390, 290, 385, 285);
                    line(391, 290, 385, 285);
                    //girl arm end
               }
               else
               {
                    line(400, 280, 410, 290);
                    line(401, 280, 411, 290);
                    line(410, 290, 400, 300);
                    line(411, 290, 401, 300);
                    line(400, 280, 390, 290);
                    line(401, 280, 391, 290);
                    line(390, 290, 400, 300);
                    line(391, 290, 401, 300);
               }
               //floodfill(arr[1],arr[2],RED);

               fillpoly(6, arr); //skirt
               line(395, 330, 395, 350);
               line(396, 330, 396, 350);
               line(405, 330, 405, 350);
               line(406, 330, 406, 350);
               line(1, 351, 630, 351);
               
               //	if(a!=17)
               //	{
               //boy had start
               circle(c, 270, 10);
               circle(c + 1, 270, 10);
               ellipse(c + 5, 269, 0, 360, 2, 3); //eye

               putpixel(c + 5, 269, 15); //eye inside part
               //boy head end
               line(c + 3, 276, c + 8, 276);
               line(c, 280, c, 320);
               line(c + 1, 280, c + 1, 320);
               line(c, 280, n, 298);
               line(c + 1, 280, n + 1, 298);
               line(n, 298, (b + 10), 292);
               line(n + 1, 298, (b + 11), 292);
               // /*
               //rose
               setcolor(RED);
               circle(n + 10, 281, 2);
               circle(n + 11, 281, 2);
               circle(n + 10, 278, 2);
               circle(n + 11, 278, 2);
               circle(n + 15, 280, 2);
               circle(n + 16, 280, 2);
               circle(n + 5, 280, 2);
               circle(n + 6, 280, 2);
               // */
               setcolor(WHITE);
               line(n + 10, 292, n + 10, 285);
               line(n + 11, 292, n + 11, 285);
               line(c + 1, 320, r -= 1, 350);
               line(c, 320, t += 1, 350);
               // }
               /*
     else{
	//boy knee proposal positon starts here
     //boy had start
     circle(c,290,10);
     circle(c+1,290,10);
     ellipse(c+5,289,0,360,2,3);   //eye
     putpixel(c+5,289,15);        //eye inside part
     //boy head end
     line(c+3,266,c+8,276);
     line(c,270,c,320);
     line(c+1,270,c+1,320);
     line(c,270,n,298);
     line(c+1,270,n+1,298);
     line(n,288,(b+10),292);
     line(n+1,288,(b+11),292);
     // /*
	//rose
    setcolor(RED);
     circle(n+30,291,2);
     circle(n+21,291,2);
     circle(n+20,298,2);
     circle(n+21,298,2);
     circle(n+25,290,2);
     circle(n+26,290,2);
     circle(n+15,290,2);
     circle(n+16,290,2);
    // */
               /*
    setcolor(WHITE);
     line(n+10,292,n+10,285);
     line(n+11,292,n+11,285);
     line(c+1,320,r-=1,350);
     line(c,320,t+=1,350);
     }//the knee position function ends here
      */
               delay(100);
               if (a == 17)
                    goto animation;
               cleardevice();
          }
          c += speed;
          s += speed, f += speed, v += speed, b += speed;
     }

animation:
{
     //ellipse(375,231,0,360,60,15);
     //ellipse(376,231,0,360,60,15);
     line(360, 245, 335, 260);
     line(361, 245, 336, 260);
     gotoxy(45, 15);
     setcolor(11);
     //outtextxy(337,227,"I LOVE YOU");
     gotoxy(337, 227);
     printf("I LOVE YOU");
     //fflush(stdout);
     gotoxy(45, 17);
     gotoxy(46, 17);
     printf("%c", 3);
     delay(1000);
     goto convo2;
     //fflush(stdout);
}

convo2:
{
     // convo 2
     //ellipse(375,231,0,360,70,15);
     //ellipse(376,231,0,360,70,15);
     line(360, 245, 335, 260);
     line(361, 245, 336, 260);
     gotoxy(45, 15);
     setcolor(13);
     //outtextxy(337,227,"Will");
     gotoxy(337, 227);
     printf("will you be my valentine ?");
     fflush(stdout);
     gotoxy(45, 17);
     gotoxy(46, 17);
     message();
     printf("%c", 3);
     //fflush(stdout);
}
}

void message()
{
     delay(1000);
     textcolor(RED);
     gotoxy(22, 9);
     printf("HAPPY");
     //outtextxy(22,9,"HAPPy");

     gotoxy(27, 11);
     printf("VALENTINE");
     //outtextxy(337,227,"VALENTINE");

     gotoxy(23, 12);
     printf("DAY\n");
     //outtextxy(337,227,"DAY");

     gotoxy(27, 13);
     textcolor(12);
     //outtextxy(337,227,"");

     printf("%c", 3);
     printf("%c", 3);

     textcolor(3);
     //printf("code by: rudra pratap singh");
     textcolor(12);
     printf("%c", 3);
     printf("%c", 3);
}
