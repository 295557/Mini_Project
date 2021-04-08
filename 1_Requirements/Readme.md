# Requirements
## Introduction
 * A calculator is a computing machine whose purpose is to do mathematical computations under direct human guidance. The simplest calculators perform the basic mathematical functions addition, subtraction, division, and multiplication.
 * calculator is used to perform equations quickly and a calculator is used for an instant and on the spot result which has made human life very dependent on calculators
## Research
### BASIC FUNCTIONS
Addition
 The addition (sum function) is used by clicking on the "+" button or using the keyboard. Thefunction results in a+b.
Subtraction
 The subtraction (minus function) is used by clicking on the "-" button or using the keyboard.The function results in a-b.
Multiplication
 The multiplication (times function) is used by clicking on the "x" button or using the keyboard"*" key. The function results in a*b.
Division
 The division (divide function) is used by clicking on the "/" button or using the keyboard "/"key. The function results in a/b.
Square
 The square function is used by clicking on the "x^2" button or type "^2". The function results inx*x.
Square Root
 The square root function is used by clicking on the "x" button or type "sqrt()". Thisfunction represents x^.5 where the result squared is equal to x.
Raise to the Power
The raise to the power (y raised to the x function) is used by clicking on the "y^x" button ortype "^".
Factorial
 The Factorial function is used by clicking the "!" button or type "!".

### Benefits
*This technology allows students solve complicated problems quickly and in an efficient manner. 
*It can reduce the problem to simpler tasks and allows the student to devote more time in understanding the problem.
*They are saved from monotonous calculations and the same boring mundane procedure.
*As a professional, in any field, the Calculator save time, energy and increases efficiency in workplace.

## Cost and Features
Feature | Cost | Time
Calcuting  
## Defining Our System
### Certain assumptions:


### Explanation:


## SWOT ANALYSIS


# 4W&#39;s and 1&#39;H

## Who:
* Small and medium size clinics Providing Covid vaccinations to patients

## What:
* Many Clinics are not able to afford high end HMS or ERP systems and hence still depend on manual filing systems. During COVID vaccinations it becomes a tedious task to manage every patient with hand written file system

## When:
* This problem began in February 2021, when COVID Vaccination Drive began and small/medium clinics will soon have to administer vaccinations to people.

## Where:
* This problem is expected to surface in all states of India.

## How:
* This problem may cause ineffective vaccine management and hence there can be a huge amount of vaccine wastage. As per recent data in cities like Noida and Delhi till date 9%-18% vaccines have gone to waste.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to add new patient record | Techincal | TBD-S1 | 
| HR02 | User shall be able to read a patient record | Techincal | TBD-S1 |
| HR03 | User shall be able to update a patient record | Techincal | TBD-S1 |
| HR04 | User shall be able to delete a patient record | Techincal | TBD-S1 |
| HR05 | User shall be able to save records in a file | Techincal | TBD-S1 |
| HR06 | User shall be able to read data from a file | Techincal | TBD-S1 |
| HR07 | Data should not be lost in case of faliure | Scenario | FUTURE |
| HR08 | Data should always be stored when closing the system | Scenario | TBD-S1 |
##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | New record shall be added by providing all the asked information and the id should be unique or else patient record should not be accepted. | HR01 | TBD-S1 |
| LR02 | Reading patient data should be possible in 2 ways, first being by searching by id of a patient and second by printing all the records available | HR02 | TBD-S1 |
| LR03 | While reading all the records, only 10 records per page should be visible and should add 10 more if user wants to see more | HR02 | FUTURE |
| LR04 | If user searches for an invalid ID "No Record Found" message should be displayed | HR02 | TBD-S1 |
| LR05 | User need to search by id for the pateint record to be updated, if no such record is available then "No Record Found" Message should be displayed | HR03 | TBD-S1 |
| LR06 | User need to search by id for the pateint record to be deleted, if no such record is available then "No Record Found" Message should be displayed | HR04 | TBD-S1 |
| LR05 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR05 | TBD-S1 |
| LR06 | If opening the file fails, then the system shloud prompt the message "Unable to access file" and should not end the program execution | HR05, HR06, HR07, HR08 | TBD-S1 |
| LR07 | When user Log off the system, message shall be prompted asking the user to save new records to file before exiting or not | HR08 | TBD-S1 |
