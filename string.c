//# Differnce between different input functions for string

#include<stdio.h>
#include<string.h>
// void main(){
//     char name[12];
//     printf("Enter name : ");
//     fgets(name, sizeof(name), stdin);
//     printf(" name = %s", name);
// }
// void main(){
//     char name[12];
//     printf("Enter name : ");
//     gets(name);
//     printf(" name = %10.5s", name);
// }
// void main(){
//     char name[12];
//     printf("Enter name : ");
//     gets(name);
//     printf(" name = %s", name);
// }
// void main(){
//     char name[7];
//     printf("Enter name : ");
//     scanf("%s", name);
//     printf(" name = %s", name);
// }
// void main(){
//     char name[7];
//     printf("Enter name : ");
//     scanf("%s", name);
//     printf(" name = %.5s", name);
// }

// void main(){
//     char fname[14] = "Vidushi ";
//     char lname[6] = "Saini";
//     strcat(fname, lname);
//     printf("Name = %s", fname);
// }
// void main(){
//     char fname[14] = "Vidushi ";
//     char lname[6] = "Saini";
//     strncat(fname, "lname", 2);
//     fname[11];                                       \\ must step
//     printf("Name = %s", fname);
// }

// void main(){
//     char one[6] = "Hello";
//     // char one[6] = "HeLlo";
//     char two[8] = "Hello";
//     // char two[8] = "Hear";
//     // char two[8] = "Hear";
//     int result = strcmp(one, two);
//     if(result == 0 ){
//         printf("Equal = %d", result);
//     }
//     else if(result > 0 ){
//         printf("first is greater = %d", result);
//     }
//     else{
//         printf("second is greater = %d", result);
//     }
// }

// void main(){
//     char name[8] = "Vidushi", ch[2];
//     int length = strlen(name), i = 0;
//     for(i = 0; i < length/2; i++){
//         ch[0] = name[i];
//         name[i] = name[length - 1 - i];
//         name[length - 1 - i] = ch[0];
//     }
//     printf("reverse name = %s",name);
// }

// void main(){
//     char name[8] = "Kanak", ch[2];
//     int length = strlen(name), i = 0;
//     char initialName[8];
//     strcpy(initialName, name);
//     for(i = 0; i < length/2; i++){
//         ch[0] = name[i];
//         name[i] = name[length - 1 - i];
//         name[length - 1 - i] = ch[0];
//     }
//     printf("name = %s\n", name);
//     printf("inital name = %s\n", initialName);
//     if(strcmp(name, initialName) == 0)
//     {
//         printf("name %s is a palindrome",name);
//     }
//     else{
//         printf("name %s is not a palindrome",name);
//     }
// }
void main(){
    char name[8] = "Vidushi";
    int i = 0;
    for(i = 0; name[i] != '\0'; i++){
        if(name[i] >= 65 && name[i] <= 90){
            name[i] = name[i] + 32;
        }
        else if(name[i] >= 90 && name[i] <= 116){
            name[i] = name[i] - 32;
        }
        else{
            printf("not an alphabet");
        }
    }
    printf("name = %s",name);
}
