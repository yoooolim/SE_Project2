﻿#include <stdio.h>
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
void filetime1(){
    
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(){
    
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

	if (block1 > block2) {
        printf("text1 is bigger\n");
    }

	else if (block2 > block1){
        printf("text2 is bigger\n");
    }
    
	else {
        printf("sizes are equal\n");
    }
	printf("\n");
}


//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp(){
    
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void timecmp(){
    
}