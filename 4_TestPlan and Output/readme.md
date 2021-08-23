# TEST PLAN:

##  High level test plan

| **Test ID** | **Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Addition of two matrices|  matrix1, matrix2, n| SUCCESS|SUCCESS|Technical |
|  H_02       | Subtraction of two matrices|  matrix1, matrix2, n|SUCCESS|SUCCESS|Technical   |
|  H_03       | Multiplication of two matrices|  matrix1, matrix2, n|SUCCESS|SUCCESS|Technical |
|  H_04       |Determinant of a matrix|  matrix1, n|SUCCESS|SUCCESS|Technical |
|  H_05       |Transpose of a matrix|  matrix1, n|SUCCESS|SUCCESS|Technical |
|  H_06       |Inverse of a matrix|  matrix1, n|SUCCESS|SUCCESS|Technical |
|  H_07       |Power of -1 function| 3|-1|-1|Technical |
|  H_08       |Power of -1 function| 2|1|1|Technical |
|  H_09       |Determine type of a matrix|  matrix1, n|SUCCESS|SUCCESS|Technical |


## Low level test plan

| **Test ID** | **HLT ID** |**Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |    
|-------------|------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_01, H_02, H_03|Tested on functions which accept two matrices as input|  matrix1, matrix2, n |SUCCESS|SUCCESS |Technical |
|  L_02       | H_04, H_05, H_06, H_09|Tested on functions which accept single matrix as input|  matrix1, n |SUCCESS|SUCCESS |Technical |
|  L_03       | H_07, H_08 |Tested on function which returns an integer value|  3  |-1|-1|Technical |
