#include<stdio.h> 

 int k=0; 
 struct stud 
 { 
        int rn; 
        char name[30]; 
        int m1,m2,m3,total; 
        float avg; 
        char grade,result; 
 }s[30]; 
        void main() 
 { 
     int name;
     int no,roll=1,i; 
       
        printf("Enter No of Students : "); 
        scanf("%d",&no);
        
        for(i=0;i<no;i++) 
        { 
              
             s[k].rn=roll; 
            
             printf("\nEnter the Student Roll Number : %d ",s[k].rn); 
             printf("\nEnter the Student Name :"); 
             scanf("%d",&s[k].name);
             fflush(stdin);
             gets(s[k].name);
             printf("Enter the Three Marks : "); 
             scanf("%d",&s[k].m1); 
             scanf("%d",&s[k].m2); 
             scanf("%d",&s[k].m3); 
             if(s[k].m1>=35 && s[k].m2>=35 && s[k].m3>=35) 
               { 
                  s[k].result='P'; 
               } 
             else 
              { 
                  s[k].result = 'F'; 
              } 
                  s[k].total = s[k].m1+s[k].m2+s[k].m3; 
                  printf("The Total is : %d",s[k].total); 
                  s[k].avg=s[k].total/3; 
                  if(s[k].avg>=60) 
                   { 
                       if(s[k].result == 'P') 
                          { 
                               s[k].grade = 'A'; 
                          } 
                         else 
                         { 
                                s[k].grade = 'N'; 
                         } 
                   } 
                  else if(s[k].avg>=50) 
                          { 
                               if(s[k].result == 'P') 
                                 { 
                                        s[k].grade = 'B'; 
                                  } 
                                else 
                                 { 
                                        s[k].grade = 'N'; 
                                 } 
                          } 
                  else if(s[k].avg>=35) 
                         { 
                              if(s[k].result == 'P') 
                                { 
                                      s[k].grade = 'C'; 
                                } 
                              else 
                               { 
                                      s[k].grade = 'N'; 
                               } 
                         } 
                                      
                                       k++; 
                                       roll++; 
            } 
                        printf("\n*******************************************************"); 
                        printf("\n                      STUDENT MARKLIST "); 
                        printf("\n*******************************************************"); 
                        printf("\nROLL \tNAME   MARK1 MARK2 MARK3 TOTAL RESULT Average GRADE"); 
                        for(i=0;i<no;i++) 
                            { 
                               printf("\n%d\t%s   %d    %d    %d    %d    %c    %0.1f     %c",s[i].rn,s[i].name,s[i].m1,s[i].m2,s[i].m3,s[i].total,s[i].result,s[i].avg,s[i].grade); 
                            } 
                           
                               
 }  