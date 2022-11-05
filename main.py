import numpy, pylab
data = []

with open('data.txt') as f:
    lines = f.readlines()
    
    data.append(lines)
    
print(data)

# data = numpy.memmap("test.pcm", dtype='h', mode='r')
# print data

pylab.plot(data)
pylab.show()
