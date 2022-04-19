# Topic 2 Quiz

## 5.0103 Post-video quiz

> 5.0101 Introduction to test-driven development

1. What knowledge areas of the SWEBOK does test-driven development deal with?

- [ ] Quality, maintenance and testing

- [x] Requirements, engineering process and testing

- [ ] Management, economics and professional practice

2. In test-driven development:

- [ ] Tests are written, those tests succeed, and then you write the source to fail the test.

- [ ] Source code is written, tests are written, then the source code passes the tests.

- [x] Tests are written, those tests fail, and then you write the source code to pass the test.

- [ ] Source code is written, then we test it. It might fail, it might pass.

  > Write the test to fail, write the production code to pass it, then pass the test. Repeat the cycle.

## 5.0105 Post-video quiz

> 5.0104 The Three Laws according to Uncle Bob

1. Which of the following is one of the 'laws of Uncle Bob'/test-driven development?

- [ ] You must have an end user test your code before you proceed.

- [ ] You must have several tests written before you write production code.

- [ ] Don't stop writing production code until you feel it's in a testable state.

- [x] You cannot write a test until you've written the production code to pass it.

- [x] Don't write more production code than is needed to pass the test.

- [x] You must not write production code until you've written a failing unit test.

Don't write a longer test than what you need. 2. According to Robert Martin ('Uncle Bob'), how many minutes should a cycle of writing a test, writing the production code and running the test take? Write the number only. For example, if you think it is 10 minutes, just write 10.

- 2

  > Please bear in mind this is just a suggestion. The idea is to repeat this cycle as quickly as possible – don't get discouraged if it takes you longer than 2 minutes. Just do your best to be focused and get the time down.

## 5.0108 Post video quiz

> 5.0106 Demonstration of the unit testing workflow

1. Which statement describes the correct workflow for test-driven development?

- [ ] Write some production code, identify a requirement, write a test to test this requirement, pass the test. Repeat the cycle.

- [ ] Write all the production code, clarify all the requirements, write all the tests to meet these requirements, pass all the tests. Deploy code.

- [ ] Identify the requirement, write the code to meet this requirement, write the test to test this requirement, pass the test. Repeat the cycle.

- [x] Identify the requirement, write a test to test this requirement, write the code to pass the test. Repeat the cycle.

2. What do you think about test-driven development/extreme programming? Is it something you think you could or would do? Do you think it's a good way of programming?

   - I think this is a less overwhelming approach to program something complex, might end up saving time in the long run, but for simpler tasks, I'm not sure.

3. If it takes you more than 2 minutes to complete a cycle, what is the correct response (according to the 'laws of test-driven development'?)

- [ ] Increase the time needed for a complete cycle to 10 minutes.

- [ ] Conclude that test-driven development isn't suitable for this scenario.

- [x] Make your test shorter and/or simpler.

## 5.0111 Post-video quiz

> 5.011 Github case study

1. Name one or two advantages of unit testing that Matt highlighted in this video.

- To ensure that the lower levels of code are working correctly, instead of checking it manually. This makes the code base really solid.

  > Other methods of coding involve you writing code, running the code, finding a bug, and then having to try and find that bug in the code base. Unit testing does a lot of testing as its way of working, so it gives you confidence because you know that you're building on top of code that has already been tested and definitely works.

## 5.0114 Post video quiz

> 5.0113 What to test? An overview

1. Which of the following types of test did Matt mention in this video?

- [ ] Execution path testing

- [ ] Flexibility Rating

- [ ] Interface testing

- [ ] Style rating

- [ ] Fat/tangle ratio testing

- [ ] Modularity Analysis

- [ ] Error handling

- [ ] User testing

2. During error handling testing, it's important that...

- [ ] ...that the error messages are as short as possible.

- [x] ...all errors are intelligible.

- [x] ...that the programme actually reaches the error handling code, and doesn't simply crash.

- [x] ...the reported error matches the actual error encountered.

- [ ] ...that errors give a complexity analysis to help with debugging.

## 5.0115 Write a short definition of test-driven development

1. Write a short definition of test-driven development.

- Test-Driven Development, short for TDD, is an approach for testing programs while in production. Usually a 2-minute cycle of Test-Fail-Test-Pass.

    > Model answer: Test-driven development is a method of developing software which operates in a repeated 'test and develop' cycle. The first step is to write a test which the software will fail. Next, the code is written to pass the test, then the test is run again. 

**remember to indent after complete**
