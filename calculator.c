#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

float sum (float*, float*);

float sub (float*, float*);

float mul (float*, float*);

float divide (float*, float*);

int dec (int*, int*);

float recursionTWO(float c){
   if(c == 2){
      return c;
   } else if(c == 0){
      return c;
   }
   return recursionTWO(c/2);
}

float recursionTWOMINUS(float c){
   if(c == 0.00048828125){
      return c = 1;
   } else if(c == 0){
      return c = 0;
   }
   return recursionTWOMINUS(c/2);
}

float recursionTHREE(float c){
   if(c == 3){
      return c;
   } else if(c == 0){
      return c;
   }
   return recursionTHREE(c/3);
}

float recursionFOUR(float c){
   if(c == 4){
      return c;
   } else if(c == 0){
      return c;
   }
   return recursionFOUR(c/4);
}

float recursionFIVE(float c){
   if(c == 5){
      return c;
   } else if(c == 0){
      return c;
   }
   return recursionFIVE(c/5);
}

int factorial(int c)
{
   if (c <= 1) {
      return 1;
   }
   return factorial(c - 1) * c;
}

int main(){
    printf("1 - sum\n");
    printf("2 - subtraction\n");
    printf("3 - multiply\n");
    printf("4 - divide\n");
    printf("5 - divide with decimals\n");
    printf("6 - is the number an exact power of two\n");
    printf("7 - is the number an exact MINUS power of two\n");
    printf("8 - is the number an exact power of three\n");
    printf("9 - is the number an exact power of four\n");
    printf("10 - is the number an exact power of five\n");
    printf("11 - factorial of the number\n");
    printf("12 - logarithm of the number(only integers)\n");
    printf("13 - square number\n");
    printf("14 - cube number\n");
    printf("15 - square root of the number\n");
    printf("16 - cube root of the number\n");
    printf("17 - matrix addition\n");
    printf("18 - matrix subtraction\n");
    printf("19 - matrix multiply\n");
    printf("20 - 1/x\n");
    printf("21 - pi number\n");
    printf("22 - 10 to the power of x\n");
    printf("23 - find the hypotenusen of the pythagorean triangle\n");
    printf("24 - find the cathetus of the pythagorean triangle\n");
    printf("25 - multiply matrix by number\n");
    int n;
    printf("Choose the option:\n");
    scanf("%d", &n);
    if(n < 1){
        printf("Incorrect request. Try again.");
    }
    if(n > 600){
        printf("Incorrect request. Try again.");
    }
    if(n == 1){
        float x;
        float y;
        float result;
        printf("Enter the first value:\n");
        scanf("%f", &x);
        printf("Enter the second value:\n");
        scanf("%f", &y);
        result = sum(&x, &y);
        printf("Result: %.2f\n", result);
    }
    if(n == 2){
        float x;
        float y;
        float result;
        printf("Enter the first value:\n");
        scanf("%f", &x);
        printf("Enter the second value:\n");
        scanf("%f", &y);
        result = sub(&x, &y);
        printf("Result: %.2f\n", result);
    }
    if(n == 3){
        float x;
        float y;
        float result;
        printf("Enter the first value:\n");
        scanf("%f", &x);
        printf("Enter the second value:\n");
        scanf("%f", &y);
        result = mul(&x, &y);
        printf("Result: %.2f\n", result);
    }
     if(n == 4){
        float x;
        float y;
        float result;
        printf("Enter the first value:\n");
        scanf("%f", &x);
        printf("Enter the second value:\n");
        scanf("%f", &y);
        result = divide(&x, &y);
        printf("Result: %.2f\n", result);
    }
    if(n == 5){
        int x;
        int y;
        int result;
        printf("Enter the first value:\n");
        scanf("%d", &x);
        printf("Enter the second value:\n");
        scanf("%d", &y);
        result = dec(&x, &y);
        printf("Result: %d\n", result);
    }
    if(n == 6){
        float c;
        printf("Enter the value:\n");
        scanf("%f", &c);
        if(recursionTWO(c) == 0){
            printf("NO");
        }
        if(recursionTWO(c) == 2){
            printf("YES");
        }
    }
    if(n == 7){
        float c;
        printf("Enter the value(max 0.5, min 0.00048828125):\n");
        scanf("%f", &c);
        if(recursionTWOMINUS(c) == 0){
            printf("NO");
        }
        if(recursionTWOMINUS(c) == 1){
            printf("YES");
        }
    }
    if(n == 8){
        float c;
        printf("Enter the value:\n");
        scanf("%f", &c);
        if(recursionTHREE(c) == 0){
            printf("NO");
        }
        if(recursionTHREE(c) == 3){
            printf("YES");
        }
    }
    if(n == 9){
        float c;
        printf("Enter the value:\n");
        scanf("%f", &c);
        if(recursionFOUR(c) == 0){
            printf("NO");
        }
        if(recursionFOUR(c) == 4){
            printf("YES");
        }
    }
    if(n == 10){
        float c;
        printf("Enter the value:\n");
        scanf("%f", &c);
        if(recursionFIVE(c) == 0){
            printf("NO");
        }
        if(recursionFIVE(c) == 5){
            printf("YES");
        }
    }
    if(n == 11){
        int c;
        printf("Enter the value:\n");
        scanf("%d", &c);
        printf("Factorial: %d\n", factorial(c));
    }
    if(n == 12){
        int x = 1;
        int c;
        int f;
        printf("Enter the base:\n");
        scanf("%d", &c);
        printf("Enter the argument:\n");
        scanf("%d", &f);
        while(f != c){
            f = f / c;
            x++;
        }
        printf("Logarithm: %d\n", x);
    }
    if(n == 13){
        float c;
        float square;
        printf("Enter the value:\n");
        scanf("%f", &c);
        square = c * c;
        printf("Square of the number is: %.2f\n", square);
    }
    if(n == 14){
        float c;
        float cube;
        printf("Enter the value:\n");
        scanf("%f", &c);
        cube = c * c * c;
        printf("Cube of the number is: %.2f\n", cube);
    }
    if(n == 15){
        float c;
        printf("Enter the value:\n");
        scanf("%f", &c);
        printf("Square root of the number is: %.2f\n", sqrt(c));
    }
    if(n == 16){
        float c;
        printf("Enter the value:\n");
        scanf("%f", &c);
        printf("Cube root of the number is: %.2f\n", cbrt(c));
    }
    if(n == 17){
        int a, b, c, d;
        printf("Enter the number of columns in the first matrix:\n");
        scanf("%d", &a);
        printf("Enter the number of strings in the first matrix:\n");
        scanf("%d", &b);
        printf("Enter the number of columns in the second matrix:\n");
        scanf("%d", &c);
        printf("Enter the number of strings in the second matrix:\n");
        scanf("%d", &d);
        if(a != c && b != d){
            printf("Addition not possible (matrices must be the same size)\n");
            return 0;
        }
        float arr[a][b];
        float arr1[c][d];
        float arr2[a][d];
        int t,y,u,i,o,p;
        printf("Enter the first matrix:\n");
        for(t = 0; t < a; t++){
            for(y = 0; y < b; y++){
                scanf("%f", &arr[t][y]);
            }
        }
        printf("Enter the second matrix:\n");
        for(u = 0; u < c; u++){
            for(i = 0; i < d; i++){
                scanf("%f", &arr1[u][i]);
            }
        }
        for(o = 0; o < a; o++){
            for(p = 0; p < d; p++){
                arr2[o][p] = arr[o][p] + arr1[o][p];
            }
        }
        for(o = 0; o < a; o++){
            printf("\n");
            for(p = 0; p < d; p++){
                printf("%.2f\t", arr2[o][p]);
            }
        }
    }
    if(n == 18){
        int a, b, c, d;
        printf("Enter the number of columns in the first matrix:\n");
        scanf("%d", &a);
        printf("Enter the number of strings in the first matrix:\n");
        scanf("%d", &b);
        printf("Enter the number of columns in the second matrix:\n");
        scanf("%d", &c);
        printf("Enter the number of strings in the second matrix:\n");
        scanf("%d", &d);
        if(a != c && b != d){
            printf("Addition not possible (matrices must be the same size)\n");
            return 0;
        }
        float arr[a][b];
        float arr1[c][d];
        float arr2[a][d];
        int t,y,u,i,o,p;
        printf("Enter the first matrix:\n");
        for(t = 0; t < a; t++){
            for(y = 0; y < b; y++){
                scanf("%f", &arr[t][y]);
            }
        }
        printf("Enter the second matrix:\n");
        for(u = 0; u < c; u++){
            for(i = 0; i < d; i++){
                scanf("%f", &arr1[u][i]);
            }
        }
        for(o = 0; o < a; o++){
            for(p = 0; p < d; p++){
                arr2[o][p] = arr[o][p] - arr1[o][p];
            }
        }
        for(o = 0; o < a; o++){
            printf("\n");
            for(p = 0; p < d; p++){
                printf("%.2f\t", arr2[o][p]);
            }
        }
    }
    if(n == 19){
        int a, b, c, d;
        printf("Enter the number of strings in the first matrix:\n");
        scanf("%d", &a);
        printf("Enter the number of columns in the first matrix:\n");
        scanf("%d", &b);
        printf("Enter the number of strings in the second matrix:\n");
        scanf("%d", &c);
        printf("Enter the number of columns in the second matrix:\n");
        scanf("%d", &d);
        float arr[a][b]; // 2 x 3 & 3 x 4 => 2 x 4
        float arr1[c][d];
        int g, j, l, p, f, y;
        if (b != c) {
            printf("Multiplication is not possible. The number of columns of the first matrix must be equal to the number of strings of the second matrix.\n");
            return 0;
        }
        float arr2[a][d];
        printf("Enter the first matrix:\n");
        for(g = 0; g < a; g++){
            for(j = 0; j < b; j++){
                scanf("%f", &arr[g][j]);
            }
        }
        printf("Enter the second matrix:\n");
        for(l = 0; l < c; l++){
            for(p = 0; p < d; p++){
                scanf("%f", &arr1[l][p]);
            }
        }
        for (int f = 0; f < a; f++) {
            for (int y = 0; y < d; y++) {
                arr2[f][y] = 0;
                for (int k = 0; k < b; k++) {
                    arr2[f][y] += arr[f][k] * arr1[k][y];
                }
            }
        }
        for(f = 0; f < c; f++){
            printf("\n");
            for(y = 0; y < d; y++){
                printf("%.2f\t", arr2[f][y]);
            }
        }
    }
        if(n == 20){
        float x = 1;
        float y;
        printf("Enter the value:\n");
        scanf("%f", &y);
        float result;
        result = x / y;
        printf("Result: %.2f\n", result);
    }

        if(n == 21) {
        float pi = 3.14159265359;
        float result;
        int x;
        printf("Choose the action with pi:\n");
        printf("1 - multiply\n");
        printf("2 - divide\n");
        scanf("%d", &x);
        if(x == 1){
            float x;
            printf("Enter the value:\n");
            scanf("%f", &x);
            result = pi * x;
            printf("Result: %f\n", result);
        }
        if(x == 2){
            float x;
            printf("Enter the value:\n");
            scanf("%f", &x);
            result = pi / x;
            printf("Result: %f\n", result);
        }
     }
     if(n == 22){
        float x;
        float y = 10;
        printf("Enter the degree:\n");
        scanf("%f", &x);
        printf("Result: %.2f\n", pow(y, x));
     }
     if(n == 23){
        float x;
        float y;
        float z;
        printf("Enter the first cathetus:\n");
        scanf("%f", &x);
        printf("Enter the second cathetus:\n");
        scanf("%f", &y);
        z = x * x + y * y;
        printf("The hypotenuse is: %.2f\n", sqrt(z));
     }
     if(n == 24){
        float x;
        float y;
        float z;
        printf("Enter the hypotenuse:\n");
        scanf("%f", &z);
        printf("Enter the cathetus:\n");
        scanf("%f", &y);
        x = z * z - y * y;
        printf("The cathetus is: %.2f\n", sqrt(x));
     }
     if(n == 25){
        int a, b, c, d;
        printf("Enter the number of strings in the matrix:\n");
        scanf("%d", &a);
        printf("Enter the number of columns in the matrix:\n");
        scanf("%d", &b);
        float arr[a][b];
        printf("Enter the matrix:\n");
        for(c = 0; c < a; c++){
            for(d = 0; d < b; d++){
                scanf("%f", &arr[c][d]);
            }
        }
        float x;
        printf("Enter the number, which you want to multiply the matrix:\n");
        scanf("%f", &x);
        for(c = 0; c < a; c++){
            for(d = 0; d < b; d++){
                arr[c][d] = arr[c][d] * x;
            }
        }
        for(c = 0; c < a; c++){
            printf("\n");
            for(d = 0; d < b; d++){
                printf("%.2f\t", arr[c][d]);
            }
        }
     }
    return 0;
}
float sum (float* a, float* b){
    return *a + *b;
}

float sub (float* a, float* b){
    return *a - *b;
}

float mul (float* a, float* b){
    return *a * *b;
}

float divide (float* a, float* b){
    return *a / *b;
}

int dec (int* a, int* b){
    return *a % *b;
}