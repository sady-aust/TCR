/* return nth digit of 123456789010111213141516..., the concatenated series of all
   positive integers */

int d[12]={1000000000,100000000,10000000,1000000,100000,10000,1000,100,10,1};

int solve(int n)
{
   if(n<10) return n;
   n-=10;
   if(n<2*90) return (n/2+10)/d[n%2+8]%10;
   n-=2*90;
   if(n<3*900) return (n/3+100)/d[n%3+7]%10;
   n-=3*900;
   if(n<4*9000) return (n/4+1000)/d[n%4+6]%10;
   n-=4*9000;
   if(n<5*90000) return (n/5+10000)/d[n%5+5]%10;
   n-=5*90000;
   if(n<6*900000) return (n/6+100000)/d[n%6+4]%10;
   n-=6*900000;
   if(n<7*9000000) return (n/7+1000000)/d[n%7+3]%10;
   n-=7*9000000;
   if(n<8*90000000) return (n/8+10000000)/d[n%8+2]%10;
   n-=8*90000000;
   if(n<9*900000000) return (n/9+100000000)/d[n%9+1]%10;
   n-=9*900000000;
   return (n/10+1000000000)/d[n%10]%10;
}
