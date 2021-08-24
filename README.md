# MATRIX CALCULATOR
### Miniproject 
![images matrix](https://user-images.githubusercontent.com/82052062/130574181-41d500d6-9777-4bc1-ace4-3405fb86e7bd.png)

Build | Code Quality | [Git Inspector](using github.io option)| Code Coverage | unity test |
------|----------|--------------|---------------------|---------------
[![C/C++ CI - Build Status](https://github.com/Adithya1798/SDLC_26_HammerHeads/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/Adithya1798/SDLC_26_HammerHeads/actions/workflows/c-cpp.yml) | [![Code Quality - Static Code - Cppcheck](https://github.com/Adithya1798/SDLC_26_HammerHeads/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/Adithya1798/SDLC_26_HammerHeads/actions/workflows/cppcheck.yml)|[![Contribution Check - Git Inspector](https://github.com/Adithya1798/SDLC_26_HammerHeads/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/Adithya1798/SDLC_26_HammerHeads/actions/workflows/gitinspector.yml)| [![CI](https://github.com/Adithya1798/SDLC_26_HammerHeads/actions/workflows/main.yml/badge.svg)](https://github.com/Adithya1798/SDLC_26_HammerHeads/actions/workflows/main.yml) | [![Unit Testing - unity](https://github.com/Adithya1798/SDLC_26_HammerHeads/actions/workflows/unity.yml/badge.svg)](https://github.com/Adithya1798/SDLC_26_HammerHeads/actions/workflows/unity.yml)

To view [GIT INSPECTOR] https://github.com/Adithya1798/SDLC_26_HammerHeads/graphs/contributors

## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research.
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures
`5_Images`         | Output screenshots

## Contributors List and Summary

PS No.    |  Name   |    Features    | Issues Raised |Issues Resolved|No Test Cases|Test Case Pass
-------   |---------|----------------|----------------|---------------|-------------|--------------
  99005629|Sweta Jayesh Patel|F_03, Report| 0 | 0 | 3 | 3 
  99005595|Kajjapu Vaishnavi|F_02| 0 | 0 | 3| 3 
  99005588|Akshatha N K| F_06 | 0 | 0 | 3 | 3
  99005603|Aswathy R. Ullas| F_04 | 0 | 0 | 2 | 2 |
  99005619|Chandana s| F_05 ,Requirements | 0 | 0 | 2 | 2 |
  99005603|Adithya Aras | F_07 | 0 | 0 | 2 | 2 |
  99005620|Bhuvana A N | F_06,Requirements | 0 | 0 | 2 | 2 |
  99005613|Yashaswini K | F_04 | 0 | 0 | 2 | 2 |
  99005628|Adithya V | F_01 | 0 | 0 | 2 | 2 |

| Feature Id | Feature |
| -----------|---------|
|F_01| Options to select matrix operation|
|F_02| Operations on two matrices such as addition, subtraction and multiplication are included|
|F_03| Single matrix operations such as determinant, transpose, inverse and type of a matrix |
|F_04| Separate function for each operation |
|F_05| A structure has been implemented for storing the matrices|
|F_06| Dynamic memory allocation and deallocation has been implemented for the matrices|
|F_07|  There is no upper limit for the size of the matrix|

## Challenges Faced and How Was It Overcome

| No. | Challenge | Solution
|-----|-----------|--------
|1. | Dynamic memory allocation of 2D arrays created segmentation faults| Running the code in GDB helped find the line where the program crashes
|2. | Program crashes | Writing clean code with allocating and deallocating memory at all functions as per requirement|
|3. | Logical errors faced while designing matrix operations| Referred some articles to revise matrix basics and operations on 2D arrays
|4. | Unit testing on dynamic 2D array outputs| Created enumerated variables to be returned by those functions if the specified operation executes successfully
