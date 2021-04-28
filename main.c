#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

void filestat1();
void filestat2();
void filetime1();
void filetime2();
void sizecmp();
void blockcmp();
void datecmp();
void timecmp();

int main(){
    filestat1();
    filestat2();
    filetime1();
    filetime2();
    sizecmp();
    blockcmp();
    datecmp();
    timecmp();
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1(){
    stat("./text1", &stat1); 
}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(){
    stat("./text2", &stat2);
}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1() {
    time1 = localtime(&stat1.st_mtime);
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2() {
    time2 = localtime(&stat2.st_mtime);
}

//두 개의 파일 크기를 비교하는 함수 작성
void sizecmp(){
	int file1_size = stat1.st_size, file2_size = stat2.st_size;

	printf("size compare\n");

	if (file1_size > file2_size) {
        printf("text1 is bigger\n");
    }
		
	else if (file2_size > file1_size) {
        printf("text2 is bigger\n");
    }
		
	else {
        printf("sizes are equal\n");
    }
		
	printf("\n");
}


//두 개의 파일 블락 수를 비교하는 함수 작성
void blockcmp(){
	int file1_block = stat1.st_blocks, file2_block = stat2.st_blocks;

	printf("block compare\n");

	if (file1_block > file2_block) {
        printf("text1 is bigger\n");
    }

	else if (file2_block > file1_block){
        printf("text2 is bigger\n");
    }
    
	else {
        printf("sizes are equal\n");
    }
	printf("\n");
}



//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp() {

    printf("date compare\n");

    time1 = localtime(&stat1.st_mtime);
    int time1_mon = time1->tm_mon;
    int time1_day = time1->tm_mday;
    int time1_year = time1->tm_year;

    time2 = localtime(&stat2.st_mtime);
    int time2_mon = time2->tm_mon;
    int time2_day = time2->tm_mday;
    int time2_year = time2->tm_year;

    if (time1_year < time2_year) {
        printf("text1 is early\n");
    }
    else if (time1_mon < time2_mon) {
        printf("text2 is early\n");
    }
    else
    {
        if (time1_day < time2_day) {
            printf("text1 is early\n");
        }
        else if (time1_day > time2_day) {
            printf("text2 is early\n");
        }
        else {
            printf("same date\n");
        }
    }
    printf("\n")
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void timecmp(){

    printf("time compare\n");

    time1 = localtime(&stat1.st_mtime);
    int time1_hour = time1->tm_hour;
    int time1_min = time1->tm_min;
    int time1_sec = time1->tm_sec;

    int time2 = localtime(&stat2.st_mtime);
    int time2_hour = time2->tm_hour;
    int time2_min = time2->tm_min;
    int time2_sec = time2->tm_sec;

    if (time1_hour < time2_hour) {
        printf("text1 is early\n");
    }
    else if (t1_hour > t2_hour) {
        printf("text2 is early\n");
    }
    else
    {
        if (time1_min < time2_min) {
            printf("text1 is early\n");
        }
        else if (time1_min > time2_min) {
            printf("text2 is early\n");
        }
        else {
            printf("same time\n");
        }
    }
    printf("\n");

    
}