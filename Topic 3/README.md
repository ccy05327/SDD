# Topic 3 Defensive coding, debugging and exception handling

## Week 9 Assertion and parameter checking

### Learning objectives

- Define what an assertion is in a computer program
- Explain the difference between assertions and logical control flow
- Write assertion code and reason about how and when to enable and disable it

### Readings

**Opinion 1: Always use assertions**

- ([PDF](../PDF/Assertive%20Testing%20%5BReliable%20Code%5D.pdf)) Holzmann, G.J. ['Assertive testing [reliable code]'](https://ieeexplore.ieee.org/document/7093042), IEEE Software 32(3) 2015, pp.12–15.

**Opinion 2: In industry, assertions are often removed in release builds**

- ([PDF](../PDF/A%20Historical%20Perspective%20on%20Runtime%20Assertion%20Checking%20in%20Software%20Development%20.pdf)) Clarke, L.A. and D.S. Rosenblum ['A historical perspective on runtime assertion checking in software development'](https://discovery.ucl.ac.uk/id/eprint/4991/), SIGSOFT Software Engineering Notes 31(3) 2006, pp.25–37.

**For a great discussion of various aspects**: [What are assertions? ](https://web.archive.org/web/20191209110926/http://wiki.c2.com/?WhatAreAssertions)

- ([PDF](../PDF/Assertions%20-%20a%20personal%20perspective.pdf)) Classic paper: Hoare, C.A.R ['Assertions: a personal perspective'](https://ieeexplore.ieee.org/document/1203056), IEEE Annals of the History of Computing 25(2) 2003, pp.14–25.
- ([PDF](../PDF/Design%20by%20contract%20-%20the%20lessons%20of%20Ariane.pdf)) Ariane Rocket explosion: Jazequel, J.-M. and B. Meyer, ['Design by contract: the lessons of Ariane'](https://ieeexplore.ieee.org/document/562936), Computer 30(1) 1997, pp.129–30.

### Assertions

Assume in runtime assertion where the program is running. Other types of assertions: unit tests, compile-time assertions.

> An assertion is a check in your code that evaluates a boolean expression. It checks whether the program is in a desirable state.

```
int gameScore;
...
assert(gameScore >= 0);
```

An `if` statement controls the flow of the program;
An `assertion` checks the state.

**What should you do if a run-time assertion fails?**

- Terminate the program

  <span style="color: gray">We might not want to terminate the whole program if it's something multiple users are using at once.</span>

- Print an error

  <span style="color: gray">If writing a library, we can't predict what it's been used for hence the error message might not make sense.</span>

- Throw an exception

  A pretty good way to deal with assertion failure.
  <span style="color: gray">The part of the program calling the code might not be able to handle it.</span>

- Carry on regardless

### Assertions & SDD lifecycle

> ***Test that the loop has not iterated more than 10,000 times.***

> ***Before devision operation, check you are not dividing by zero.***

#### lifecycle <span style="color: gray">(Simplified version)</span>

- **Release build**: remove all/most assertions from debug build to save runtime (opinionated)

- **Debug build**

### Demonstration of Assertions

- [Assertion in C++](assert.cpp)

    ```
    #include <cassert>

    int main() {
        double sensorReading = 65537;
        unsigned short storedValue = sensorReading;
        assert(storedValue == sensorReading);
        return 0;
    }
    ```
- [Assertion in Python](assert.ipynb)

    ```
    sensorReading = 65000
    storedValue = sensorReading+1
    assert(storedValue == sensorReading)
    ```
- [Assertion in JavaScript](assert.js)

    ```
    const assert = require("assert");

    let sensorReading = 65500;
    let storedValue = sensorReading+1;
    assert(storedValue == sensorReading);
    ```

---

## Week 10 Secure programming

---

## Week 11 Exception handling

---

## Week 12 Using a debugger

---
