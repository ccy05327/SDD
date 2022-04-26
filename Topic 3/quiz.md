# Topic 3 Quiz

## 

> 

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




## 

> 




## 

> 




## 

> 








