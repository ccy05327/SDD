# Topic 3 Quiz

## 9.0302 Post-video quiz

> 9.0301 Introduction to assertions

1. What type of variable will an assertion check?

- [ ] Int

- [ ] Double

- [x] Bool

- [ ] String

2. What is the best way to deal with a failed runtime assertion?

- [x] Throw an exception.

- [ ] Terminate the program immediately.

- [ ] Print an error.

- [ ] Carry on with the program, see how far you can get, and then go back and analyse when the program is terminated.

## 9.0304 Post-video quiz

> 9.0303 Assertions and the software development lifecycle

1. Assertions belong in debug code, but should be removed from release code.

- [ ] True
- [x] Opinions vary
- [ ] False


## 9.0306 Post-video quiz

> 9.0305 Case study Ariane 5: could assertions have prevented this?

1. Could the Ariane 5 rocket explosion have been avoided?

- [x] Yes
- [ ] Maybe
- [ ] No


## 9.0308 Post-video quiz

> 9.0307 Practical demonstration of assertions

1. Assertions can be used to check for the following:

- [x] If a number is an unsigned int or not.

- [ ] If a variable is well named.

- [x] If a password is long enough.

- [ ] <span style="color: salmon">How many times a loop should run.</span>


## 9.031 Find an example of a famous/public software failure

> Find an example of a famous and/or highly public software failure that might have been prevented with assertions. 

## 9.0311 Should we leave assertions in?

1. Do you think we should leave assertion statements in our code when we release software? Present a brief argument either way. 

- I think we should leave not all but some necessary ones. Leave the ones that will benefit the user's experience, and not leave all to reduce the resource usage.

    > I think we should leave assertions in unless there is a really strong and obvious reason not to do so, as they can prevent the program from entering an unwanted state. The only real argument against leaving assertions in production code seems to be that they slow it down. Having said that, if your code is being executed thousands or millions of times a second (for example, think of the Facebook app running on all those smart phones across the world), those assertions might be burning quite a lot of electricty!  

---

## 10.0202 Post-video quiz

> 10.0201 Secure programming overview

1. The three key concerns for security are:

- [ ] Concern, Implication, Availability

- [x] Confidentiality, Integrity, Availability

- [ ] Confidence, Integration, Automation

- [ ] Exceptions, Unit Testing, Good design

2. Which of the following are suggested techniques for secure programming, according to Wheeler (see book referenced by Matt in video)?

- [x] Carefully call out to other resources.

- [x] Validate all input.

- [x] Restrict buffer bounds.

- [x] Follow good security design principles.

- [x] Send information back judiciously.

- [ ] Carefully restrict physical access to the keyboard.

- [ ] Implement exceptions everytime a function is executed.


## 10.0204 Post-video quiz

> 10.0203 Secure programming and the software development lifecycle

1. Have a look at the details of the MS SDL. Do the same with SAMM, BSIMM, and CLASP/OWASP. How much is similar, and how much is different between these different schema? Do you think there's a good reason for there being a range of secure development schemes to follow?

- MS SDL is more suitable for large corporate, while SAMM can do for smaller ones. BSIMM is not a guide to follow for security, but rather a research outcome, facts, of the software security. CLASP focuses on formulating in the early stages of the software development cycle, which is different from the others. 

    Similar things are setting the standards/metrics and testing. 

    It's certainly good to have several approaches to go for on the same topic. As we can see from the four schemas above, some are practical some are theory-based, some are targeting smaller organizations, and some target the early phase of the development cycle. There isn't a one-size-fits-all solution to this. 

2. What is the difference between static and dynamic analysis?

- [ ] In static analysis, the code remains the same. In dynamic analysis, the code is constantly changing in response to user input.

- [ ] In dynamic analysis, the code is tested for adaptability to a range of situations, whereas in static analysis the code is tested the same way each time.

- [x] In static analysis the code isn't run – it's analysed by another piece of software or by another programmer. In dynamic analysis, specialised testers are actively trying to break the code as it is running.

## 10.0206 Post-video quiz

> 10.0205 Static analysis of Python code using bandit

1. Name a library used for static analysis in Python.

- [x] bandit

- [ ] robber

- [ ] mugger

- [ ] theif

---

## 11.0202 Post-video quiz

> 11.0201 Different types of erros

1. What are some of the kinds of errors that Matt described in the video?

- [ ] Exception errors
- [ ] Security errors
- [x] Non-errors
- [ ] Factual errors
- [x] Link(build) errors
- [x] Syntax errors

## 11.0204 Post-video quiz

> 11.0203 Introduction to exceptions

1. Which part of the program should throw an exception?

- [ ] `main()`
- [ ] Assertion
- [x] Calle
- [ ] Caller

2. [T/F] Exceptions can and should be used for control flow in a program.

- [ ] True
- [x] False

## 11.0206 Post-video quiz

> 11.0205 The try and catch pattern

1. A common pathway used for execeptions is:

- [ ] The throw and catch pattern
- [ ] The catch and lob pattern
- [ ] The scratch and sniff pattern
- [x] The try and catch pattern


## 11.0208 Post-video quiz

> 11.0207 Try and catch in JavaScript

1. Have you been using exceptions in any of your programming to date? Can you think how they would be useful? How important do you think they are moving forward?

- I can see the importance now even though not used often in the past. 

## 11.0210 Post-video quiz

> 11.0209 Throw in JavaScript

1. Why would you want to throw your **own** exception?

- [x] You can add specificity to the error message based on the bug that is encountered
- [ ] There are no default exceptions available, so if you want to discover any bugs in your code at all you must write your own exceptions
- [ ] It makes it easier to catch an exception if you've written it yourself

## 11.0213 Reflective quiz

1. We have now looked at exception handling and assertion. Write a short paragraph comparing exception handling, assertion and control flow. 

- Control flow is used when setting the logic in the program, not for error handling. When detecting errors, we use an assertion and then use an exception to deal with the errors later on. 

> Exception handling is a technique that we use to deal with unexpected circumstances occur whilst a program is running. It normally allows the program to continue running.
> 
> Assertion is a method of ensuring the program is in an appropriate state, where execution is typically halted if the state is deemed to not be appropriate....
> 
> Control flow is a method of dictating which parts of the program should run under normal circumstances.

---

## 12.0202 Post-video quiz

> 12.0201 Introduction to debuggers

1. Which of the following might be referred to as debugging?

- [x] Printing out the values of variables to the console
- [x] <span style="color: salmon">Pulling dead insects out of the blocked relays of an old computer system</span>
- [x] Using specialised software to pause the execution of the program at various points and to investigate the state of the variables

2. Which of the following are debuggers?

- [x] GDB
- [ ] LLVM
- [x] WinDBG

## 12.0204 Post-video quiz

> 12.0203 Basic debugging with gdb: breakpoint and inspect

1. Which of the following describes a breakpoint?

- [ ] A point where the program is likely to crash due a bug
- [x] A point where you have instructed the debugger to pause the program

2. Which describes the step action in GDB?

    These definitions are from the [GDB manual](https://ftp.gnu.org/old-gnu/Manuals/gdb/html_node/gdb_37.html). 

    - [ ] Resume program execution, at the address where your program last stopped; any breakpoints set at that address are bypassed
    - [x] Continue running your program until control reaches a different source line, then stop it and return control to GDB

## 12.0206 Post-video quiz

> 12.0205 Further debugging with gdb: data breakpoints and conditional breakpoints

1. Which of the following are true?

- [x] Watch points are triggered when a variable changes state
- [x] Conditional breakpoints are triggered at a particular line if a specified condition is true
- [ ] Conditional breakpoints are not attached to lines they are only attached to variables
- [ ] Watch points are triggered when the watched program reaches a certain line


## 

> 

1. 


## 

> 

1. 


## 

> 

1. 


## 

> 

1. 

