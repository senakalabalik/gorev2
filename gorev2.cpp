
#include <iostream>
#include <string>
int main() {
  std:: string number ;
  std:: cin >> number ;
  int digit ;
  
 switch (number.length() )
 {
   case 3 :
     digit = 3 ;
     break ;
   case 2 :
     digit = 2 ;
     break ;
   case 1 :
     digit = 1 ;
     break ;
   default :
     break ;
 }
std:: string name ;
 for (i=0, number[i]<4, i=i+1) {
   if (digit==3) {
     switch i 
     {
       case 1 :
         name="yüz" ;
         break ;
       case 2:
         name="ikiyüz" ;
         break ;
       case 3 :
         name="üçyüz" ;
         break ;
       case 4 :
         name="dörtyüz" ;
         break ;
       case 5 :
         name="beşyüz" ;
         break ;
        case 6 :
         name="altıyüz" ;
         break ;
       case 7 :
         name="yediyüz" ;
         break ;
       case 8 :
         name="sekizyüz" ;
         break ;
        case 9 :
         name="dokuzyüz" ;
         break ;
        default :
         break ;
     }
     digit=2 ;
     continue ; // for için, ama ifin içinde kaldı şu an
   }   
  else if (digit==2) {
     switch i 
     {
       case 1 :
         name+="on" ;
         break ;
       case 2:
         name+="yirmi" ;
         break ;
       case 3 :
         name+="otuz" ;
         break ;
       case 4 :
         name+="kırk" ;
         break ;
       case 5 :
         name+="elli" ;
         break ;
        case 6 :
         name+="altmış" ;
         break ;
       case 7 :
         name+="yetmiş" ;
         break ;
       case 8 :
         name+="seksen" ;
         break ;
        case 9 :
         name+="doksan" ;
         break ;
        default :
         break ;
     }
    digit=1 ;
    continue ; //for için
    } //if için
   
   else {
     switch i 
     {
       case 1 :
         name+="bir" ;
         break ;
       case 2:
         name+="iki" ;
         break ;
       case 3 :
         name+="üç" ;
         break ;
       case 4 :
         name+="dört" ;
         break ;
       case 5 :
         name+="beş" ;
         break ;
        case 6 :
         name+="altı" ;
         break ;
       case 7 :
         name+="yedi" ;
         break ;
       case 8 :
         name+="sekiz" ;
         break ;
        case 9 :
         name+="dokuz" ;
         break ;
        default :
         break ;
     }
     continue ; //for için
   }
 } //for için
 std :: cout << name ;
 } // main için
     
