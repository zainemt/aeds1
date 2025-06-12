#include <iostream>

int somaExtremosDaMatriz(int *matriz, int N, int M)
{
    int total = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i == 0 || i == (N - 1) || j == 0 || j == (M - 1))
            {
                total += matriz[i * M + j];
            }
        }
    }
    return total;
}

int main()
{
    int N, M;
    std::cin >> N;
    std::cin >> M;

    int matriz[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cin >> matriz[i][j];
        }
    }
    int total = somaExtremosDaMatriz(&matriz[0][0], N, M);
    std::cout << total;

    return 0;
}