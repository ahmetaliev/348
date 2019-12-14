
#accepted

#//GNU grep allows searching recursively through subdirectories:

find  -name \*.cpp -print0 | xargs -0 grep -l 'init'
