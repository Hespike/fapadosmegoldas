#include <stdio.h>
#include <stdlib.h>



int main(){
    char bemenet[100] = "Dear sir, I hope this letter finds you in good health ";
    char kimenet[] = "";
    char str[20];
    int i = 0;
    int k = 0;
    int j;
    int x = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;
    int x5 = 0;
    int x6= 0;
    int x7 = 0;
    int szamlalo = 0;
    int szobetu = 0;
    char rev[100];
    char rev2[100];
    char rev3[100];
    char rev4[100];
    char rev5[100];
    char rev6[100];
    char rev7[100];
    


    //Elkezdem kiszámolni a szavak hosszát
    for (i = 0; bemenet[i]; ++i);


    for(k=0; k< i-1; k++) {                                 
        if (bemenet[k] == ' ') {
            szamlalo++;
            printf("%d", szobetu);
            szobetu = 0;
        }
        else{
            szobetu++;
        }
    }
    printf("%d", szobetu);              
//megvan a szavak hossza
    

//kiiaratni a szavakat fordítva

//kezdi, lényegében első szó
for (i = 0; bemenet[i] != ' ' && bemenet[i] != '\0'; ++i);         
    for (j = 0, x = i; i-- > 0; ++j) {     
        rev[j] = bemenet[i];           
    }                           
    rev[j] = 0;   
//második szó
for (i = x+1; bemenet[i] != ' ' && bemenet[i] != '\0'; ++i);         
    for (j = 0, x2 = i; i-- > x; ++j) {     
        rev2[j] = bemenet[i];           
    }                           
    rev2[j] = 0;   
//harmadik szó
    for (i = x2+1; bemenet[i] != ' ' && bemenet[i] != '\0'; ++i);         
    for (j = 0, x3 = i; i-- > x2; ++j) {     
        rev3[j] = bemenet[i];           
    }                           
    rev3[j] = 0;  
//negyedik szó
    for (i = x3+1; bemenet[i] != ' ' && bemenet[i] != '\0'; ++i);         
    for (j = 0, x4 = i; i-- > x3; ++j) {     
        rev4[j] = bemenet[i];           
    }                           
    rev4[j] = 0;  
//ötödik szó
        for (i = x4+1; bemenet[i] != ' ' && bemenet[i] != '\0'; ++i);         
    for (j = 0, x5 = i; i-- > x4; ++j) {     
        rev5[j] = bemenet[i];           
    }                           
    rev5[j] = 0;  
//hatodik szó
        for (i = x5+1; bemenet[i] != ' ' && bemenet[i] != '\0'; ++i);         
    for (j = 0, x6 = i; i-- > x5; ++j) {     
        rev6[j] = bemenet[i];           
    }                           
    rev6[j] = 0;  
//hetedik szó
        for (i = x6+1; bemenet[i] != ' ' && bemenet[i] != '\0'; ++i);         
    for (j = 0, x7 = i; i-- > x6; ++j) {     
        rev7[j] = bemenet[i];           
    }                           
    rev7[j] = 0;  

    printf("%s %s %s %s %s %s %s", rev, rev2, rev3, rev4, rev5, rev6, rev7);
    printf("%s", bemenet);
 




    return 0;
}