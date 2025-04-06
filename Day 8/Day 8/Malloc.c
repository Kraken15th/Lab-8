#include <curses.h>
#include <stdio.h>
#include <stdlib.h>

main(){

 char userchar;
 int count=0;
 char *name;
 printf("Enter Your Name : \n");
 userchar=getch();
 while (userchar !=13){
 if(count==0){
 name=malloc(1);
}
 else {
 name=realloc(name,count+1);
 userchar=getch();
}

 name[count]=userchar;
 count++;

}

 for(int i=0; i<count; i++){
 printf("%c", name[count]);

}



}
