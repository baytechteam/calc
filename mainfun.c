#include<stdio.h>
void putn(int );
void put_c(char );
void store_disp_1(int );
void store_disp_2(char );
int max1,max2;
int cal(int ,int );
int final_result;  
int store_nstack[20];char store_cstack[20];
int top1=0,top2=0,result=0;
main()
{

while(1)
{
int var;
char k;
printf("\n enter number, enter operation to perform \n");
scanf("%d",&var);
scanf("%c",&k);
putn(var);
put_c(k);

//printf("\n entered no is %d",var);
//printf("\n entered c is %c",k);
}

}
//body of putn()
void putn(int var)
{
store_disp_1(var);
}
//body of put_c()
void put_c(char ch)
{
store_disp_2(ch);
}
//body of disp1()
void store_disp_1(int var)
{
store_nstack[++top1]=var;
printf("\n entered no is %d",store_nstack[top1]);
}
//body of disp2()
void store_disp_2(char ch)
{
store_cstack[++top2]=ch;
printf("\n entered operator is %c",store_cstack[top2]);
if(store_cstack[top2]=='=')
{

final_result=cal(1,1);
printf("\n your result is %d",final_result);
}

printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");

//goto cpoint;
//}
}

//final_result=cal(top1,top2);
//printf("\n %d",final_result);
//}
//}
//body of cal()

int cal(int top3,int top4)
{
int result1;
result=store_nstack[top3];
//result=store_nstack[top3--];
while(top4!=top2)
{
point:switch(store_cstack[top4])
      {
        case '+':
               result=result+store_nstack[++top3];
                 //top3++;
                 top4++;
                 goto point;
                 

         case '-':
                result=result-store_nstack[++top3];
                //top3--;
                top4++;
                goto point;
                
          
          case '*':
                 result=result*store_nstack[++top3];
                 //top3--;
                  top4++;
                  goto point;
                  
}
}
                 result1=result;

                  return result1;
}
