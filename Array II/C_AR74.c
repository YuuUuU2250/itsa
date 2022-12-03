#include <stdio.h>
#include <string.h>

struct student{
    int id;
    char name[5];
    char major[5];
};

struct student stu[5] = {
    {.id = 123, .name = "Tom", .major = "DTGD"},
    {.id = 456, .name = "Cat", .major = "CSIE"},
    {.id = 789, .name = "Nana", .major = "ASIE"},
    {.id = 321, .name = "Lim", .major = "DBA"},
    {.id = 654, .name = "Won", .major = "FDD"}
};

int main(){
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        int type;
        scanf("%d", &type);
        if(type == 1){
            int ID;
            scanf("%d", &ID);
            for(int j=0; j<5; j++){
                if(stu[j].id == ID){
                    printf("%d %s %s\n", stu[j].id, stu[j].name, stu[j].major);
                    break;
                }
            }
        }
        else if(type == 2){
            char NAME[5];
            scanf("%s", &NAME);
            for(int j=0; j<5; j++){
                if(strcmp(stu[j].name, NAME) == 0){
                    printf("%d %s %s\n", stu[j].id, stu[j].name, stu[j].major);
                    break;
                }
            }
        }
        else{
            char MAJOR[5];
            scanf("%s", &MAJOR);
            for(int j=0; j<5; j++){
                if(strcmp(stu[j].major, MAJOR) == 0){
                    printf("%d %s %s\n", stu[j].id, stu[j].name, stu[j].major);
                    break;
                }
            }
        }
    }
}