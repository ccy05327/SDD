# Topic 4 Testing

- Requirements
- Test plans
- Usability testing
- Accessibiltiy

## Week 13 User stories: what should they be able to do?

### Learning objectives

- Explain why requirements are necessary and who the stakeholders are
- Name several methods that people use to write requirements
- Use the 'Easy Approach to Requirements Syntax' (EARS) to write requirements

### Reading

- &check; [PDF](../08-PDF/The%20Unplanned%20Journey%20of%20a%20Requirements%20Engineer%20in%20Industry%20-%20An%20Introduction.pdf) Gregory, S.'[The Unplanned Journey of a Requirements Engineer in Industry: An Introduction](https://ieeexplore.ieee.org/document/8048630)', IEEE Software 34(5) 2017, pp.16-19.

- &check; [PDF](<../08-PDF/Easy%20Approach%20to%20Requirements%20Syntax%20(EARS).pdf>) Mavin, A., P. Wilkinson, A. Harwood and M. Novak '[Easy Approach to Requirements Syntax (EARS)](https://ieeexplore.ieee.org/document/5328509)', 2009 17th IEEE International Requirements Engineering Conference (Atlanta, GA: IEEE, 2009), pp.317-322.

- &check; [PDF](<../08-PDF/An%20Ancient%20(but%20Still%20Valid)%20Look%20at%20the%20Classification%20of%20Testing.pdf>) R. L. Glass '[An ancient (but still valid?) look at the classification of testing](https://ieeexplore.ieee.org/document/4670725)', IEEE Software 2(6) Nov-Dec 2008, pp.112-112.

- &check; [PDF](../08-PDF/A%20Classification%20System%20for%20Testing%2C%20Part%202.pdf) R. L. Glass '[A classification system for testing, part 2](https://ieeexplore.ieee.org/document/4721193)', IEEE Software 26(1) Jan-Feb 2009, pp.104-104.

- &check; [PDF](../08-PDF/Validating%20and%20improving%20test-case%20effectiveness.pdf) Chernak, Y. '[Validating and improving test-case effectiveness](https://ieeexplore.ieee.org/document/903172)', IEEE Software 18(1) Jan-Feb 2001, pp.81-86.

### Intro to Requirements

> How to ensure that a system does what it is supposed to do?

1. Describe what is is supposed to do (requirements)
2. Check if it meets the requirements (testing)

> Who are requirements for?

1. End-users
2. Producing party
3. Perchasing party
4. Developers

> What kind of requirements do they understand?

### Requirements techniques

**Natural Language**

**[Constrained natural language] Simplified technical English**:

- Short sentences
- Short paragraphs
- Limit grammar
- Active voice

**[Graphical] UML (Unified Modeling Langauge)**: Generate a UML diagram from classes

**[Formal] [Z Language](https://en.wikipedia.org/wiki/Z_notation)**: a formal specification language used for describing and modelling computing systems.

### EARS

<p style="text-align: center"><img src="../09-Images/EARS.png" style="height: 350px" alt="Easy Approach to Requirements Syntax image"><br>Easy Approach to Requirements Syntax</p>

---

## Week 14 Black box and white box testing

### Learning objectives

- Write out step by step and matrix style test procedures
- Differentiate between black box and glass/white box testing and provide examples of each
- Explain how automated blackbox testing can be achieved in video games

### Definition

#### Black box

1. system or component whose **inputs**, **outputs**, and **general function** are known but whose contents or implementation are unknown or irrelevant.

2. pertaining to an approach that treats a system or component as in (1).

#### Glass or white box -- unit testing

1. system or component whose **internal contents** or **implementation** are known.

2. pertaining to an approach that treats a system or component as in (1).

> Requirements can be written for both or one.

#### Testing

Activity in which a system or component is executed under specified conditions, the results are observed or recorded, and an evaluation is made of some aspect of the system or component.

**test case specification:** document specifying inputs, predicted results, and a set of execution conditions for a test item.

**test procedure specification:** document specifying a sequence of actions for the execution of a test.

> There is an ISO standard for software testing documentation.

### Test procedure template

- [ISO Test procedure template matrix](ISO%20test%20procedure%20template%20matrix.xlsx)

- [ISO Test procedure template step by step](ISO%20test%20procedure%20template%20step%20by%20step.xlsx)

### Automated black box testing

> Replying exclusively on playtesting conducted by humans can be costly and inefficient. Artificial agents could perform much faster play sessions, allowing the exploration of much more of the game space in much shorter time.
>
> Zhao et al. "Winning isn't everything: Training agents to playtest modern games."

This is the paper describing the Sims Mobile agent:

- [PDF](../08-PDF/Winning%20isn%E2%80%99t%20everything%20-%20Training%20agents%20to%20playtest%20modern%20games.pdf) Zhao, Y., I. Borovikov, A. Beirami, J. Harder, J. Kolen, J. Pestrak, J. Pinto, R. Pourabolghasem, H. Chaput, M. Sardari et al. '[Winning isn???t everything: Training agents to playtest modern games](https://web.archive.org/web/20201130170550/https://arxiv.org/pdf/1903.10545.pdf)', AAAI Workshop on Reinforcement Learning in Games 2019.

This is a very detailed paper describing the state of the art in automated video game testing of video games. Read this if you want to see how one might go about analysing a research field, and also to find out what is possible in the area of automated testing.

- [PDF](../08-PDF/Video%20Game%20Automated%20Testing%20Approaches%20-%20An%20Assessment%20Framework.pdf) Albaghajati, A.M. and M.A.K. Ahmed '[Video game automated testing approaches: an assessment framework](https://ieeexplore.ieee.org/abstract/document/9234724)', IEEE Transactions on Games.

---

## Week 15 Usability testing

### Learning objectives

- Explain hwo the terms efficient, effective and satisfying relate to usability
- Give an example of a standard usability survey and use it to evaluate usabilitly
- Evaluate the usability of a piece of software against Nielsen's usability principles

### Reading

- [PDF](../08-PDF/Usability%20basics%20for%20software%20developers.pdf) Ferre, X., N. Juristo, H. Windl and L. Constantine '[Usability basics for software developers](https://ieeexplore.ieee.org/document/903160)', IEEE Software 18(1) 2001, pp.22-29.

- [PDF](../08-PDF/SUS%20-%20a%20retrospective.pdf) Brooke, J. 'SUS: a retrospective', Journal of Usability Studies, 8(2) 2013.

- [PDF](../08-PDF/UMUX-LITE%20-%20when%20there's%20no%20time%20for%20the%20SUS.pdf) Lewis, J.R., B.S. Utesh, D.E. Maher 'UMUX-LITE: when there's no time for the SUS', Proceedings of the SIGCHI Conference on Human Factors in Computing Systems 2013, pp.2099-2102.

- [PDF](../08-PDF/Quantifying%20the%20creativity%20support%20of%20digital%20tools%20through%20the%20creativity%20support%20index.pdf) Cherry, E. and C. Latulipe 'Quantifying the creativity support of digital tools through the creativity support index', ACM Transactions on Computer-Human Interaction 21 2014.

- [PDF](../08-PDF/Improving%20a%20human%20computer%20dialogue.pdf) Molich, R. and J. Nielsen 'Improving a human-computer dialogue', Communications of the ACM 33(3) March 1990, pp.338???348.

### Usability

> the extent to which a system, product or service can be used by specified users to achieve specified goals with **effectiveness**, **efficiency** and **satisfaction** in a specified context of use.
>
> ISO 9241-11

#### Effectiveness

> Whether they are able to complete a task.

#### Efficiency

> How quickly and how easily and how fluid to complete a task.

#### Satisfaction

> Feeling when they are using it.

### Usability metrics

**System Usability Scale (SUS)** [1996]: A list of 10 questions to ask a user after they've tried the system.

    Each question has a rating of strongly disagree to strongly agree (score 1 to 5 or 5 to 1)
    1. I think that I would like to use the system frequently
    2. I found the system unnecessarily complex
    3. I thought the system was easy to use
    4. I think that I would need the support of a technical person to use this system
    5. I found the various functions of this system were well integrated
    6. I thought there was too much inconsistency in this system
    7. I would imagine that most people would learn to use this system very quickly
    8. I found the system very cumbersome to use
    9. I felt very confident using the system
    10. I needed to learn a lot of things before I could get going with this system.

**The usability metric for user experience (UMUX)** [2013]: Using less questions than SUS, similar outcome.

    Each question has a rating of strongly disagree to strongly agree (score 1 to 7 or 7 to 1)
    1. [This system's] capabilities meet my requirements.
    2. Using [this system] is a frustrating experience.
    3. [This system] is easy to use.
    4. I have to spend too much time correcting things with [this system].

**Creativity Support Index** [2014]: the evaluation of software tools for doing creative work.

    Collaboration
    Enjoyment
    Exploration
    Expressiveness
    Immersion
    [Gained] Results Worth [the] Effort

### Usability principles

**Nielson's 10 principles** (1989)

1. _Visibility of system status_<br>
   Do we know the status of the system?<br>
   Is the piece of software communicating to us?<br>
   What it's ready to do and where it's at?
2. _Match between system and the real world_<br>
   A bit old. Digital correlation with the actual physical world.
3. _User control and freedom_<br>
   What can I do at any point in the software?<br>
   Is the software constraining me?
4. _Consistency and standards_<br>
   UI/UX related
5. _Error prevention_
6. _Recognition rather than recall_
7. _Flexibility and efficiency of use_<br>
   Mentioned in the previous section
8. _Aesthetic and minimalist design_<br>
   A bit subjective, also UI/UX related
9. _Help users recognize, diagnose, and recover from errors_
10. _Help and documentation_

---

## Week 16 Accessibility testing

### Learning objectives

- Differentiate between accessibility and usability in terms of the target users
- User accessibility testing tools to identify accessibility problems with software systems
- Be aware that in the UK at least, there are legal requirements to make certain requirements to make certain software systems as accessible as reasonably possible

### Reading

- A???Checker [Web Accessibility Checker](https://achecker.achecks.ca/checker/index.php)

- [The Public Sector Bodies (Websites and Mobile Applications) (No. 2) Accessibility Regulations 2018 ](https://www.legislation.gov.uk/uksi/2018/952/contents/made)

### Accessibility

> extent to which products, systems, services, environments and facilities can be used by **people from a population with the widest range of characteristics and capabilities** to achieve a specified goal in a specified context of use
>
> ISO/IEEE 2017 p6, 3.41

> #### Usability
>
> A subset of accessibility.
> Giving a certain group of users access
>
> #### Accessibility
>
> Giving as many people as possible access

#### Legal requirements in the UK

> 6. Subject to regulation 7, public sector bodies must comply with the accessibility requirement.
>
> The Public Sector Bodies (Websites and Mobile Applications) (No. 2) Accessibility Regulations 2018

> **accessibility requirement** means the requirement to make a website or mobile application accessible by making it _perceivable_, _operable_, _understandable_, and _robust_.

---
