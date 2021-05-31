# Parallel-fork
To test this:
• First you need to run all the patches (directories are mentioned in design)
• You need to make the kernel again (check a guide on how to compile the kernel)
• You need to copy pfork.h into usr/include, in order to be able to import in
pfork_test.c
• After that you need to compile the pfork_test.c using
o Gcc pfork_test.c -o pfork o Then ./pfork to run
