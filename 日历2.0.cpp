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
int main()  //������  
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
  
void xianzaishijian()    //�������ʱ���Լ���ǰ�·�����  
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
  
cout <<"��ǰʱ��: "<<endl<<year<<"��"<<month<<"��"<<day<<"��"<<' '<<"����";   
  
switch(d)  
{case 0:cout<<"��";break;  
case 1:cout<<"��";break;  
case 2:cout<<"һ";break;  
case 3:cout<<"��";break;  
case 4:cout<<"��";break;  
case 5:cout<<"��";break;  
case 6:cout<<"��";break;  
}  
cout<<"  ";  
shuxiang(year);  
cout <<endl<<"     "<<hour<<":"<<minute<<":"<<second<<endl<<endl;   
cout<<" �� һ �� �� �� �� ��"<<endl;  
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
   cout<<"����9���ز˵�"<<endl;
  
}   

void bangzhu()                         //����ָ����ʾ  
{  cout<<"����������ָ��"<<endl<<endl;   
      
    cout<<"    1.�����ǰʱ��          " <<endl;  
    cout<<"============================"<<endl;  
    cout<<"    2.�鿴ָ���·�����         "<<endl;  
    cout<<"============================"<<endl;  
    cout<<"    3.�鿴����         "<<endl;  
    cout<<"============================"<<endl;  
    cout<<"    4,����ָ��������һ���еĵڼ���"<<endl;  
    cout<<"============================"<<endl;  
    cout<<"    5,��ʾ����κ�һ�������,��д��һ�ı�"<<endl;  
    cout<<"============================"<<endl;  
    cout<<"    9.���ָ�"<<endl;  
    cout<<"============================"<<endl;  
    cout<<"    0.����������          "<<endl ;  
    cout<<"============================"<<endl;  
}  
  
int shurupanduan(int a,int b,int c=1)   //�ж����������Ƿ���ȷ  
{int l=1,q;  
if(a<=0||b<=0||b>12||c<0)  
{l=0;  
cout<<"����������������������"<<endl;}  
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
cout<<"����������������������"<<endl;}  
  
return l;}  
  
int runnian(int a) //�ж����Ƿ�Ϊ����  
{int l=0;  
if((a%4==0&&a%100!=0)||(a%400==0))  
l=1;  
return l;  
}  
  
void chakanrili()   //�鿴ָ���·�����  
{cout<<"�����������м��ÿո������2013 1"<<endl;  
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
cout<<" �� һ �� �� �� �� ��"<<endl;  
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
   cout<<"����9���ز˵�"<<endl;}
  
  
void shuxiang(int y)//�ж�����  
{int p;  
p=y%12;  
switch(p)   
 {case 1:cout<<"����";break;  
 case 2:cout<<"����";break;   
 case 3:cout<<"����";break;  
 case 4:cout<<"����";break;   
 case 5:cout<<"ţ��";break;   
 case 6:cout<<"����";break;   
 case 7:cout<<"����";break;  
 case 8:cout<<"����";break;  
 case 9:cout<<"����";break;  
 case 10:cout<<"����";break;  
 case 11:cout<<"����";break;  
 case 12:cout<<"����";break;} 
}  
void shuchushuxiang() //�������  
{  
    cout<<"���������"<<endl;  
    int y;  
    cin>>y;  
    shuxiang(y);  
    cout<<endl; 
    cout<<endl;
	cout<<"����9���ز˵�"<<endl; 
}  
void dijitian()  
{int y,m,d,sum=0,i,l,s,q;  
cout<<"������������"<<endl;  
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
     cout<<y<<"��"<<m<<"��"<<d<<"������һ���е�"<<sum<<"��"<<endl;  
     cout<<endl;
     cout<<"����9���ز˵�"<<endl;
}  
void nianli()  
{cout<<"�������ı�����:";   
char s[20];  
cin>>s;   
ofstream outfile(s,ios::out);  
cout<<"���������"<<endl;  
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
outfile<<"   "<<y<<"��"<<m<<"��"<<endl;  
outfile<<" �� һ �� �� �� �� ��"<<endl;  
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
cout<<"   "<<y<<"��"<<m<<"��"<<endl;  
cout<<" �� һ �� �� �� �� ��"<<endl;  
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
cout<<"����9���ز˵�"<<endl; 
}  

