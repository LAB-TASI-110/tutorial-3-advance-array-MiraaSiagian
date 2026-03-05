#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;          
    long long total_nilai = 0; 
    
    scanf("%d", &n);

    int *nilai_mahasiswa = (int *)malloc(n * sizeof(int));
    if (nilai_mahasiswa == NULL) {
        return 1; 
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai_mahasiswa[i]); 
        total_nilai += nilai_mahasiswa[i]; 
    }

    double rata_rata = (double)total_nilai / n;

    int count_di_atas_rata = 0;
    for (int i = 0; i < n; i++) {
        if (nilai_mahasiswa[i] >= rata_rata) {
            count_di_atas_rata++;
        }
    }

    printf("%lld\n", total_nilai);
    printf("%.2f\n", rata_rata);
    printf("%d\n", count_di_atas_rata);

    free(nilai_mahasiswa);
    nilai_mahasiswa = NULL;

    return 0;
}
