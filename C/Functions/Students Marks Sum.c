nclude <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int marks_summation(int* marks, int number_of_students, char gender) {
    int sum=0;
    if(gender=='b'){
        for(int i=0;i<number_of_students;i++){
            if(i==0 || i%2==0){
                sum=sum+marks[i];
            }
        }
    }
    else if(gender=='g'){
        for(int i=0;i<number_of_students;i++){
            if(i!=0 && i%2!=0){
                sum=sum+marks[i];
            }
        }
    }
    return sum;
}
