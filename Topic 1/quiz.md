# Practice Quiz

## 1.0205 Post-video quiz

> 1.0204 What is a module?

1. According to Parnas (1972), what are the three main reasons to promot modularity of code?

    - [ ] Cleaner code
    - [x] Shortening of development time
    - [ ] Easier to manage in version control
    - [ ] Portability
    - [ ] Reduced source code needed
    - [ ] Style
    - [x] Flexibiltiy
    - [x] Comprehensibility

2. What is a module?

    - A module can be an independent piece of software that can be run by itself and can be compiled, but it could also be a combination of modules. It can also mean a system in source code management, where you determine how to separate files and organize them. 

## 1.0207 Post-video quiz

> 1.0206 What is module complexity?

1. Is it possible to measure complexity objectively?

    - [x] Yes
    - [ ] No

2. Koziolek (see reading list) found approximately 40 potentially useful measures for software complexity. Which of the below are in that list?

    - [x] Afferent couplings
    - [x] Entropy of an architectural slicing
    - [ ] Fatness
    - [x] Abstractness
    - [ ] Impact factor
    - [ ] Strongly-coupled boundness cohesion

## 1.021 Post video quiz

> 1.020 

1. Using the terms used by Sangwan and McCabe, a program with a small number of large modules and few connections between them could be said to have:

    - [ ] Low fat, high tangle.
    - [ ] Low fat, low tangle.
    - [x] High fat, low tangle.
    - [ ] High fat, high tangle.
    
2. You've now seen videos where Matt has explained some ideas about complexity and seen him go through a program you know from earlier in the course with these ideas. Has this made you think about how you design and write your own programs? If so, how?

    - Yes, since I'm looking at a different case study than the one I've chosen, I have a more fresh and clear eye to look at the project's source code, it is clear to me that the naming is done quite well. Also, the organization of files, and the functions within each file are really neat and tidy, easy to find and reference. 

## 1.0212 Write a definition of module complexity 

1. Write a short paragraph that defines module complexity. 

    - Module complexity is defined by the module's readability, compactness, and file structures. If a program has very few modules each very large, the complexity is high because the code is probably hard to read and understand. A program with a messy file structure can cause a hard time locating modules, hard to verify. 