char s[10000],*t;

void get3(int *a,int *b,int *c)
{
   if(s[1]==' ') { *a=s[0]-48; t=s+2; }
   else if(s[2]==' ') { *a=s[0]*10+s[1]-528; t=s+3; }
   else if(s[3]==' ') { *a=s[0]*100+s[1]*10+s[2]-5328; t=s+4; }
   else { *a=s[0]*1000+s[1]*100+s[2]*10+s[3]-53328; t=s+5; }
   if(t[1]==' ') { *b=t[0]-48; t+=2; }
   else if(t[2]==' ') { *b=t[0]*10+t[1]-528; t+=3; }
   else if(t[3]==' ') { *b=t[0]*100+t[1]*10+t[2]-5328; t+=4; }
   else { *b=t[0]*1000+t[1]*100+t[2]*10+t[3]-53328; t+=5; }
   if(!t[1]) *c=t[0]-48;
   else if(!t[2]) *c=t[0]*10+t[1]-528;
   else if(!t[3]) *c=t[0]*100+t[1]*10+t[2]-5328;
   else *c=t[0]*1000+t[1]*100+t[2]*10+t[3]-53328;
}

void get2(int *a,int *b)
{
   if(s[1]==' ') { *a=s[0]-48; t=s+2; }
   else if(s[2]==' ') { *a=s[0]*10+s[1]-528; t=s+3; }
   else if(s[3]==' ') { *a=s[0]*100+s[1]*10+s[2]-5328; t=s+4; }
   else { *a=s[0]*1000+s[1]*100+s[2]*10+s[3]-53328; t=s+5; }
   if(!t[1]) *b=t[0]-48;
   else if(!t[2]) *b=t[0]*10+t[1]-528;
   else if(!t[3]) *b=t[0]*100+t[1]*10+t[2]-5328;
   else *b=t[0]*1000+t[1]*100+t[2]*10+t[3]-53328;
}

void get1(int *a)
{
   if(!s[1]) *a=s[0]-48;
   else if(!s[2]) *a=s[0]*10+s[1]-528;
   else if(!s[3]) *a=s[0]*100+s[1]*10+s[2]-5328;
   else *a=s[0]*1000+s[1]*100+s[2]*10+s[3]-53328;
}

