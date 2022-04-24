#include <iostream>
#include<windows.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<windowsx.h>
#include<vector>
#include<math.h>
#define INFINITY 9999
using namespace std;
void mainmenu();
struct kota
{
    string kota;
    int x;
    int y;
};
void listkota()
{
    cleardevice();
    struct kota kt1,kt2,kt3,kt4,kt5,kt6;
    kt1.kota = "A";
    kt1.x = 2;
    kt1.y = 1;

    kt2.kota = "B";
    kt2.x = 2;
    kt2.y = 4;

    kt3.kota = "C";
    kt3.x = 3;
    kt3.y = 6;

    kt4.kota = "D";
    kt4.x = 4;
    kt4.y = 2;

    kt5.kota = "E";
    kt5.x = 5;
    kt5.y = 5;

    kt6.kota = "F";
    kt6.x = 6;
    kt6.y = 3;

    cout<<"----------------------Daftar Koordinat Kota-------------------"<<endl;
    cout<<endl;
    cout<<"                             "<<kt1.kota<<","<<kt1.x<<","<<kt1.y<<endl;
    cout<<"                             "<<kt2.kota<<","<<kt2.x<<","<<kt2.y<<endl;
    cout<<"                             "<<kt3.kota<<","<<kt3.x<<","<<kt3.y<<endl;
    cout<<"                             "<<kt4.kota<<","<<kt4.x<<","<<kt4.y<<endl;
    cout<<"                             "<<kt5.kota<<","<<kt5.x<<","<<kt5.y<<endl;
    cout<<"                             "<<kt6.kota<<","<<kt6.x<<","<<kt6.y<<endl;

}
void gambar(float xp,float yp,float sc)
{
    float x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6;
    x1=2;y1=2;
    x2=2;y2=4;
    x3=3;y3=6;
    x4=4;y4=1;
    x5=5;y5=5;
    x6=6;y6=3;

    setcolor(RED);
    line(x1*sc+xp,-y1*sc+yp,x2*sc+xp,-y2*sc+yp);
    line(x1*sc+xp,-y1*sc+yp,x4*sc+xp,-y4*sc+yp);
    line(x1*sc+xp,-y1*sc+yp,x6*sc+xp,-y6*sc+yp);

    setcolor(WHITE);
    outtextxy(1,2,"A");
    for(int i=0;i<10;i++)
    circle(x1*sc+xp,-y1*sc+yp,i);


    setcolor(RED);
    line(x2*sc+xp,-y2*sc+yp,x1*sc+xp,-y1*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x3*sc+xp,-y3*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x4*sc+xp,-y4*sc+yp);
    line(x2*sc+xp,-y2*sc+yp,x5*sc+xp,-y5*sc+yp);


    setcolor(CYAN);
    outtextxy(1,100,"B");
    for(int i=0;i<10;i++)
    circle(x2*sc+xp,-y2*sc+yp,i);

    setcolor(RED);

    line(x3*sc+xp,-y3*sc+yp,x2*sc+xp,-y2*sc+yp);
    line(x3*sc+xp,-y3*sc+yp,x5*sc+xp,-y5*sc+yp);


    setcolor(GREEN);
    outtextxy(1,200,"C");
    for(int i=0;i<10;i++)
    circle(x3*sc+xp,-y3*sc+yp,i);

    setcolor(RED);
    line(x4*sc+xp,-y4*sc+yp,x1*sc+xp,-y1*sc+yp);
    line(x4*sc+xp,-y4*sc+yp,x2*sc+xp,-y2*sc+yp);
    line(x4*sc+xp,-y4*sc+yp,x5*sc+xp,-y5*sc+yp);
    line(x4*sc+xp,-y4*sc+yp,x6*sc+xp,-y6*sc+yp);

    setcolor(BROWN);
    outtextxy(1,300,"D");
    for(int i=0;i<10;i++)
    circle(x4*sc+xp,-y4*sc+yp,i);

    setcolor(RED);

    line(x5*sc+xp,-y5*sc+yp,x2*sc+xp,-y2*sc+yp);
    line(x5*sc+xp,-y5*sc+yp,x3*sc+xp,-y3*sc+yp);
    line(x5*sc+xp,-y5*sc+yp,x4*sc+xp,-y4*sc+yp);
    line(x5*sc+xp,-y5*sc+yp,x6*sc+xp,-y6*sc+yp);

    setcolor(MAGENTA);
    outtextxy(1,400,"E");
    for(int i=0;i<10;i++)
    circle(x5*sc+xp,-y5*sc+yp,i);

    setcolor(RED);
    line(x6*sc+xp,-y6*sc+yp,x1*sc+xp,-y1*sc+yp);
    line(x6*sc+xp,-y6*sc+yp,x4*sc+xp,-y4*sc+yp);
    line(x6*sc+xp,-y6*sc+yp,x5*sc+xp,-y5*sc+yp);

    setcolor(YELLOW);
    outtextxy(1,500,"F");
    for(int i=0;i<10;i++)
    circle(x6*sc+xp,-y6*sc+yp,i);
}
void grafis()
{
    int page =0;
    cleardevice();
    setactivepage(page);
	setvisualpage(page);
	while(1)
	{
    setactivepage(page);
    setvisualpage(page);

    float xp,yp,xa,ya;
    xp=460;yp=1080;
    gambar(xp,yp,100);
    if(GetAsyncKeyState(27)<0){
            cleardevice();
            clearmouseclick(WM_LBUTTONDOWN);
            return mainmenu();
        }
    }
    page=1-page;
    delay(1);
}
void Credits()
{
        int page =0;
        setactivepage(page);
        setvisualpage(page);
        cleardevice();
        while(1)
        {
        setactivepage(page);
        setvisualpage(page);
        setcolor(YELLOW);
        settextstyle(8,0,1);
        outtextxy(100,200,"DIJKSTRA");
        outtextxy(100,250,"Komang Alit Narayana / 5024201066");
        outtextxy(100,275,"Press Escape to return");
        if(GetAsyncKeyState(27)<0){
            cleardevice();
            clearmouseclick(WM_LBUTTONDOWN);
            return mainmenu();
        }
        page=1-page;
        delay(1);
        }
}
void dijkstra(double graph[10][10], int n, int awal,char asalkota,char hinggakota)
{
  double cost[10][10], jarak[10], pred[10];
  int kunjungkota[10], count, jarakterpendek, nextkota, i, j;

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (graph[i][j] == 0)
        cost[i][j] = INFINITY;
      else
        cost[i][j] = graph[i][j];

  for (i = 0; i < n; i++) {
    jarak[i] = cost[awal][i];
    pred[i] = awal;
    kunjungkota[i] = 0;
  }
  jarak[awal] = 0;
  kunjungkota[awal] = 1;
  count = 1;

  while (count < n - 1) {
    jarakterpendek = INFINITY;

    for (i = 0; i < n; i++)
      if (jarak[i] < jarakterpendek && !kunjungkota[i]) {
        jarakterpendek = jarak[i];
        nextkota = i;
      }

    kunjungkota[nextkota] = 1;
    for (i = 0; i < n; i++)
      if (!kunjungkota[i])
        if (jarakterpendek + cost[nextkota][i] < jarak[i])
        {
          jarak[i] = jarakterpendek + cost[nextkota][i];
            if(cost[nextkota][i]==graph[0][1])
            {
                printf("A ------> B");
            }
            if(cost[nextkota][i]==graph[0][3])
            {
                printf("A ------> D");
            }
            if(cost[nextkota][i]==graph[0][5])
            {
                printf("A ------> F");
            }
            if(cost[nextkota][i]==graph[1][0])
            {
                printf("B ------> A");
            }
            if(cost[nextkota][i]==graph[1][2])
            {
                printf("B ------> C");
            }
            if(cost[nextkota][i]==graph[1][3])
            {
                printf("B ------> D");
            }
            if(cost[nextkota][i]==graph[1][4])
            {
                printf("B ------> E");
            }
            if(cost[nextkota][i]==graph[2][1])
            {
                printf("C ------> B");
            }
            if(cost[nextkota][i]==graph[2][4])
            {
                printf(" C ------> E");
            }
            if(cost[nextkota][i]==graph[3][1])
            {
                printf(" D ------> B");
            }
            if(cost[nextkota][i]==graph[3][4])
            {
                printf(" D ------> E");
            }
            if(cost[nextkota][i]==graph[3][5])
            {
                printf(" D ------> F");
            }
            if(cost[nextkota][i]==graph[4][1])
            {
                printf(" E ------> B");
            }
            if(cost[nextkota][i]==graph[4][2])
            {
                printf(" E ------> C");
            }
            if(cost[nextkota][i]==graph[4][3])
            {
                printf(" E ------> D");
            }
            if(cost[nextkota][i]==graph[4][5])
            {
                printf(" E ------> F");
            }
            if(cost[nextkota][i]==graph[5][0])
            {
                printf(" F ------> A");
            }
            if(cost[nextkota][i]==graph[5][3])
            {
                printf(" F ------> D");
            }
            if(cost[nextkota][i]==graph[5][4])
            {
                printf(" F ------> E");
            }
          pred[i] = nextkota;
        }
    count++;
  }
    printf("\njarak dari %c ke %c : %lf",asalkota,hinggakota,jarak[hinggakota-'A']);
  }
double carijarak(double x1 , double x2 , double y1 , double y2)
{
    double jarak = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return jarak;
}
void carijalan()
{
    int page =0;
    cleardevice();
    int jarak;
    char asalkota;
    char hinggakota;
    struct kota kt1,kt2,kt3,kt4,kt5,kt6;
    double AB,AC,AD,AE,AF,BC,BD,BE,BF,CD,CE,CF,DE,DF,EF;

    kt1.kota = "A";
    kt1.x = 2;
    kt1.y = 1;
    kt2.kota = "B";
    kt2.x = 2;
    kt2.y = 4;
    kt3.kota = "C";
    kt3.x = 3;
    kt3.y = 6;
    kt4.kota = "D";
    kt4.x = 4;
    kt4.y = 2;
    kt5.kota = "E";
    kt5.x = 5;
    kt5.y = 5;
    kt6.kota = "F";
    kt6.x = 6;
    kt6.y = 3;

    AB=carijarak(kt1.x,kt2.x,kt1.y,kt2.y);
    AD=carijarak(kt1.x,kt4.x,kt1.y,kt4.y);
    AF=carijarak(kt1.x,kt6.x,kt1.y,kt6.y);

    BC=carijarak(kt2.x,kt3.x,kt2.y,kt3.y);
    BD=carijarak(kt2.x,kt4.x,kt2.y,kt4.y);
    BE=carijarak(kt2.x,kt5.x,kt2.y,kt5.y);

    CE=carijarak(kt3.x,kt5.x,kt3.y,kt5.y);
    CF=carijarak(kt3.x,kt6.x,kt3.y,kt6.y);

    DE=carijarak(kt4.x,kt5.x,kt4.y,kt5.y);
    DF=carijarak(kt4.x,kt6.x,kt4.y,kt6.y);

    EF=carijarak(kt5.x,kt6.x,kt5.y,kt6.y);

    double graph[10][10];
    graph[0][0]=0;
    graph[0][1]=AB;
    graph[0][3]=AD;
    graph[0][5]=AF;

    graph[1][0]=AB;
    graph[1][1]=0;
    graph[1][2]=BC;
    graph[1][3]=BD;
    graph[1][4]=BE;

    graph[2][1]=BC;
    graph[2][2]=0;
    graph[2][4]=CE;

    graph[3][0]=AD;
    graph[3][1]=BD;
    graph[3][3]=0;
    graph[3][4]=DE;
    graph[3][5]=DF;

    graph[4][1]=BE;
    graph[4][2]=CE;
    graph[4][3]=DE;
    graph[4][4]=0;
    graph[4][5]=EF;

    graph[5][0]=AF;
    graph[5][3]=DF;
    graph[5][4]=EF;
    graph[5][5]=0;

    int n,u;
    n=6;

    printf("Masukan Kota Asal dan Tujuan");
    printf("\n\nMasukan Kota Asal :");
    scanf(" %c",&asalkota);
    getchar();
    printf("Hingga Kota :");
    scanf(" %c",&hinggakota);
    getchar();
    u=asalkota-'A';//ascii table
    dijkstra(graph,n,u,asalkota,hinggakota);//buat manggil rumus dijkstra

}

void mainmenu ()
{
    int xm,ym,page=0;
    setactivepage(page);
    setvisualpage(page);
    while (1)
    {
        xm=mousex();
        ym=mousey();
      setcolor(YELLOW);
      rectangle(750,200,1200,400);
      rectangle(750,450,1200,650);
      rectangle(550,450,100,650);//carijalan
      rectangle(1800,450,1400,650);//pembuat
      rectangle(750,700,1200,900);

    //grafis
    if((ym>200)&&(ym<400)&&(xm>750)&&(xm<1200))
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            cleardevice();
            grafis();
            clearmouseclick((WM_LBUTTONDOWN));
            break;
        }
    }
    //list kota
    if((ym>450)&&(ym<650)&&(xm>750)&&(xm<1200))
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            cleardevice();
            listkota();
            clearmouseclick((WM_LBUTTONDOWN));
            break;
        }
    }
    //cari jalan
    if((ym>450)&&(ym<650)&&(xm>100)&&(xm<550))
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            cleardevice();
            carijalan();
            clearmouseclick((WM_LBUTTONDOWN));
            break;
        }
    }
    //Pembuat
    if((ym>450)&&(ym<650)&&(xm>1200)&&(xm<1800))
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            cleardevice();
            Credits();
            clearmouseclick((WM_LBUTTONDOWN));
            break;
        }
    }
    //keluar
    if((ym>700)&&(ym<900)&&(xm>750)&&(xm<1200))
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            closegraph();
            exit(0);
            clearmouseclick((WM_LBUTTONDOWN));
            break;
        }
    }
    clearmouseclick((WM_LBUTTONDOWN));
    setcolor(YELLOW);
    settextstyle(8,0,6);
    outtextxy(890,280,"Grafis");
    outtextxy(845,520,"List Kota");
    outtextxy(175,520,"Cari jalan");
    outtextxy(1500,520,"Pembuat");
    outtextxy(915,765,"EXIT");
    page=1-page;
    delay(20);
    cleardevice();

    }
}
int main()
{
    initwindow(1920,1080);
    mainmenu();
    return 0;
}
