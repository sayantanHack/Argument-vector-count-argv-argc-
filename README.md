# Argument-vector-count-argv-argc-
This is a code about argument counts and argument vector . 

# Why args in Cli ?
Sometimes we have to give some args through cli (specially in case of cli tools). 

# Sooo how it works ?
There have no rocket science behind it . 

ARGC : The argc(arg count) simply counts the numbers of args are passed through CLI , including the 
object file(./obj for linux) , (.exe on windows).
 Ex. the obj file is named test (test.exe for windows) .When you give the command ./test , then the argc will contain 1 in it. If you 
 give command ./test hello 2 (hello 2 is just for test purpose you can use any other datatypes .I used one string & int) then argc 
 will contain 3 as it includes all the args passed through cli.
ARGV : The argc (arg vector) is the array of the args are passed through cli. 
Ex. from the above example the argv[0] = ./test , argv[1] = hello , argv[2] = 2
