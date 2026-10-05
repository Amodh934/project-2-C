#student marks program
#include<stdio.h>
int main() {
	int choice;
	int mark1, mark2, mark3;
	int total_marks, average_marks;
	
	while(1) {
		//menu
		printf("\n1. Enter marks");
        printf("\n2. Calculate total");
        printf("\n3. Calculate average");
        printf("\n4. Check grade");
        printf("\n5. Exit");
        printf("\nEnter choice: ");

		
		scanf("%d",&choice);
		
		switch (choice) {
			case 1:
	            printf("enter marks: ");
	            scanf("%d %d %d", &mark1, &mark2, &mark3);
                break;
	        case 2:
	        	total_marks=mark1+mark2+mark3;
	        	printf("total marks= %d",total_marks);
                break;
	        case 3:
	        	average_marks=(mark1+mark2+mark3)/3;
	        	printf("average marks= %d",average_marks);
                break;
	        case 4:
				if(average_marks>=90) {
					printf("A");
				}
				else if(average_marks>=75) {
					printf("B");
			    }
				else if(average_marks>=50) {
					printf("C");
				}
				else if(average_marks<50) {
					printf("fail");
				}
				else {
					printf("Absent in exam");
				}
                break;
			case 5:
				printf("exit program ended.");		
                return 0;    
		}	
	}
	return 0;
}