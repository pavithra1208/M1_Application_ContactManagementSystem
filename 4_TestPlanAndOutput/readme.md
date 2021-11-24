# TEST PLAN:
## High level test cases
|Test ID | Description                      |Exp I/P             |Exp O/P             | Actual Out         | 
|:---:   | :----------------------------:   | :-----------------:|:------------------:|:------------------:|
|H_01    | Insert contact details           |name[20],number[10] |name[20],number[10] |name[20],number[10] | 
|H_02    | Update contact details           |name[20]            |number[10]          |number[10]          | 
|H_03    | delete contact details           |name[20]            |number[10]          |number[10]          | 
|H_04    | display contact details          |name[20]            |number[10]          |number[10]          | 
|H_05    | search contact details           |name[20]            |number[10]          |number[10]          | 
## Low level test cases
|Test ID | Description                                    |Exp O/P             | Actual Out         | 
|:---:   | :------------------------------------------:   | :-----------------:|:------------------:|
|L_01    | User shall be able to fetch the data from file |SUCCESS             |SUCCESS             | 
|L_02    | System must diplay data without error          |SUCCESS             |SUCCESS             | 
