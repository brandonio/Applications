for i in xrange(1,101):
    ret = ''
    if i % 3 == 0:
        ret += 'Fizz'
    if i % 5 == 0:
        msg += 'Buzz'
    if msg == '':
        msg += str(i)
    print ret
