import math

def is_prime(n):
    #print "TEST: ",n
    
    if n==2:
        return True
    
    # test if n is even
    if n % 2 == 0:
        return False
    # test each odd number from 3 to sqrt(n)
    k=int(math.sqrt(n))

    i=3
    while (i<k):
        if n % i == 0:
            return False
        i+=2

    # n is necessarily prime
    return True



start = int (pow(10,17))
print start
end = int (pow(10,18))
print end

i=start
while (i < end):
    if(is_prime(i)):
        print "PRIME: ",i
    i+=1


