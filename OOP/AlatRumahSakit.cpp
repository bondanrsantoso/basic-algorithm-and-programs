#include <iostream>
#include <string>
using namespace std;

class MedicTool
{
public:
    int code;
    string name;
    unsigned int amount;
    unsigned int borrowed;

    bool isEmpty()
    {
        return borrowed == amount;
    }
    bool needRestock()
    {
        return borrowed - amount == 0;
    }
    int getAvailableStock()
    {
        return amount - borrowed;
    }
    bool borrow(int borrowedAmount)
    {
        if (borrowedAmount > (amount - borrowed))
        {
            return false;
        }
        borrowed += borrowedAmount;
        return true;
    }
    void store(int returnedAmount)
    {
        if (borrowed - returnedAmount)
        {
            borrowed = 0;
        }
        else
        {
            borrowed -= returnedAmount;
        }
    }
    void add(int addAmount)
    {
        amount += addAmount;
    }
    MedicTool(int c, string n, unsigned int a)
    {
        code = c;
        name = n;
        amount = a;
        borrowed = 0;
    }
};

int main()
{
    MedicTool tools[10] = {
        MedicTool(156, "Gunting", 10),
        MedicTool(498, "Suntik", 50),
        MedicTool(107, "Pinset", 30),
        MedicTool(597, "Sarung tangan", 25),
        MedicTool(308, "Masker", 15),
        MedicTool(342, "Bed", 5),
        MedicTool(478, "Selimut", 12),
        MedicTool(692, "Perlak", 24),
        MedicTool(783, "Kursi Roda", 9),
        MedicTool(186, "Tandu", 7),
    };
    while (true)
    {
        int option = 0;
        cout << "Rumah Sakit Duniawi\n";
        cout << "===================\n";
        cout << "       Menu        \n";
        cout << "===================\n";
        cout << "1. Cari alat medis\n";
        cout << "2. Tampilkan Alat yang tersedia\n";
        cout << "3. Tampilkan Alat yang kosong\n";
        cout << "4. Pinjam Alat\n";
        cout << "===================\n";
        cout << "Pilihan Anda (1-4): ";
        cin >> option;
        cout << "===================\n";

        if (option == 1)
        {
            cout << "1. Cari kode\n";
            cout << "2. Cari nama\n";
            cout << "Pilihan Anda (1-2): ";
            cin >> option;
            int i = 10;
            switch (option)
            {
            case 1:
            {
                int code;
                cout << "Kode alat: ";
                cin >> code;
                for (i = 0; i < 10; i++)
                {
                    if (tools[i].code == code)
                        break;
                }
                break;
            }

            case 2:
            {
                string name = "";
                cout << "Nama alat: ";
                cin >> name;
                int i;
                for (i = 0; i < 10; i++)
                {
                    if (tools[i].name == name)
                        break;
                }
                break;
            }

            default:
                break;
            }
            if (i == 10)
            {
                cout << "Tidak ditemukan\n";
            }
            else
            {
                cout << "=====================\n";
                cout << "Nama: " << tools[i].name << endl;
                cout << "Jumlah: " << tools[i].amount << endl;
                cout << "Tersedia: " << tools[i].getAvailableStock() << endl;
                cout << "Dipinjam: " << tools[i].borrowed << endl;
                cout << "=====================\n";
            }
        }
        else if (option == 2)
        {
            for (int i = 0; i < 10; i++)
            {
                if (!tools[i].isEmpty())
                {
                    cout << "(" << tools[i].code << ") " << tools[i].name << ": " << tools[i].getAvailableStock() << " item (" << ((tools[i].getAvailableStock() >= 5) ? "Banyak" : "Kurang")
                         << ")\n";
                }
            }
        }
        else if (option == 3)
        {
            for (int i = 0; i < 10; i++)
            {
                if (tools[i].isEmpty())
                {
                    cout << "(" << tools[i].code << ") " << tools[i].name << ": Kosong\n";
                }
            }
        }
        else if (option == 4)
        {
            int code;
            cout << "Kode alat: ";
            cin >> code;
            int x = 10;
            for (x = 0; x < 10; x++)
            {
                if (tools[x].code == code)
                    break;
            }
            if (x == 10)
            {
                cout << "Alat tidak ditemukan\n";
                break;
            }
            int borrowedAmount = 0;
            cout << "Jumlah pinjam: ";
            cin >> borrowedAmount;
            bool isBorrowed = tools[x].borrow(borrowedAmount);
            if (!isBorrowed)
            {
                cout << "Peminjaman gagal, Sesuaikan jumlah pinjaman Anda\n";
            }
            cout << "Peminjaman Berhasil\n";
        }
        else
        {
            cout << "Pilihan invalid\n";
        }
    }
}