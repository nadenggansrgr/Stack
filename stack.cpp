#include <iostream>
#include <conio.h>
#define max 5

using namespace std;

int  index=-1;
int data[max];

bool isEmpty()
{
    if (index==-1)
    {
        return true;
    }else
    {
        return false;
    }
}

bool isFull()
{
    if (index==max-1)
    {
        return true;
    }else
    {
        return false;
    }
}

void push()
{
    if(!isFull())
    {
        cout << "Masukkan nilai pada index ke-"<<index+1<<" : "; cin >> data[index+1];
        index++;
    }else
    {
        cout << "Tumpukan sudah penuh! " << endl;
    }
}

void pop()
{
    if(!isEmpty())
    {
        cout << "Tumpukan teratas sudah diambil!" << endl;
        index--;
    }else
    {
        cout << "Tumpukan kosong!" << endl;
    }
}

void display ()
{
    if (!isEmpty())
    {
        cout << endl;
        cout << "=================================" << endl;
        cout << "\t Tampilan Stack " << endl;
        cout << "=================================" << endl;
        for (int i=index; i>=0; i--)
        {
            cout << "Nilai pada index ke-"<<i<< " : " << data[i];
            cout << endl;
        }
    }else
    {
        cout << "Tumpukan kosong!" << endl;
    }
}

int peek (int index)
{
    if (isEmpty())
    {
        cout << "Tumpukan kosong" << endl;
        return 0;
    }else
    {
        cout << "Tumpukan teratas index ke-"<<index<<" dengan nilai "<< data[index];
        return 0;
    }
}

int banyakTumpukan()
        {
            return (index+1);
        }

void ubah (int pos, int val)
        {
            data[pos]=val;
            cout << "Nilai berubah di tumpukan ke-"<< pos << endl;
            getch();
            system("cls");
        }

int main()
{
    int angka, posisi, value;
    char pilih;

    do
    {

    do
    {
        cout << "=================================" << endl;
        cout << "\t PROGRAM STACK" << endl;
        cout << "=================================" << endl;
        cout << "1. IsEmpty " << endl;
        cout << "2. IsFull " << endl;
        cout << "3. Push " << endl;
        cout << "4. Pop " << endl;
        cout << "5. Display " << endl ;
        cout << "6. Peek " << endl;
        cout << "7. Count " << endl;
        cout << "8. Change " << endl;
        cout << "9. Clear Screen" << endl;
        cout << "Masukkan angka pilihan Anda : ";cin >> angka ;

        switch (angka)
        {
            case 1:
            if (isEmpty())
            {
                cout << "Tumpukan kosong !" << endl;
            }else
            {
                cout << "Tumpukan tidak kosong !" << endl;
            }
            getch();
            system ("cls");
            break;

            case 2:
            if (isFull())
            {
                cout << "Tumpukan penuh!" << endl;
            }else
            {
                cout << "Tumpukan tidak penuh!" << endl;
            }
            getch();
            system ("cls");
            break;

            case 3:
            push();
            getch();
            system ("cls");
            break;

            case 4:
            pop();
            getch();
            system ("cls");
            break;

            case 5:
            display();
            getch();
            system ("cls");
            break;


            case 6:
            peek(index);
            getch();
            system ("cls");
            break;

            case 7:
            banyakTumpukan();
            cout << "Banyaknya tumpukan adalah "<< banyakTumpukan()<< endl;
            getch();
            system ("cls");
            break;

            case 8:
            if (isEmpty())
            {
                cout << "Tumpukan kosong" << endl;
                getch();
                system("cls");
            }else
            {
                system("cls");
                cout << "Masukkan index tumpukan yang ingin dirubah :";cin>>posisi;
                cout << "Masukkan nilai pengganti :";cin>>value;
                ubah(posisi,value);
            }

            break;

            case 9:
            system("cls");
            break;


        }
    }while (angka != 1 && angka != 2 && angka != 3 && angka != 4 && angka != 5 );

    cout << " Apakah Anda mau memilih lagi? [Y/T] : "; cin >> pilih;
    system ("cls");
    }while (pilih == 'Y' || pilih == 'y');

    return 0;
}
