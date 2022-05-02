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

## 

> 



## 

> 




## 

> 




## 

> 




## 

> 








