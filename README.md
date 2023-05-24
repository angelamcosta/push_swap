# 🔄 Push_swap

<div align=center>

  ![badge](https://raw.githubusercontent.com/angelamcosta/angelamcosta/main/42_badges/push_swape.png)

  [![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)  [![forthebadge](https://forthebadge.com/images/badges/built-by-codebabes.svg)](https://forthebadge.com)  [![anlima's 42 push_swap Score](https://badge42.vercel.app/api/v2/cl9oe5ogt00110fm6h34z9iu9/project/2986331)](https://github.com/JaeSeoKim/badge42)
</div>

<div align=center>
  <img alt="GitHub Language Count" src="https://img.shields.io/github/languages/count/angelamcosta/push_swap" /> <img alt="GitHub Top Language" src="https://img.shields.io/github/languages/top/angelamcosta/push_swap" /> <img alt="GitHub Contributors" src="https://img.shields.io/github/contributors/angelamcosta/push_swap" /> <img alt="GitHub Last Commit" src="https://img.shields.io/github/last-commit/angelamcosta/push_swap" /> <img alt="Github License" src="https://img.shields.io/github/license/angelamcosta/push_swap" /> <a href="https://wakatime.com/badge/user/0c29d5b3-c30b-4e1a-ad07-2da3bd4f7e05/project/dabcdb49-57a2-40f5-af8e-21c8adb85299"><img src="https://wakatime.com/badge/user/0c29d5b3-c30b-4e1a-ad07-2da3bd4f7e05/project/dabcdb49-57a2-40f5-af8e-21c8adb85299.svg" alt="wakatime"></a>
</div>

Push_swap is a program written in C that solves the sorting problem for two stacks named `a` and `b`. The goal is to sort the numbers in stack `a` in ascending order using a specific set of operations. The program aims to find the smallest list of instructions to achieve the desired sorted state. The subject of the project can be found in this [link](https://raw.githubusercontent.com/angelamcosta/push_swap/main/en.subject.pdf).

## 🎮 Game rules

- The game is composed of 2 stacks named `a` and `b`.
- To start with:
  - the stack `a` contains a random amount of negative and/or positive numbers which cannot be duplicated.
  - `b` is empty.
- The goal is to sort in ascending order numbers into stack `a`.
- To do this you have the following operations at your disposal:

  - `sa`: swap a - swap the first 2 elements at the top of stack `a`. Do nothing if there is only one or no elements).
  - `sb`: swap b - swap the first 2 elements at the top of stack `b`. Do nothing if there is only one or no elements).
  - `ss`: sa and sb at the same time.
  - `pa`: push a - take the first element at the top of b and put it at the top of `a`. Do nothing if `b` is empty.
  - `pb`: push b - take the first element at the top of `a` and put it at the top of `b`. Do nothing if `a` is empty.
  - `ra`: rotate a - shift up all elements of stack `a` by 1. The first element becomes the last one.
  - `rb`: rotate b - shift up all elements of stack `b` by 1. The first element becomes the last one.
  - `rr`: ra and rb at the same time.
  - `rra`: reverse rotate a - shift down all elements of stack `a` by 1. The last element becomes the first one.
  - `rrb`: reverse rotate b - shift down all elements of stack `b` by 1. The last element becomes the first one.
  - `rrr`: rra and rrb at the same time.

## 🚀 Usage

To use the push_swap program, navigate to the files/ directory and run the following command::

```shell
make
```

Execute the program by providing the stack `a` as command-line arguments:
```shell
./push_swap 2 1 3 6 5 8
```

The program will display the smallest list of instructions to sort the stack `a`, with the smallest number at the top.