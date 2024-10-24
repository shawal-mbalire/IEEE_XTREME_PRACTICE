def is_subseq(x, y):
    it = iter(y)
    return all(any(c == ch for c in it) for ch in x)

def main() -> bool:

    s:str = input()
    q:int = int(input())
    p_i:list = []

    for i in range(q):
        p_i.append(input())

    # find the longest suffix
    for string in p_i:
        l = 0
        for j in range(len(string)):
            
            ss = string[:j+1]
            if  is_subseq(ss, s) and len(ss)>l:
                l = len(ss)
        print(l)
    return True
if __name__ == '__main__':
    main()