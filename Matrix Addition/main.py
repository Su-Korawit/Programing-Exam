# m, n = (int(f) for f in input().split())

# matrix = []
# for i in range(m*2):
#     i = input().split()
#     matrix.append(i)

# for j in range(m):
#     for k in range(n):
#         print(int(matrix[j][k]) + int(matrix[m+j][k]), end=" ")
#     print()

x1, s = (int(f) for f in input().split())
print(2 * s - x1)