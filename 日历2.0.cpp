#include<iostream>  
# include<fstream>  
#include<time.h>  
#include<string>  
#include<iomanip>  
using namespace std;  
void bangzhu();  
void xianzaishijian();  
void chakanrili();  
int runnian(int);  
int tianshu(int,int);  
void shuru();  
int shurupanduan(int ,int,int);  
void shuchu();  
void shuxiang(int);  
void shuchushuxiang();  
void dijitian();  
void nianli();  
int main()  //主函数  
{  
    int a;  
    bangzhu();  
    while(cin>>a)  
    {if(a==0)  
    break; 
	system("cls");
	
        switch(a)  
        {//case 0: break;break;  
        case 1: xianzaishijian();break;  
        case 2: chakanrili();break;  
        case 3: shuchushuxiang();break;  
        case 4: dijitian();break;  
        case 5: nianli();break;  
  
        case 9: bangzhu();break;}  
          
}  
return 0;}  
  
void xianzaishijian()    //输出现在时间以及当前月份日历  
{   
time_t t = time(NULL);   
struct tm   *local = localtime(&t);   
int year = local -> tm_year + 1900;   
int month = local -> tm_mon + 1;   
int day = local -> tm_mday;  
int hour = local -> tm_hour;   
int minute = local -> tm_min;   
int second = local -> tm_sec;   
  
int d,y,m,l;  
y=year;  
m=month;  
d=day;  
int z=1;  
l=shurupanduan(y, m,z);  
 while(l==0)  
 {cin>>y>>m;  
l=shurupanduan(y,m,z);  
}  
    int q,s,i,sum=0;  
     for(i=1905;i<y;i++)  
     {sum+=365;  
       s=runnian(i);  
         if(s==1)  
           sum++;}  
     for(i=1;i<m;i++)  
     {s=runnian(y);  
switch(i)  
{case 1:q=31;break;  
case 2:q=28;break;  
case 3:q=31;break;  
case 5:q=31;break;  
case 7:q=31;break;  
case 8:q=31;break;  
case 10:q=31;break;  
case 12:q=31;break;  
case 4:q=30;break;  
case 6:q=30;break;  
case 9:q=30;break;  
case 11:q=30;break;}  
sum+=q;  
}  
     if(s==1&&m>2)  
        sum++;  
switch(m)  
{case 1:q=31;break;  
case 2:q=28;break;  
case 3:q=31;break;  
case 5:q=31;break;  
case 7:q=31;break;  
case 8:q=31;break;  
case 10:q=31;break;  
case 12:q=31;break;  
case 4:q=30;break;  
case 6:q=30;break;  
case 9:q=30;break;  
case 11:q=30;break;}  
s=runnian(y);  
if(s==1&&m==2)  
q++;  
int u,w;  
u=sum%7;  
w=3*u;  
sum=sum+d;  
d--;  
d=sum%7;  
  
cout <<"当前时间: "<<endl<<year<<"年"<<month<<"月"<<day<<"日"<<' '<<"星期";   
  
switch(d)  
{case 0:cout<<"六";break;  
case 1:cout<<"日";break;  
case 2:cout<<"一";break;  
case 3:cout<<"二";break;  
case 4:cout<<"三";break;  
case 5:cout<<"四";break;  
case 6:cout<<"五";break;  
}  
cout<<"  ";  
shuxiang(year);  
cout <<endl<<"     "<<hour<<":"<<minute<<":"<<second<<endl<<endl;   
cout<<" 日 一 二 三 四 五 六"<<endl;  
for(i=1;i<=w;i++)  
cout<<' ';  
  for(i=1;i<=q;i++)  
  {if(u==6)  
  {cout<<fixed<<setw(2)<<i<<"              "<<endl;;  
  u=-1;}  
   else cout<<fixed<<setw(2)<<i<<' ';  
  
   u++;}  
   cout<<endl;
   cout<<endl;
   cout<<"输入9返回菜单"<<endl;
  
}   

void bangzhu()                         //操作指令提示  
{  cout<<"请输入以下指令"<<endl<<endl;   
      
    cout<<"    1.输出当前时间          " <<endl;  
    cout<<"============================"<<endl;  
    cout<<"    2.查看指定月份日历         "<<endl;  
    cout<<"============================"<<endl;  
    cout<<"    3.查看属相         "<<endl;  
    cout<<"============================"<<endl;  
    cout<<"    4,计算指定日期是一年中的第几天"<<endl;  
    cout<<"============================"<<endl;  
    cout<<"    5,显示输出任何一年的年历,并写入一文本"<<endl;  
    cout<<"============================"<<endl;  
    cout<<"    9.输出指令集"<<endl;  
    cout<<"============================"<<endl;  
    cout<<"    0.结束本程序          "<<endl ;  
    cout<<"============================"<<endl;  
}  
  
int shurupanduan(int a,int b,int c=1)   //判断输入年月是否正确  
{int l=1,q;  
if(a<=0||b<=0||b>12||c<0)  
{l=0;  
cout<<"您的输入有误请重新输入"<<endl;}  
switch(b)  
{case 1:q=31;break;  
case 2:q=28;break;  
case 3:q=31;break;  
case 5:q=31;break;  
case 7:q=31;break;  
case 8:q=31;break;  
case 10:q=31;break;  
case 12:q=31;break;  
case 4:q=30;break;  
case 6:q=30;break;  
case 9:q=30;break;  
case 11:q=30;break;}  
if(c>q)  
{l=0;  
cout<<"您的输入有误请重新输入"<<endl;}  
  
return l;}  
  
int runnian(int a) //判断是是否为闰年  
{int l=0;  
if((a%4==0&&a%100!=0)||(a%400==0))  
l=1;  
return l;  
}  
  
void chakanrili()   //查看指定月份日历  
{cout<<"请输入年月中间用空格隔开如2013 1"<<endl;  
int y,m,l;  
cin>>y>>m;  
int z=1;  
l=shurupanduan(y,m,z);  
 while(l==0)  
 {cin>>y>>m;  
l=shurupanduan(y,m,z);  
}  
    int q,s,i,sum=0;  
     for(i=1905;i<y;i++)  
     {sum+=365;  
       s=runnian(i);  
         if(s==1)  
           sum++;}  
     for(i=1;i<m;i++)  
     {s=runnian(y);  
switch(i)  
{case 1:q=31;break;  
case 2:q=28;break;  
case 3:q=31;break;  
case 5:q=31;break;  
case 7:q=31;break;  
case 8:q=31;break;  
case 10:q=31;break;  
case 12:q=31;break;  
case 4:q=30;break;  
case 6:q=30;break;  
case 9:q=30;break;  
case 11:q=30;break;}  
sum+=q;  
}  
     if(s==1&&m>2)  
        sum++;  
switch(m)  
{case 1:q=31;break;  
case 2:q=28;break;  
case 3:q=31;break;  
case 5:q=31;break;  
case 7:q=31;break;  
case 8:q=31;break;  
case 10:q=31;break;  
case 12:q=31;break;  
case 4:q=30;break;  
case 6:q=30;break;  
case 9:q=30;break;  
case 11:q=30;break;}  
s=runnian(y);  
if(s==1&&m==2)  
q++;  
int u,w;  
u=sum%7;  
w=3*u;  
cout<<" 日 一 二 三 四 五 六"<<endl;  
for(i=1;i<=w;i++)  
cout<<' ';  
  for(i=1;i<=q;i++)  
  {if(u==6)  
  {cout<<fixed<<setw(2)<<i<<"              "<<endl;;  
  u=-1;}  
   else cout<<fixed<<setw(2)<<i<<' ';  
  
   u++;}  
cout<<endl;
   cout<<endl;
   cout<<"输入9返回菜单"<<endl;}
  
  
void shuxiang(int y)//判断属相  
{int p;  
p=y%12;  
switch(p)   
 {case 1:cout<<"鸡年";break;  
 case 2:cout<<"狗年";break;   
 case 3:cout<<"猪年";break;  
 case 4:cout<<"鼠年";break;   
 case 5:cout<<"牛年";break;   
 case 6:cout<<"虎年";break;   
 case 7:cout<<"兔年";break;  
 case 8:cout<<"龙年";break;  
 case 9:cout<<"蛇年";break;  
 case 10:cout<<"马年";break;  
 case 11:cout<<"羊年";break;  
 case 12:cout<<"猴年";break;} 
}  
void shuchushuxiang() //输出属相  
{  
    cout<<"请输入年份"<<endl;  
    int y;  
    cin>>y;  
    shuxiang(y);  
    cout<<endl; 
    cout<<endl;
	cout<<"输入9返回菜单"<<endl; 
}  
void dijitian()  
{int y,m,d,sum=0,i,l,s,q;  
cout<<"请输入年月日"<<endl;  
cin>>y>>m>>d;  
l=shurupanduan(y,m,d);  
 while(l==0)  
 {cin>>y>>m;  
l=shurupanduan(y,m,d);  
}  
    for(i=1;i<m;i++)  
     {s=runnian(y);  
switch(i)  
{case 1:q=31;break;  
case 2:q=28;break;  
case 3:q=31;break;  
case 5:q=31;break;  
case 7:q=31;break;  
case 8:q=31;break;  
case 10:q=31;break;  
case 12:q=31;break;  
case 4:q=30;break;  
case 6:q=30;break;  
case 9:q=30;break;  
case 11:q=30;break;}  
sum+=q;  
}  
     if(s==1&&m>2)  
        sum++;  
     sum=sum+d;  
     cout<<y<<"年"<<m<<"月"<<d<<"日是这一年中第"<<sum<<"天"<<endl;  
     cout<<endl;
     cout<<"输入9返回菜单"<<endl;
}  
void nianli()  
{cout<<"请输入文本名称:";   
char s[20];  
cin>>s;   
ofstream outfile(s,ios::out);  
cout<<"请输入年份"<<endl;  
int y,m,l;  
cin>>y;  
for(m=1;m<=12;m++)  
{  
int z=1;  
l=shurupanduan(y,m,z);  
 while(l==0)  
 {cin>>y>>m;  
l=shurupanduan(y,m,z);  
}  
    int q,s,i,sum=0;  
     for(i=1905;i<y;i++)  
     {sum+=365;  
       s=runnian(i);  
         if(s==1)  
           sum++;}  
     for(i=1;i<m;i++)  
     {s=runnian(y);  
switch(i)  
{case 1:q=31;break;  
case 2:q=28;break;  
case 3:q=31;break;  
case 5:q=31;break;  
case 7:q=31;break;  
case 8:q=31;break;  
case 10:q=31;break;  
case 12:q=31;break;  
case 4:q=30;break;  
case 6:q=30;break;  
case 9:q=30;break;  
case 11:q=30;break;}  
sum+=q;  
}  
     if(s==1&&m>2)  
        sum++;  
switch(m)  
{case 1:q=31;break;  
case 2:q=28;break;  
case 3:q=31;break;  
case 5:q=31;break;  
case 7:q=31;break;  
case 8:q=31;break;  
case 10:q=31;break;  
case 12:q=31;break;  
case 4:q=30;break;  
case 6:q=30;break;  
case 9:q=30;break;  
case 11:q=30;break;}  
s=runnian(y);  
if(s==1&&m==2)  
q++;  
int u,w;  
u=sum%7;  
w=3*u;  
outfile<<"   "<<y<<"年"<<m<<"月"<<endl;  
outfile<<" 日 一 二 三 四 五 六"<<endl;  
for(i=1;i<=w;i++)  
outfile<<' ';  
  for(i=1;i<=q;i++)  
  {if(u==6)  
  {outfile<<fixed<<setw(2)<<i<<"              "<<endl;;  
  u=-1;}  
   else outfile<<fixed<<setw(2)<<i<<' ';  
  
   u++;}  
outfile<<endl;  
}  
for(m=1;m<=12;m++)  
{  
int z=1;  
l=shurupanduan(y,m,z);  
 while(l==0)  
 {cin>>y>>m;  
l=shurupanduan(y,m,z);  
}  
    int q,s,i,sum=0;  
     for(i=1905;i<y;i++)  
     {sum+=365;  
       s=runnian(i);  
         if(s==1)  
           sum++;}  
     for(i=1;i<m;i++)  
     {s=runnian(y);  
switch(i)  
{case 1:q=31;break;  
case 2:q=28;break;  
case 3:q=31;break;  
case 5:q=31;break;  
case 7:q=31;break;  
case 8:q=31;break;  
case 10:q=31;break;  
case 12:q=31;break;  
case 4:q=30;break;  
case 6:q=30;break;  
case 9:q=30;break;  
case 11:q=30;break;}  
sum+=q;  
}  
     if(s==1&&m>2)  
        sum++;  
switch(m)  
{case 1:q=31;break;  
case 2:q=28;break;  
case 3:q=31;break;  
case 5:q=31;break;  
case 7:q=31;break;  
case 8:q=31;break;  
case 10:q=31;break;  
case 12:q=31;break;  
case 4:q=30;break;  
case 6:q=30;break;  
case 9:q=30;break;  
case 11:q=30;break;}  
s=runnian(y);  
if(s==1&&m==2)  
q++;  
int u,w;  
u=sum%7;  
w=3*u;  
cout<<"   "<<y<<"年"<<m<<"月"<<endl;  
cout<<" 日 一 二 三 四 五 六"<<endl;  
for(i=1;i<=w;i++)  
cout<<' ';  
  for(i=1;i<=q;i++)  
  {if(u==6)  
  {cout<<fixed<<setw(2)<<i<<"              "<<endl;;  
  u=-1;}  
   else cout<<fixed<<setw(2)<<i<<' ';  
  
   u++;}  
cout<<endl;
 
}  
cout<<endl;
cout<<"输入9返回菜单"<<endl; 
}  

