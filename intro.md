# Introduction to Data Structures & Algorithms

There are 3 questions to be asked about any algorithm:

1. Is it correct?
2. How much time does it take, as a function of _n_?
3. Can we do better?

_[Source: Algorithms (1e)]_



## Commonsense rules for Big-O notation

1. Multiplicative constants can be omitted:
   *14n<sup>2</sup> becomes n<sup>2</sup>*
2. *n<sup>a</sup>* dominates *n<sup>b</sup>* if `a > b`:
   *n<sup>2</sup>* dominates *n*
3. Any exponential dominates any polynomial:
   *3<sup>n</sup>* dominates *n<sup>5</sup>* and even *2<sup>n</sup>*
4. Any polynomial nominates any logarithm:
   *n* dominates *(log n)<sup>3</sup>*, *n<sup>2</sup>* dominates *n log n*

_[Source: Algorithms (1e)]_
