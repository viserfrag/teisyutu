H, W, X, Y = map(int,input().split())

X-=1;Y-=1
S=[list(input()) for i in range(H)]
ans={(X,Y)}
for i in range(X+1, H):
    if S[i][Y]=="#":
        break
    ans.add((i,Y))
for i in range(X)[::-1]:
    if S[i][Y]=="#":
        break
    ans.add((i,Y))
for j in range(Y+1,W):
    if S[X][j]=="#":
        break
    ans.add((X,j))
for j in range(Y)[::-1]:
    if S[X][j]=="#":
        break
    ans.add((X,j))
print(len(ans))
