def listing_all(A:int, B:int)-> int:
    fA = []
    fB = []
    fC = []

    for i in range(1,A+1):
        if A%i == 0: fA.append(i)

    for i in range(1,B+1):
        if B%i == 0: fB.append(i)

    for element in fA:
        if element in fB:
            fC.append(element)
    return fC[-1]

def finding_common(A:int, B:int)-> int:
    print('finding_common')
    fC = []
    for i in range(1,A+1):
        if A%i == 0 and B%i==0: fC.append(i)
    return fC[-1]

def euclid(A:int, B:int)-> int:
    # Using this lemma, we express the larger number “a” in terms of the smaller number “b” in the quotient remainder form a=bq+r
    # if r=0 b is gcd and r = a%b
    print('euclid')
    while B != 0:
        A, B = B, A % B

    return abs(A)

if __name__ == '__main__':
    A, B = list(map(int,input().split()))
    # print(listing_all(A,B))
    # print(finding_common(A,B))
    print(euclid(A,B))