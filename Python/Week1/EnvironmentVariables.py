import os

# value of PATH environment variable
path = os.environ['PATH']
print(path)

# Set new variable
os.environ['MY_VAR'] = 'my value'
# get value for the new variable
path = os.environ['MY_VAR']
print(path)