//assign 8 transformation
#include <graphics.h>
#include <stdlib.h>
#include<dos.h>
#include <iostream.h>
#include<conio.h>
#include<math.h>
//using namespace std;
int main()
{
	    int gm;
	    int gd=DETECT;
	    int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,c;
	    int sx,sy,xt,yt,r;
	    float t;
	    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	    cout<<"\t Program for basic translation";
	   cout<<"\n\t Enter the points of triangle";
	    setcolor(1);
	   cin>>x1>>y1>>x2>>y2>>x3>>y3;
	    line(x1,y1,x2,y2);
	    line(x2,y2,x3,y3);
	    line(x3,y3,x1,y1);


	    cout<<"\n 1.Translation\n 2.Rotation\n 3.Scalling\n 4.exit";
	   cout<<"Enter your choice:";

	    cin>>c;
	    switch(c)
	    {
			case 1:
				    cout<<"\n Enter the translation factor";
				   cin>>xt>>yt;
				    nx1=x1+xt;
				    ny1=y1+yt;
				    nx2=x2+xt;
				    ny2=y2+yt;
				    nx3=x3+xt;
				    ny3=y3+yt;
				    line(nx1,ny1,nx2,ny2);
				    line(nx2,ny2,nx3,ny3);
				    line(nx3,ny3,nx1,ny1);
				    getch();
				    break;

			case 2:
				    cout<<"\n Enter the angle of rotation";
				    cin>>r;

				    t=3.14*r/180;
				    nx1=abs(x1*cos(t)-y1*sin(t));
				    ny1=abs(x1*sin(t)+y1*cos(t));
				    nx2=abs(x2*cos(t)-y2*sin(t));
				    ny2=abs(x2*sin(t)+y2*cos(t));
				    nx3=abs(x3*cos(t)-y3*sin(t));
				    ny3=abs(x3*sin(t)+y3*cos(t));
				    line(nx1,ny1,nx2,ny2);
				    line(nx2,ny2,nx3,ny3);
				    line(nx3,ny3,nx1,ny1);
				    getch();
				    break;

                        case 3:
                                 cout<<"\n Enter the scalling factor";
                                    cin>>sx>>sy;
				   // cleardevice();
				    nx1=x1*sx;
				    ny1=y1*sy;
                                    nx2=x2*sx;
                                    ny2=y2*sy;
                                    nx3=x3*sx;
                                    ny3=y3*sy;
                                    line(nx1,ny1,nx2,ny2);
                                    line(nx2,ny2,nx3,ny3);
                                    line(nx3,ny3,nx1,ny1);
                                    getch();

                         }
   getch();
     
    closegraph();
   return 0;                               
   }
