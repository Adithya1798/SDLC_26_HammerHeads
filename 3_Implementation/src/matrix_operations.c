/**
 * @file matrix_operations.c
 * @author Hammer Heads (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "matrix_operations.h"

/**
 * @brief This function determines the type of input matrix
 * @param matrix  calculator

 * 
 */

 void detertype( float ** matrix ,int n){

 int scaler(float ** m,int n){
     int i,j;
     int point=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             if(i!=j && matrix[i][j]!=0)
        {
            point=1;
            break;
        }
        if(i==j && matrix[i][j]!=matrix[i][j])
        {
            point=1;
            break;
        }

     }

   }
   return point;
 }

 int symmetric(float ** m,int n){

    int symmetric=0;
    int skew=0;

             for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
               if(m[i][j] != m[j][i]){
                    symmetric=1;
                    break;
                    }
                }
             }
             return symmetric;

 }

 int upper_triangular(float ** matrix, int n){

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
         if(matrix[i][j]!=0){ return 1; }
    }
    }

   return 0;
 }

  int lower_triangular(float ** matrix, int n){

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
         if(matrix[i][j]!=0){ return 1; }
    }
    }

   return 0;
 }

 int unity(float ** matrix,int n){
     int flag=0;

 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j && matrix[i][j]!=1){
            flag=1;
            break;
        }
       else if(i!=j && matrix[i][j]!=0){
            flag=1;
            break;
        }
    }
 }
 printf("%d",flag);
 return flag;
}


int zero(float ** matrix,int n){
int flag=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(matrix[i][j]!=0){
                flag=1;
            break;
        }
    }
}
return flag;
}

int diagonal(float ** matrix, int n){
int flag=1;
for(int i=0;i<n;i++){
        int flag=1;
    for(int j=0;j<n;j++){
        if(i==j && matrix[i][j]==0){
         flag=0;
        }
        else if(i!=j && matrix[i][j]!=0){
            flag=0;
        }
    }
}
return flag;
}

int orthogonal(float ** matrix,int n){

int result[n][n];
for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    result[i][j] = matrix[j][i];

int prod[n][n];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {

    int sum = 0;
    for (int k = 0; k < n; k++)
    {
        sum = sum + (matrix[i][k] * matrix[j][k]);
    }

    prod[i][j] = sum;
    }
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
    if (i != j && prod[i][j] != 0)
        return 1;
    if (i == j && prod[i][j] != 1)
        return 1;
    }
}

return 0;
}

 if(0==scaler(matrix,n)){
  printf("\n The given matrix is SCALER!!..");
  printf("\n");
 }
 if(0==symmetric(matrix,n)){
               printf("\n The given matrix is Symmetric!!!.. ");
               printf("\n");
 }

 if (0==upper_triangular(matrix,n)){
         printf("\n The given matrix is Upper  Triangular!!..");
 }
 if (0==lower_triangular(matrix,n)){
         printf("\n The given matrix is Lower Triangular!!..");
 }

 if(0==unity(matrix,n)){
    printf("\n The given matrix is Unity!!!.. ");
               printf("\n");
 }
 if(0==zero(matrix,n)){
    printf("\n The given matrix is Zero!!!.. ");
    printf("\n");
 }
 if(1==diagonal(matrix,n)){
    printf("\n The given matrix is Diagonal!!!.. ");
    printf("\n");
 }
if(0== orthogonal(matrix,n)){
    printf("\n The matrix is Orthogonal!!..");
    printf("\n");
}
 }



/**
 * @brief This function frees the dynamically allocated memory in the structure
 *
 * @param m
 */


void free_matrix_structure(mat *m){
    free(m->matrix_1);
    free(m->matrix_2);
}

/**
 * @brief A function to dynamically allocate the memory for the matrix
 *
 * @param matrix
 * @param n
 */
void dynamic_alloc_mat(float **matrix,int n){
    matrix = (float **)calloc(n,sizeof(float));
    for(int i=0;i<n;i++){
        matrix[i] = (float *)calloc(n,sizeof(float));
    }
}



/**
 * @brief A function to allocate memory and input the matrix elements
 *
 * @param matrix
 * @param n
 * @return float**
 */
float ** alloc_input_matrix(float **matrix,int n){
    int i,j;
    matrix = (float **)calloc(n,sizeof(float));  //dynamically allocate memory for array of pointers
    for(i=0;i<n;i++){
        matrix[i] = (float *)calloc(n,sizeof(float)); // memory assisgned for the array elements.
    }

    float element;
    printf("Enter the matrix: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%f", &element);
            matrix[i][j]= element;   //  matrix[i][j] same as *(*(matrix+i)+j)
        }
    }
    return matrix;
}

/**
 * @brief A function to output the matrix
 *
 * @param matrix
 * @param n
 */

void output_matrix(float **matrix,int n){
    int i,j;
    float x;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){

            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
}


/**
 * @brief A function to add two matrices
 *
 * @param matrix1
 * @param matrix2
 * @param n
 * @return error_t
 */
error_t add_matrices(float **matrix1,float **matrix2, int n){
    int i,j;
    float **result;

    result = (float **)calloc(n,sizeof(float));
    for(int i=0;i<n;i++){
        result[i] = (float *)calloc(n,sizeof(float));
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];

        }
    }

    printf("The sum of the matrices is: \n");
    output_matrix(result,n);
    free(result);
    return SUCCESS;

}

/**
 * @brief A function to subtract 2 matrices
 *
 * @param matrix1
 * @param matrix2
 * @param n
 * @return error_t
 */
error_t subtract_matrices(float **matrix1,float **matrix2, int n){
    int i,j;
    float **result;
    result = (float **)calloc(n,sizeof(float));
    for(int i=0;i<n;i++){
        result[i] = (float *)calloc(n,sizeof(float));
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("The difference of the matrices is: \n");
    output_matrix(result,n);
    free(result);
    return SUCCESS;
}

/**
 * @brief A function to find the product of 2 matrices
 *
 * @param matrix1
 * @param matrix2
 * @param n
 * @return error_t
 */
error_t product_matrices(float **matrix1,float **matrix2, int n){
    int i,j,k;
    float **result;
    result = (float **)calloc(n,sizeof(float));
    for(int i=0;i<n;i++){
        result[i] = (float *)calloc(n,sizeof(float));
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            result[i][j] = 0;
            for(k = 0;k < n; k++){
            result[i][j]+= matrix1[i][k] * matrix2[k][j];
            }
    }
    }

    printf("The product of the matrices is: \n");
    output_matrix(result,n);
    free(result);
    return SUCCESS;
}

/**
 * @brief A function to find the determinant of a matrix
 *
 * @param matrix
 * @param k
 * @return float
 */
float determinant(float **matrix,int k)
{

    float s = 1, det = 0, **b;
    b = (float **)calloc(k,sizeof(float));
    for(int ai=0;ai<k;ai++){
        b[ai] = (float *)calloc(k,sizeof(float));
    }
  int i, j, m, n, c;
  if (k == 1)
    {
     return (matrix[0][0]);
    }
  else
    {
     det = 0;
     for (c = 0; c < k; c++)
       {
        m = 0;
        n = 0;
        for (i = 0;i < k; i++)
          {
            for (j = 0 ;j < k; j++)
              {
                b[i][j] = 0;
                if (i != 0 && j != c)
                 {
                   b[m][n] = matrix[i][j];
                   if (n < (k - 2))
                    n++;
                   else
                    {
                     n = 0;
                     m++;
                     }
                   }
               }
             }
          det = det + s * (matrix[0][c] * determinant(b, k - 1));
          s = -1 * s;
          }
    }
    free(b);
    return (det);

}

/**
 * @brief A function to find the inverse of a matrix
 *
 * @param num
 * @param f
 * @return error_t
 */
error_t inverse(float **num, int f)
{


 float **matb, **fac,**transp, **invers, d;

    int mem;
    matb = (float **)calloc(f,sizeof(float));
    fac = (float **)calloc(f,sizeof(float));
    transp = (float **)calloc(f,sizeof(float));
    invers = (float **)calloc(f,sizeof(float));
    for(int mem=0;mem<f;mem++){
        matb[mem] = (float *)calloc(f,sizeof(float));
        fac[mem] = (float *)calloc(f,sizeof(float));
        transp[mem] = (float *)calloc(f,sizeof(float));
        invers[mem] = (float *)calloc(f,sizeof(float));
    }


 int p, q, m, n, i, j;
 for (q = 0;q < f; q++)
 {
   for (p = 0;p < f; p++)
    {
     m = 0;
     n = 0;
     for (i = 0;i < f; i++)
     {
       for (j = 0;j < f; j++)
        {
          if (i != q && j != p)
          {
            matb[m][n] = num[i][j];
            if (n < (f - 2))
             n++;
            else
             {
               n = 0;
               m++;
               }
            }
        }
      }
      fac[q][p] = power(q + p) * determinant(matb, f - 1);
    }
  }

  d = determinant(num, f);
    for (i = 0;i < f; i++)
    {
     for (j = 0;j < f; j++)
       {
         transp[i][j] = fac[j][i];
        }
    }

  for (i = 0;i < f; i++)
    {
     for (j = 0;j < f; j++)
       {
        invers[i][j] = transp[i][j] / d;
        }
    }
    printf("Inverse is :\n");
    output_matrix(invers,f);
  free(matb);
  free(fac);
  free(transp);
  free(invers);
  return SUCCESS;
  }

/**
 * @brief A function to find the transpose of a matrix
 *
 * @param matrix
 * @param n
 * @return error_t
 */
error_t transpose(float **matrix,int n){
    float **result;
    int i,j;
    result = (float **)calloc(n,sizeof(float));
    for(int i=0;i<n;i++){
        result[i] = (float *)calloc(n,sizeof(float));
    }
    for (i = 0;i < n; i++)
    {
     for (j = 0;j < n; j++)
       {
         result[i][j] = matrix[j][i];
        }
    }

    printf("The Transpose of the matrix is: \n");
    output_matrix(result,n);
    free(result);
    return SUCCESS;

}

/**
 * @brief A function to find the power of (-1)
 *
 * @param exp
 * @return float
 */
float power(int exp){
    float result=1;
    while(exp != 0){
        result*=(-1);
        exp--;
    }
    return result;

}
