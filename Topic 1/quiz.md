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

> 1.0209 Complexity case study

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

## 2.0202 Post-video quiz

1. The manner and degree to which tasks performed by a single software module are related to one another. What is this a definition for?

    - [ ] Software cohesion
    - [ ] Module coupling
    - [x] Module cohesion
    - [ ] Module complexity

2. Which types of cohesion are always acceptable?

    - [x] Communicational
    - [ ] <span style="color: salmon">Procedural</span>
        <detail>
        <summary>Incorrect</summary>
        No. While it may seem like this is an acceptable type of cohesion, data often changes during use – meaning that you could be working on several different versions/sets of data within a procedurally cohesive module. Instead, these procedures should be split up into smaller parts, determined by the individual steps in the procedure.
        </detail>
    - [x] Functional
    - [ ] Coincidental
    - [ ] <span style="color: salmon">Logical</span>
        <detail>
        <summary>Incorrect</summary>
        No. This is **sometimes** okay, but not always. Just because the elements may look like they're doing similar things, its doesn't mean that they actually are doing similar things.
        </detail>
    - [ ] <span style="color: salmon">Temporal</span>
        <detail>
        <summary>Incorrect</summary>
        No. Just because processes happen close to each other in time, doesn't mean they belong together in code.
        </detail>    

## 2.0205 Post-video quiz

> 2.0204 Why are different types of module cohesion good or bad?

1. What are the disadvantages of not designing your modules properly?

    - Not designing modules properly will increase the module complexity. Difficult to understand, verify, and therefore hard to reuse and modify. Also, it might cause more runtime and space in order to run it. 

## 2.0207 Post-video quiz

> 2.0206 Module cohesion case study

1. What do you think about the module cohesion so far in your programming practice? Would you change the way you do things as a result of these videos on cohesion?

    - These videos certainly let me reconsider my past choices of making what functions into a module/file, questioning what are my reasonings to do so, and will definitely be thinking about the ok cohesions (communications, functional, logical) when writing functions into a module in the future. 

## 2.0208 Define module cohesion

1. Write a short definition of module cohesion. 

    - Module cohesion is about the what, why, and how items exist within a module.





