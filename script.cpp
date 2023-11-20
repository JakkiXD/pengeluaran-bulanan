#include <stdio.h>

int main() {
    // Inisialisasi variabel
    float monthly_expenses[12] = {0}; // Array untuk menyimpan pengeluaran bulanan
    float total_expenses = 0;

    // Input pengeluaran untuk setiap bulan
    for (int i = 0; i < 12; i++) {
        printf("Masukkan pengeluaran untuk bulan %d: $", i + 1);
        scanf("%f", &monthly_expenses[i]);
        total_expenses += monthly_expenses[i];
    }

    // Tampilkan daftar pengeluaran bulanan
    printf("\nDaftar pengeluaran bulanan:\n");
    for (int i = 0; i < 12; i++) {
        printf("Bulan %d: $%.2f\n", i + 1, monthly_expenses[i]);
    }

    // Tampilkan total pengeluaran selama setahun
    printf("\nTotal pengeluaran selama setahun: $%.2f\n", total_expenses);

    return 0;
}
