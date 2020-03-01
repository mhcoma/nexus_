               #     include      <math.h>
                 #   include   <stdio.h>
                      #define  n  30
                # define  e  (  n  *  2   )
            #   define   f   (   n   -   4    )
         #    define    s    (    e    *    2    )
       #     define    m    (    M_PI    /    3    )
      #  define  l (  )  printf  (  "\033[H\033[J"  )
     #define g(x, y) printf ("\033[%zu;%zuf" , y , x )
     int main(void){fputs("\33[?25l",stdout);double r,
    a=m*2;int x,y,max=0;while(1){int buff[s][ e]={0, };
    if((a-=0.05)<0)a=m*2;for(int c=0;c<3;c ++ ) { for (
   double i  =  0  ;  i  <  m  *  2  ;  i  +=  0.02  ) {
   for   (  double  j  =  i  ;  j  <  m  *  2  ;  j   +=
   0.02){if((r=fmod((((-m/0.8)-j)/3)*f,f))>( - f / 3 ) )
   continue             ;              x               =
   e  +  ( cos ( ( i + a ) + ( c * m * 2 ) ) * r *  2  )
    ;   y   =   n   +   (   sin   (   (   i   +   a   )
    +    (   c   *   m   *   2   )   )   *   r   )    ;
     buff  [  x  ]  [   y   ]   +=   1   ;   }   }   }
     for  ( int i = 0 ; i <  s  ;  i  ++  )  {  for  (
      int j = 0 ; j < e ; j ++ ) { g  ( i  ,  j  )  ;
       max  =  (  buff  [  i  ]  [  j  ]  >  max   )
         ?   buff  [  i  ]  [  j   ]   :   max   ;
            if( buff[i][j] ) putchar ( '@' )  ;
                else   putchar  (  ' '   )
                      ;  }  }   }  }