#include <stdio.h>
float radius,form,form1;
float circumference(float radius){
    form= 2*3.14*radius;
    return form;
}
float area(float radius){
    form1-=3.14*radius*radius;
    return form1;
}
int main(){
    printf("Enter the radius :\n");
    scanf("%f",&radius);
    printf("The circumference of the circle is : \n %.2f\n",circumference(radius));
    printf("The area of the circle is : \n %.2f",area(radius));
}
// Fibonacci series :-    

#include <stdio.h>
int main(){
    int n,first_num=0,sec_num=1,next;
    printf("hggggggg \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i<=1){
            next=i;
        }
        else{
            next=first_num+sec_num;
            first_num=sec_num;
            sec_num=next;
        }
    }
    printf("%d",next);
}

// Armstrong number 
#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate the sum of powered digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if it's an Armstrong number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

// Multiplication of array 
#include <stdio.h>
int main(){
    int arr[4][4],arr2[4][4];
    printf("Enter the elements in the array : \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Here is your 2D array  : \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",2*arr[i][j]);
        }
        printf("\n");
    }
}

// Transpose of a Matrix :--

#include <stdio.h>
int main(){
    int arr[3][3];
    printf("Enter the elements in the array: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("This is your originl matrix \n");
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Below Given matrix is a Transpose Matrix : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}

// Insert element 
#include <stdio.h>

int main() {
    int arr[100]; // Declare an array (you can adjust the size as needed)
    int n; // Number of elements in the array
    int element; // Element to be inserted

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read elements from user input
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Insert the element at the end
    arr[n] = element;
    n++; // Increase the size of the array

    printf("Updated array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print elements
    }

    return 0;
}

