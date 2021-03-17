#include "snowman.hpp"
#include "strings.hpp"
#include <string>
#include <stdexcept>
#include <iostream>
#include <array>
#include <cstring>
#include <cstdlib>
#include <exception>
#include <cassert>

int const n8=8;
int const n10=10;
int const n5=5;
int const n1=1;
int const n2=2;
int const n3=3;
int const n4=4;
int const n6=6;
int const n7=7;

using namespace std;
   void checkInput(int num){
        int cur=0;
        for( int i=0;i<n8;i++){
            cur=num%n10;
         if( cur>n4 || cur<n1){
          throw out_of_range("invalid input");

          }
         num=num/n10;

          }
       if(num>0){
        throw out_of_range("invalid input-n is too long");
      }

   }
namespace ariel{
    string snowman(int n ){
        checkInput(n);
        string input=to_string(n);
        int la=input.at(n4)-'0';
        int ra=input.at(n5)-'0';
        string hats=hat.at(input.at(0)-'0');
        string head="(";
        head.append(leye.at(input.at(n2)-'0'));
        head.append(nose.at(input.at(n1)-'0'));
        head.append(reye.at(input.at(n3)-'0'));
        head.append(")");
        string larms=larm.at(input.at(n4)-'0');
        string rarms=rarm.at(input.at(n5)-'0');
        string tors=torso.at(input.at(n6)-'0');
        string bot=botom.at(input.at(n7)-'0');


        string lhe;
        string rhe;
        string rt;
        string lt;
        
        string snowM;
        

        switch (la)
        {

        case 2:
            lhe= "\\";
            lt=" ";
            break;
        
        default:
           lt=larms;
            lhe=" ";
            break;
        }

        switch (ra)
        {
  
        case 2:
            rhe="/";

            break;

        
        default:
           rt=rarms;
            rhe=" ";
            break;
        }
        
        snowM.append(hats+lhe+head+rhe+"\n"+lt+tors+rt+"\n"+bot);
       return snowM;
    }  
   

}





