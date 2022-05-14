# Advent Of Code

Goals of this Repo:
1. Use cmake with a c++ project
  1. Compile using gcc on debian wsl
  2. Compile using xcode
2. Make heavy use of libraries and shared code to get accustomed to linker errors.



## Linker issues encountered:

### Same function defined internally in two different static libraries

I'm honestly a bit at a loss with this one.
With my understanding, any function/class/etc that are defined within the cpp files and not exposed via the header are not visible to other cpp files that include the header. (of course as I write this I realize that I'm thinking about how object files are linked together, not how libs are linked...

So this brings me to the question of how exactly to libraries decide what is and isn't visible to their users.


