#include <iostream>
#include<windows.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<windowsx.h>
#include<vector>
#include<math.h>
#include<limits.h>
#ifndef bool
#define bool  char
#define false 0
#define true  1
#endif

/* number of vertices in graph */
#define VERTEX 6
#define MAX_DOUBLE 999999

using namespace std;
void mainmenu();
struct kota
{
    string nama;
    int x;
    int y;
};
int min_jarak(const double *jarak, const bool *spt_set)
{
    double min = MAX_DOUBLE, min_indeks = 0;

    for (int i = 1; i < VERTEX; i++)
        if (spt_set[i] == false && min > jarak[i]) {
            min     = jarak[i];
            min_indeks = i;
        }

    return min_indeks;
}

/* print path from source v using parent array */
void print_path(const int *parent, int v)
{
    if (parent[v] == -1) {
        printf("%c ", 'A'+v);
        return ;
    }
    print_path(parent, parent[v]);
    printf("%c ", 'A'+v);
}
void print_spt(const double *jarak, int mulai, const int *parent, int tujuan)
{
    printf("Jarak terpendek dari Kota %c ke Kota %c adalah : %lf\n", 'A'+mulai, 'A'+tujuan, jarak[tujuan]);
    print_path(parent, tujuan);
}
void listkota()
{
    cleardevice();
    struct kota kt1,kt2,kt3,kt4,kt5,kt6;
    kt1.nama = "A";
    kt1.x = 2;
    kt1.y = 1;

    kt2.nama= "B";
    kt2.x = 2;
    kt2.y = 4;

    kt3.nama = "C";
    kt3.x = 3;
    kt3.y = 6;

    kt4.nama = "D";
    kt4.x = 4;
    kt4.y = 2;

    kt5.nama = "E";
    kt5.x = 5;
    kt5.y = 5;

    kt6.nama = "F";
    kt6.x = 6;
    kt6.y = 3;

    cout<<"----------------------Daftar Koordinat Kota-------------------"<<endl;
    cout<<endl;
    cout<<"                             "<<kt1.nama<<","<<kt1.x<<","<<kt1.y<<endl;
    cout<<"                             "<<kt2.nama<<","<<kt2.x<<","<<kt2.y<<endl;
    cout<<"                             "<<kt3.nama<<","<<kt3.x<<","<<kt3.y<<endl;
    cout<<"                             "<<kt4.nama<<","<<kt4.x<<","<<kt4.y<<endl;
    cout<<"                             "<<kt5.nama<<","<<kt5.x<<","<<kt5.y<<endl;
    cout<<"                             "<<kt6.nama<<","<<kt6.x<<","<<kt6.y<<endl;

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
void dijkstra(const double graph[VERTEX][VERTEX], int mulai, int tujuan)
{
    /* jarak[] will hold the shortest jarakance sourced mulai */
    double jarak[VERTEX];
    /* Shortest Path Tree Set  true if a vertex in included in SPT
     *  or shortest jarakance from mulai to i is finalized
     * */
    bool spt_set[VERTEX];
    /* parent array to store shortest path tree */
    int parent[VERTEX];
    parent[mulai]  = -1;            /* assuming source have no parent */

    for (int i = 0; i < VERTEX; i++) {
        jarak[i]    = MAX_DOUBLE;       /* unreachable */
        spt_set[i] = false;         /* not in SPT set */
    }

    /* jarakance of source vertex to itself always 0 */
    jarak[mulai] = 0;

    /* find shortest path for all vertices */
    for (int i = 0; i < VERTEX-1; i++) {
        /* pick minimum vertex of those vertices not processed
         *  u is always equal to mulai in the first call of min_jarak()
         *  */
        int u = min_jarak(jarak, spt_set);

        /* mark the picked vertex as processed */
        spt_set[u] = true;

        /* if current unprocessed vertex is unreachable
         *  for those disconnected vertex
         * */
        if (jarak[u] == MAX_DOUBLE) continue;

        /* update jarak[] of adjacent vertices of the picked vertex */
        for (int v = 0; v < VERTEX; v++)
            /* update jarak[v] only if
             *  1) there is a edge from u to v
             *  2) it's not in spt_set[]
             *  3) jarakance of path from mulai to v through u
             *    is smaller than current value of jarak[v]
             * */
            if (graph[u][v] && spt_set[v] == false &&
                    jarak[u] + graph[u][v] < jarak[v])
            {
                jarak[v]   = jarak[u] + graph[u][v];
                parent[v] = u;
            }
    }

    /* print the constructed jarakance array */
    print_spt(jarak, mulai, parent, tujuan);
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

    kt1.nama = "A";
    kt1.x = 2;
    kt1.y = 1;
    kt2.nama= "B";
    kt2.x = 2;
    kt2.y = 4;
    kt3.nama = "C";
    kt3.x = 3;
    kt3.y = 6;
    kt4.nama = "D";
    kt4.x = 4;
    kt4.y = 2;
    kt5.nama = "E";
    kt5.x = 5;
    kt5.y = 5;
    kt6.nama = "F";
    kt6.x = 6;
    kt6.y = 3;

    AB=carijarak(kt1.x,kt2.x,kt1.y,kt2.y);
    AC=0;
    AD=carijarak(kt1.x,kt4.x,kt1.y,kt4.y);
    AE=0;
    AF=carijarak(kt1.x,kt6.x,kt1.y,kt6.y);

    BC=carijarak(kt2.x,kt3.x,kt2.y,kt3.y);
    BD=carijarak(kt2.x,kt4.x,kt2.y,kt4.y);
    BE=carijarak(kt2.x,kt5.x,kt2.y,kt5.y);
    BF=0;

    CD=0;
    CE=carijarak(kt3.x,kt5.x,kt3.y,kt5.y);
    CF=0;

    DE=carijarak(kt4.x,kt5.x,kt4.y,kt5.y);
    DF=carijarak(kt4.x,kt6.x,kt4.y,kt6.y);

    EF=carijarak(kt5.x,kt6.x,kt5.y,kt6.y);



    double graph[VERTEX][VERTEX];
    graph[0][0]=0;
    graph[0][1]=AB;
    graph[0][2]=AC;
    graph[0][3]=AD;
    graph[0][4]=AE;
    graph[0][5]=AF;

    graph[1][0]=AB;
    graph[1][1]=0;
    graph[1][2]=BC;
    graph[1][3]=BD;
    graph[1][4]=BE;
    graph[1][5]=BF;

    graph[2][0]=AC;
    graph[2][1]=BC;
    graph[2][2]=0;
    graph[2][3]=CD;
    graph[2][4]=CE;
    graph[2][5]=CF;

    graph[3][0]=AD;
    graph[3][1]=BD;
    graph[3][2]=CD;
    graph[3][3]=0;
    graph[3][4]=DE;
    graph[3][5]=DF;

    graph[4][0]=AE;
    graph[4][1]=BE;
    graph[4][2]=CE;
    graph[4][3]=DE;
    graph[4][4]=0;
    graph[4][5]=EF;

    graph[5][0]=AF;
    graph[5][1]=BF;
    graph[5][2]=CF;
    graph[5][3]=DF;
    graph[5][4]=EF;
    graph[5][5]=0;

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf("%lf ",graph[i][j]);
        }
        puts("");
    }


    int n,awal,akhir;
    n=6;

    printf("Masukan Kota Asal dan Tujuan");
    printf("\n\nMasukan Kota Asal :");
    scanf(" %c",&asalkota);
    getchar();
    printf("Hingga Kota :");
    scanf(" %c",&hinggakota);
    getchar();
    awal=asalkota-'A';//ascii table
    akhir=hinggakota-'A';
    dijkstra(graph,awal,akhir);//buat manggil rumus dijkstra

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
