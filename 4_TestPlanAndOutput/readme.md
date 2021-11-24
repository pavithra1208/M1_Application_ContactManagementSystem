# TEST PLAN:
## High level test cases
|Test ID | Description                                             |Exp I/P             |Exp O/P             | Actual Out         | Type of test     |
|:---:   | :----------------------------:                          | :-----------------:|:------------------:|:------------------:|:-----------------|
|H_01    | User can Insert contact details by enter their name,num |name[20],number[10] |name[20],number[10] |name[20],number[10] | Requirement based|
|H_02    | User can modify details by selecting name               |name[20]            |number[10]          |number[10]          | Requirement based|
|H_03    | display contact details that store in file              |name[20]            |number[10]          |number[10]          | Scenario based   |
|H_04    | search contact details by their name                    |name[20]            |number[10]          |number[10]          | Boundary based   |
## Low level test cases
|Test ID | Description                                    |Exp I/p                 |Exp O/P             | Actual Out         | Type of Test      |
|:---:   | :------------------------------------------:   |:----------------------:|:------------------:|:------------------:|:------------:      |
|L_01    | User shall be able to fetch the data from file |list the contact details|SUCCESS             |SUCCESS             | Requirement based|
|L_02    | System must diplay data without error          |details in record       |SUCCESS             |SUCCESS             | Scenario based|
# OUTPUT
### Insert number:
![CodeExecutionImage](https://user-images.githubusercontent.com/88384193/143208153-755cc7e2-b94a-4281-b90d-1b114f3164bc.JPG)
### Update number:
![update_number](https://user-images.githubusercontent.com/88384193/143242566-30958ef9-1aaf-4746-a008-c1603a56bfd1.JPG)
### Delete number:
![delete_number](https://user-images.githubusercontent.com/88384193/143242647-650f6b97-33d2-4d8e-a518-df896d592acf.JPG)
