# Topic 2 Test-Driven Development

## Week 5 Test-Driven development

### Reading

#### Basics

Three laws of unit-testing:

- [(PDF)](../PDF/Professionalism%20and%20Test-Driven%20Development.pdf) Martin, R.C. '[Professionalism and test-driven development](https://ieeexplore.ieee.org/document/4163026)', IEEE Software 24(3) 2007, pp.32–36.

The following special issue on test-driven development contains several interesting articles:

- [IEEE Software 24(3) 2007](https://ieeexplore.ieee.org/xpl/tocresult.jsp?isnumber=4163008).

#### Advanced readings and future trends

[(PDF)](../PDF/Metamorphic%20Testing%2020%20Years%20Later%20-%20A%20Hands-on%20Introduction.pdf) Segura, S. and Z.Q. Zhou '[Metamorphic testing 20 years later: a hands-on introduction](https://ieeexplore.ieee.org/document/8449651)', 2018 IEEE/ACM 40th International Conference on Software Engineering: Companion (ICSE-Companion) 2018, pp.538–539.

[(PDF)](../PDF/%5BJournal%20First%5D%20Analyzing%20the%20Effects%20of%20Test%20Driven%20Development%20in%20GitHub.pdf) Borle, N., M. Feghhi, E. Stroulia, R. Grenier and A. Hindle '[[Journal First] Analyzing the effects of test driven development in GitHub](https://ieeexplore.ieee.org/document/8453184)', 2018 IEEE/ACM 40th International Conference on Software Engineering (ICSE) 2018, pp.1062–1062.

### Learning Objectives

- Define test-driven development
- Identify the processes involved in test-driven development
- Critically analyse examples of test-driven development in source code repositories

### Three Laws of TDD

- You may not write production code unless you've first written a failing unit test
- You may not write more of a unit test than is sufficient to fail
- You may not write more production code than is sufficient to make the failing unit test pass

### Demo of unit test workflow

**Requirement**

- R1: this function receives an array of integers and returns the highest

1.  Test: does the `getHighest` function return a value?

    1. Write a failed test.

        ```
        function testReturnVal() {
            let input = [1, 2, 4, 5, 6];
            let result = getHighest(input);

            return !(result == undefined);
        }

        let result1 = testReturnVal();
        if (result1) console.log("testReturnVal passed");
        else console.log("testReturnVal failed");

        // ReferenceError: getHighest is not defined
        ```
    2. Write the minimum code to pass the test.

        ```
        function getHighest(input) {
            return 0;
        }

        // testReturnVal passed
        ```
2. Test: does it return a value from the array?

    ```
    function testResultInArray() {
    let input = [1, 2, 3];
    let result = getHighest(input);

    return result == 1 || result == 2 || result == 3;
    }

    let result2 = testResultInArray();
    if (result2) console.log("testResultInArray passed");
    else console.log("testResultInArray failed");

    // testReturnVal passed
    // testResultInArray failed
    ```
    Change `getHighest()` to:
    ```
    function getHighest(input) {
        return input[0];
    }

    // testReturnVal passed
    // testResultInArray passed
    ```
3. Test: does it return the correct array/value?

    ```
    function testCorrectResult() {
        let input = [1, 2, 3];
        let result = getHighest(input);
        return result == 3;
    }

    ...

    let result3 = testCorrectResult();
    if (result3) console.log("testCorrectResult passed");
    else console.log("testCorrectResult failed");

    // testReturnVal passed
    // testResultInArray passed
    // testCorrectResult failed
    ```
    Change `getHighest()` to:
    ```
    function getHighest(input) {

        let max = input[0];
        for (let i = 0; i < input.length; i++) {
            if (input[i] > max) max = input[i];
        }
        return max;
    }

    // testReturnVal passed
    // testResultInArray passed
    // testCorrectResult passed
    ```
    [Full test file in JavaScript](index.js)

### What to test?

- **interface testing**: test if a function receives the correct input(s) and output(s), not user interface. 

- **exercising data structure**: verifying data structures' been used correctly and being stored.

- **boundary testing**: specifying boundaries in software. 

    i.e. a function takes an integer as input, what if I put in 0? what's the highest value I can put in?

    i.e. a function finds certain things in an array, can it find the first/last element correctly?

- **execution paths**: tests deliberately go through all paths available in a given module.

- **error handling**: is the error descriptive/intelligible? does the error match what actually happened? does itt reach the error handling code (i.e. crash before reach)? 

## Week 6 Unit testing in Python

### Learning Objectives

-
-
-

## Week 7 Unit testing in C++

### Learning Objectives

-
-
-

## Week 8 Unit testing a web API

### Learning Objectives

-
-
-
```
