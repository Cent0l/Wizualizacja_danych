#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world \n");
int a;
    scanf("%d",&a);
    printf("w tym miejscu bedzie wypisana a=%d, ale tu juz nie, za to tu a+1=%d",a,a+1);
float a;
    scanf("%f",&a);
    printf("w tym miejscu bedzie wypisana a=%f, ale tu juz nie, za to tu a+1=%f",a,a+1);
double a;
    scanf("%lf",&a);
    printf("w tym miejscu bedzie wypisana a=%lf, ale tu juz nie, za to tu a+1=%lf",a,a+1);
    printf("przed chwila wczytalem liczbe a=%lf,a jej dwukrotnosc wynosi %lf",a,a*2);
    printf("przed chwila wczytalem liczbe a=%lf,a jej przyblizenie do 2 miejsc po przecinku wynosi %.2lf",a,a);
    printf("przed chwila wczytalem liczbe a=%lf,a jej odwrotnosc wynosi %lf",a,1/a);

    int a;
    scanf("%d",&a);
    printf("przed chwila wczytalem liczbe a=%d,a jej odwrotnosc wynosi %f",a,1/(float)(a));/lub [...]1.0/a tak jak ponizej
    int a,x;
    scanf("%d%d",&a,&x);
    printf("srednia z tych liczb to %f",(a+x)/2.0);
    scanf("%d",&x);
    printf("pierwiastek z tych liczb to %f",sqrt(x));
    printf("wartosc bezwzgledna to %f",fabs(x)); (  abs(x) to bezwzgledna, fabs dla rzeczywistych)
    double x;
    scanf("%lf",&x);
    printf("notacja wykladnicza %e",x);
    printf("pierwiastek %lf",pow(x,1.0/3));

     int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if((x>=y&&x<=z)||(x<=y&&x>=z)) printf("%d",x);
        else if((y>=x&&y<=z)||(y<=x&&y>=z)) printf("%d",y);
            else if((z>=x&&z<=y)||(z<=x&&z>=y)) printf("%d",z);


    INSTRUKCJE WARUNKOWE 

    int x;
    scanf("%d",&x);
    if(x>=0)


    {
    printf("wartosc bezwzgledna to |%d|",x);
    }
    else
    {
    printf("wartosc bezwzgledna to |%d|",-1*x);
    }

    if(x>0) printf("signum to %d",1);
        else if (x<0) printf("signum to %d",-1);
            else printf("signum to %d",0);

    if(x>y) printf("max to %d",x);//ten mniej wyrazisty komentarz
        else printf("max to %d",y);///a tu jaki widoczny
/*
a tu blok
*/

scanf("%d%d%d",&x,&y,&z);
    int max2;
    if(x>y) max2=x;
        else max2=y;
    if (max2>z) printf("max to %d",max2);
        else printf("max to %d",z);

w domu, zrob ten co przeliczyl srodkowa z min i max (a+b+c-min-max=srodek)

    int a,h,b,c,kom;
    scanf("%d",&kom);
    //1=podaj a i h
    //2=podaj a,b,c
    if(kom==1)
    {
        printf("podaj a, oraz h\n");
        scanf("%d%d",&a,&h);
        float pole=0.5*a*h;
        printf("%f",pole);
    }
 if(kom==2)
    {
        printf("podaj a,b,oraz c\n");
        scanf("%d%d%d",&a,&b,&c);
        float p=(a+b+c)/2;
        float pole=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%f",pole);
    }

   scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
   printf("uklad rowan to\n%dx+%dy=%d\n",a,b,e);
   printf("%dx+%dy=%d\n",c,d,f);
   w=a*e-b*d;
   wx=c*e-b*f;
   wy=a*f-c*d;
   x=(float)wx/w;
   y=(float)wy/y;
   if(w==0);
   {
        if(wx==0 && wy==0) printf("uklad tozsamosciowy");
            else printf("uklad sprzeczny");
   }
   if(w!=0) printf("x=%f\ny=%f",x,y);
   popraw, cos jest nie tak

      int a,b,c;
   float delta,x1,x2;
   scanf("%d%d%d",&a,&b,&c);
   printf("twoje rownanie to %dx^2+%dx+%d=0\n",a,b,c);
   delta=(b*b)-(4*a*c);
   if(delta<0)
   {
   printf("brak rozwiazan rzeczywistych");
   }
   else if(delta==0)
   {
    x1=(-b)/(2*a);
    printf("%f",x1);
   }
   else if(delta>0)
   {
   x1=(-b-sqrt(delta))/(2*a);
   x2=(-b+sqrt(delta))/(2*a);
   if(x1==x2)
    printf("%f",x1);
    else printf("%f\n%f",x1,x2);
   }

unsigned int n,m;
scanf("%d%d",&n,&m);
for(int i=1;i*n<m;i++)
{
    printf("\t%d\n",i*n);
}

unsigned int n,m;
scanf("%d%d",&n,&m);
for(int i=1;i<=m;i++)
{
    printf("\t%d\n",i*n);
}


//for(int i=1;i<m;i++)
//{
//    if(i*n>m&&i*n<k) printf("\t%d\n",i*n);
//}
//wersja lepsza
for(int i=(m/n*n+n);i<k;i=i+n)
{
    printf("\t%d\n",i);
}

scanf("%d",&n);
for(int i=2;i<=n;i++)
{
m=i*m;
}
printf("%d!=%d",n,m);

unsigned int n,m=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
m=m+(i*i);
}
printf("1^2+2^2+3^2+...+%d^2=%d",n,m);

unsigned int n=0,m=0,k=0;
scanf("%d",&k);
int i=1;
while(m<k)
{
m=m+(i*i);
i++;

}
printf("%d\n",i-2);

unsigned int n,w=1;
scanf("%d",&n);
for(int i=2;i<=n;i=i+2)
{
w=w*i;
}
printf("%d",w);

unsigned int n,w=1,a,b;
scanf("%d",&n);
a=1;
b=1;
for(int i=3;i<=n;i++)
{
w=a+b;
a=b;
b=w;
}
printf("fib[%d]=%d",n,w);

unsigned int a,b,nwd;
scanf("%d%d",&a,&b);
int min;
if(a>b) min=b;
else min=a;
for(int i=2;i<=min;i++)
{
if(a%i==0&&b%i==0) nwd=i;
}
printf("nwd=%d",nwd);

zrob nwd algorytmem euklidesa



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int warbezwzg(int x)
{
    if (x>0) return x;
    else return -x;
}

unsigned int silnia(int x)
{
    if(x==0) return 1;
    return x*silnia(x-1);
}

unsigned petsilnia(int x)
{
    int wynik=1;
    for(int i=1;i<=x;i++)
        wynik=wynik*i;
    return wynik;
}

unsigned int dwadon(int x)
{
    if(x==0) return 1;
    if(x==1) return 2;
    return 2*dwadon(x-1);
}
unsigned petdwadon(int x)
{
    int wynik=1;
    for(int i=1;i<=x;i++)
        wynik=wynik*2;
    return wynik;
}
float dwadonminus(int x)
{
 if(x==0) return 1;
 if(x>=0) return 2*dwadonminus(x-1);
 if(x<0) return 1/dwadonminus(-x);
}

int podloga(int x)
{
int i;
while(i*i<=x)
{
i++;
}
return i-1;
}

int sumapodlog(int x)
{
int wynik=0,i;
for(i=1;i<=x;i++)
    {
    wynik=wynik+podloga(i);
    }
return wynik;
}

int main()
{
int n;
scanf("%d",&n);
printf("suma podlog z pierwiastkow do %d=%d\n",n,sumapodlog(n));
printf("|%d|=%d\n",n,warbezwzg(n));
printf("%d!=%d\n",n,silnia(n));
printf("%d!=%d\n",n,petsilnia(n));
printf("2^%d=%d\n",n,dwadon(n));
printf("2^%d=%d\n",n,petdwadon(n));
printf("2^%d=%f\n",-n,dwadonminus(-n));
printf("podloga z pierwiastka z %d=%d\n",n,podloga(n));
}
#include <stdio.h>
#include <stdlib.h>
void zlicz()
{
    static int liczba=0;// nadaje startowe, natomiast nie podmienia
    liczba++;
    printf("Ta funkcja wywolana zostala %d razy\n",liczba);
}

//wczytuje liczbe calkowita zwraca jaka swoja wartosc wypisuje wszystkie dotychczas zsumowane

void zlicz()
{
    static int liczba=0;// nadaje startowe, natomiast nie podmienia
    liczba++;
    printf("Ta funkcja wywolana zostala %d razy\n",liczba);
}

//wczytuje liczbe calkowita zwraca jaka swoja wartosc wypisuje wszystkie dotychczas zsumowane

int zsumuj(int liczba)
{
    static int suma=0;
    suma+=liczba;
    return suma;
}
int silnia(int n)
{
    if(n==0) return 1;
        return n*silnia(n-1);
}
int ciag(int n)
{
if (n==0) return 1;
return 2*ciag(n-1)+5;
}
int ciag2(int n)
{
if (n==0) return 1;
if (n==1) return 1;
return ciag2(n-1)+2*ciag2(n-2)+3;
}
int fibbonachi(unsigned int n)
{
if (n==0) return 1;
if (n==1) return 1;
return fibbonachi(n-1)+fibbonachi(n-2);
}
void ograniczenie()
{
int x;
scanf("%d",&x);
for(int i=0;fibbonachi(i)<x;i++)
{
    printf("%d \t",fibbonachi(i));
}
printf("\n");
}
int tribbonachi(unsigned int n)
{
if (n==0) return 1;
if (n==1) return 1;
if (n==2) return 1;
return tribbonachi(n-1)+tribbonachi(n-2)+tribbonachi(n-3);
}
int ciag3(unsigned int n)
{
if (n==0) return 1;
if (n==1) return 2;
int suma=0;
for(int i=0;i<n;i++)
{
    suma=suma+ciag3(i);
}
return suma;
}
int ciag4(unsigned int n)
{
if (n==0) return 1;
if (n==1) return 1;
if(n%2==0) return ciag4(n-1)+n;
    else return ciag4(n-1)*n;
}

int ciag5(unsigned int n)
{
if (n==0) return 1;
if (n==1) return 1;
if (n==2) return 1;
if(n%3==0) return ciag5(n-1)+ciag5(n-2);
else if(n%3==1) return ciag5(n-1)*5+4;
    else return ciag5(n-1)+1;
}

int fibbonachi2(int n, int x, int y)
{
if (n==0) return x;
if (n==1) return y;
return fibbonachi2(n-1,x,y)+fibbonachi2(n-2,x,y);
}

int ciag6(int n,int p)
{
if (n==0) return p;
    if(ciag6(n-1,p)%2==0) return ciag6(n-1,p)/2;
    else  return 3*ciag6(n-1,p)+1;
}
int funkcja(int n, int m)
{
    if(n==0) return m;
    if(m==0) return n;
    else return funkcja(n-1,m)+funkcja(n-1,m-1)+funkcja(n,m-1);
}
int main()
{
zlicz();
zlicz();
zlicz();
zlicz();
printf("suma:%d\n",zsumuj(1));
printf("suma:%d\n",zsumuj(2));
printf("suma:%d\n",zsumuj(2));
printf("suma:%d\n",zsumuj(8));
printf("%d!=%d\n",5,silnia(5));
printf("%d!=%d\n",8,silnia(8));
for(int i=0;i<10;i++)
{
    printf("%d \t",ciag(i));
}
printf("\n");
for(int i=0;i<15;i++)
{
    printf("%d \t",ciag2(i));
}
printf("\n");
//ograniczenie();
for(int i=0;i<15;i++)
{
    printf("%d \t",tribbonachi(i));
}
printf("\n");
for(int i=0;i<15;i++)
{
    printf("%d \t",ciag3(i));
}
printf("\n");
for(int i=0;i<15;i++)
{
    printf("%d \t",ciag4(i));
}
printf("\n");
for(int i=0;i<15;i++)
{
    printf("%d \t",ciag5(i));
}
printf("\n");
for(int i=0;i<15;i++)
{
    printf("%d \t",fibbonachi2(i,2,7));
}
printf("\n");
int j=0;
int x=3;
do
{
    printf("%d \t",ciag6(j,x));
    j++;
}
while(ciag6(j,x)>1);
printf("\n");
printf("%d\n",funkcja(100,100));

}

#include <stdio.h>
#include <stdlib.h>

int podwajanie(int *x)
{
    *x=2*(*x);
    return *x;
}
//podmienia na trwale, bez *x, same x caly czas byloby 7

int min(int *x,int *y)
{
    if(*x>*y)
        return *y;
    return *x;
}
int* minad(int *x,int *y)//* czyli zwraca adres
{
    if(*x>*y)
        return y;
    return x;
}
void* swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
void* swapmal(int *a,int *b)
{
    int *temp=malloc(sizeof(int));
    *temp=*a;
    *a=*b;
    *b=*temp;
}
void* swapmn(int *a,int *b)
{
    if(*a>*b)
    {
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
    }
}
int sum(int *x,int *y)
{
 return *x+*y;
}
void wst(int x,int*y)
{
*y=x;
}
int* rezerwacja()
{
    return malloc(sizeof(int));
}
float* rezerwacjaf()
{
    return malloc(sizeof(float));
}
void* rezerwacjatab(int n)
{
    return malloc(n*sizeof(int));
}
void* przepstala(const int* x,int* y)
{
 *y=*x;
}
double f(int x)
{
    return 3*x;
}
double g(double (*f)(int x),int n)
{
 return f(n);
}
int main()
{
int a=7,b=8,c=7;
int x=10,y=15,s=21;
printf("%d\n",podwajanie(&a));
printf("%d\n",a);//wskazniki podmienily 7 na 14
printf("%p\n",&b);//adres b
printf("%p\n",&c);//adres c
printf("%d\n",min(&c,&b));//wyswietla zmienna
printf("%p\n",minad(&c,&b));//wyswietla adres mniejszej zmiennej
printf("\n\n");
printf("%d   %d\n",b,c);
printf("%p   %p\n",&b,&c);
swapmn(&b,&c); //swap(&b,&c)
printf("%d   %d\n",b,c);
printf("%p   %p\n",&b,&c);
printf("%d\n",sum(&b,&c));
printf("\n\n");
printf("%d\n",y);
wst(19,&y);
printf("%d\n",y);
int* wsk=rezerwacja(),wsk2=rezerwacjaf(),wsk3=rezerwacjatab(10);
printf("%p\n",&wsk);
printf("%p\n",&wsk2);
printf("%d\n",sizeof(int)); //4 bajty=32 bity czyli ciag zerojedynkowy o dlugosci 32
printf("%p\n",&wsk3);
const int st=303;
printf("%d\n",st);
printf("%d\n\n",s);
przepstala(&st,&s);
printf("%d\n",st);
printf("%d\n",s);

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
@@ -597,317 +14,163 @@ void wypisz(unsigned int n, int * tab)
        printf("%d\t",tab[i]);
    printf("\n");
}
void zeruj(unsigned int n, int * tab)
{
    for(int i=0;i<n;i++)
    {
        tab[i]=0;
    }
}
void indeksy(unsigned int n, int * tab)

void wyczysc(char *napis)
{
    for(int i=0;i<n;i++)
    {
        tab[i]=i;
    }
    napis[0]=0;
}
void podwoj(unsigned int n, int * tab)
int dlugosc(char *napis)
{
    for(int i=0;i<n;i++)
    int i;
    for(i=0;napis[i]!=0;i++)
    {
        tab[i]=2*tab[i];
    }
    return i;
}
void bezwzgledna(unsigned int n, int * tab)

int dlugoscbezspacji(char *napis)
{
    for(int i=0;i<n;i++)
    int i;
    int temp=0;
    for(i=0;napis[i]!=0;i++)
    {
            tab[i]=abs(tab[i]);
    if (napis[i]==32) temp++;
    }
    return i-temp;
}

int sumatab(unsigned int n, int * tab)
char* usunspacje(char* napis)
{
    int suma=tab[0];
    for(int i=1;i<n;i++)
    {
     suma+=tab[i];
    }
return suma;

}
int sumakwtab(unsigned int n, int * tab)

int porownaj (char* a, char* b)
{
    int suma=tab[0];
    for(int i=1;i<n;i++)
    if(dlugosc(a)!=dlugosc(b)) return 0;
    for(int i=0;(a[i]!=0&&b[i]!=0);i++)
    {
     suma+=tab[i]*tab[i];
    if(a[i]!=b[i]) return 0;
    }
return suma;
return 1;
}
float sredniatab(unsigned int n, int * tab)

int alfabetycznie( char*a, char*b)
{
  float suma=0;
    for(int i=0;i<n;i++)
    for(int i=0;(a[i]!=0&&b[i]!=0);i++)
    {
     suma+=tab[i];
    if(a[i]!=b[i])
        {
            if (a[i]>b[i]) return 0;
                return 1;
        }
    }
    return suma/n ;
    if(dlugosc(a)>dlugosc(b))
        return 0;
    else return 1;

}
float sredniageotab(unsigned int n, int * tab)
void przepisz(char*a,char*b)
{
    float sm=1;
    for(int i=0;i<n;i++)
    for(int i=0;a[i]!=0;i++)
    {
     sm=sm*tab[i];
    b[i]=a[i];
    }
    return pow(sm,1.0*1/n);
    b[dlugosc(a)]=0;
}
float sredniahartab(unsigned int n, int * tab)
void przepiszn(char*a,char*b,int n)
{
    float sm=0;
    for(int i=0;i<n;i++)
    {
     sm=sm+1.0/tab[i];
    b[i]=a[i];
    }
    return n/sm;
    b[n]=0;
}
void tru(unsigned int n, bool * tab)
void sklej(char*a,char*b,char*c)
{
    for(int i=2;i<n;i++)
    int x=dlugosc(a);
    int y=dlugosc(b);
    for(int i=0;i<=x;i++)
    {
     tab[i]=true;
    c[i]=a[i];
    }

}

int sito(unsigned int n)
{
    bool tab[n];
 for(int i=0;i<n;i++)
 {
   tab[i]=true;
 }
 int j,k;
 for(j=2;j<n;j++)
 {
   if(tab[j])
   {
       for(k=2*j;k<n;k=k+j)
       {
        tab[k]=false;
       }
   }
 }
int last=0;
int x=n;
while(!tab[x-1])
{
x--;
}
return x-1;
}

int sitoile(unsigned int n)
{
    bool tab[n];
 for(int i=0;i<n;i++)
 {
   tab[i]=true;
 }
 int j,k;
 for(j=2;j<n;j++)
 {
   if(tab[j])
   {
       for(k=2*j;k<n;k=k+j)
       {
        tab[k]=false;
       }
   }
 }
int x=0;
for(int i=2;i<n;i++)
{
if(tab[i]) x++;
}
return x;
}

void przepisz (int * tab1, int * tab2,int n)
{
    for(int i=0;i<n;i++)
    for(int i=0;i<=y;i++)
    {
        tab2[i]=tab1[i];
    c[i+x]=b[i];
    }
c[x+y]=0;
}

void przepiszodw (int * tab1, int * tab2,int n)
{
    for(int i=0;i<n;i++)
void zamiana(char*a)
{int i;
    for(i=0;a[i]!=0;i++)
    {
        tab2[i]=tab1[n-i-1];
        if (a[i]>=97&&a[i]<=122)
        {
            a[i]=a[i]-32;
        }//97-122
    }
a[i]=0;
}
int main()
char* usun( char* a, int m, int n)
{
int rozmiar=4;
int tab[rozmiar];
int tabbool[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int tab1[10]={1,2,3,4,5,6,7,8,9,10};
int tab2[10]={11,12,13,14,15,16,17,18,19,20};
def(rozmiar,tab);
wypisz(rozmiar,tab);
zeruj(rozmiar,tab);
wypisz(rozmiar,tab);
indeksy(rozmiar,tab);
wypisz(rozmiar,tab);
def(rozmiar,tab);
podwoj(rozmiar,tab);
wypisz(rozmiar,tab);
bezwzgledna(rozmiar,tab);
wypisz(rozmiar,tab);
def(rozmiar,tab);
wypisz(rozmiar,tab);
printf("%d\n",sumatab(rozmiar,tab));
printf("%f\n",sredniatab(rozmiar,tab));
printf("%f\n",sredniageotab(rozmiar,tab));
printf("%f\n",sredniahartab(rozmiar,tab));
printf("%d\n",sito(100));
printf("%d\n",sitoile(10000));
wypisz(10,tab1);
wypisz(10,tab2);
przepisz(tab1,tab2,10);
wypisz(10,tab1);
wypisz(10,tab2);
przepiszodw(tab1,tab2,10);
wypisz(10,tab1);
wypisz(10,tab2);

}

  char wynik[100];
  int i;
  for(i=n;i<m;i++)
  {
    wynik[i]=a[i];
  }
wynik[i]=0;
}


int main()
{
int n=100;
int tab[100]={4,2,2,1,3,3,3,1,1,1,1,2,5,2};
int temp=1;
for(int i=1;i<n;i++)
    {
 if(tab[i]==tab[i-1])
        {
            temp++;
        }
    else
        {
        printf("%d %d\t",temp,tab[i-1]);
        temp=1;
        }

    }


}
void przepisztrzy (int *tab1, int *tab2,int *tab3, int n)
printf("%d\n",sizeof(wchar_t));
printf("%d\n",'a');///wywolanie numeru w kodzie ascii
printf("%c\n",97);///znaczka pod dana ascii
for (int i=0;i<=15;i++) //377
{
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i]+tab2[i];
    }
}
void przepiszmaxztrzy (int *tab1, int *tab2,int *tab3, int n)
{
    for(int i=0;i<n;i++)
    {
        if(tab1[i]>tab2[i])
            tab3[i]=tab1[i];
        else
            tab3[i]=tab2[i];
    }
  printf("%d: %c\t\t",i,i);
}
char  *napis="sam";
char  *napisa="sama";
char a[100]="brzeczy";
char b[100]="szczykiewicz";
char c[40]="";
char duze[100]="Duze";
printf("\n");
printf(napis);
//wyczysc(napis);
//printf(napis);
//free(napis);
printf("\n%d",dlugoscbezspacji(napis));
printf("\n%d",dlugosc(napis));
printf("\n%d",porownaj(napis,napisa));
printf("\n%d",alfabetycznie(napis,napisa));
printf("\n");
printf(a);
printf("\t");
printf(b);
//przepisz(a,b);
//przepiszn(a,b,4);
printf("\n");
printf(a);
printf("\t");
printf(b);
sklej(a,b,c);
printf("\n");
printf(c);
printf("\n");
printf(duze);
zamiana(duze);
printf("\n");
printf(duze);
printf("\n");
printf(usun(a,8,3));

void przepiszswap (int *tab1, int *tab2,int *tab3, int n)
{
    int temptab[n];
    for(int i=0;i<n;i++)
    {
        temptab[i]=tab2[i];
        tab2[i]=tab1[i];
        tab1[i]=tab3[i];
        tab3[i]=temptab[i];

    }
}

void sortowanie(int *tab1, int *tab2,int *tab3, int n)
{
   for(int i=0;i<n;i++)
    {

    }
}

int maks(int n, int*tab)
{
int max=tab[0];
for(int i=1;i<n;i++)
    {
    if(max<tab[i]) max=tab[i];
    }
return max;
}

int mini(int n, int*tab)
{
int min=tab[0];
for(int i=1;i<n;i++)
    {
    if(min>tab[i]) min=tab[i];
    }
return min;
}

int maksind(int n, int*tab)
{
int max=tab[0];
for(int i=1;i<n;i++)
    {
    if(max<tab[i]) max=i;
    }
return max;
}
int iloskalarny(int n, int*tab1,int *tab2)
{
int suma=0;
for(int i=1;i<n;i++)
    {
    suma=suma+tab1[i]*tab2[i];
    }
    return suma;
}

int main()
{
int tabbool[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int tab1[]={1,2,3,4,5,6,7,8,9,10};
int tab2[]={11,12,13,14,15,16,17,18,19,20};
int tab3[]={21,22,23,24,25,26,27,28,29,30};
int tabb1[]={2,1,2,3};
int tabb2[]={4,5,1,8};
int tabb3[]={1,6,4,6};
//przepisztrzy(tab1,tab2,tab3,10);
//wypisz(10,tab3);
//przepiszmaxztrzy(tab1,tab2,tab3,10);
wypisz(10,tab1);
wypisz(10,tab2);
wypisz(10,tab3);
przepiszswap(tab1,tab2,tab3,10);
printf("\n");
wypisz(10,tab1);
wypisz(10,tab2);
wypisz(10,tab3);
printf("%d\n",maks(4,tabb1));
printf("%d\n\n",maksind(4,tabb1));
printf("%d\n",mini(4,tabb1));
printf("%d\n",iloskalarny(4,tabb1,tabb2));
