#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// xác định một cấu trúc để đại diện cho một liên hệ
struct Contact
{
    int id;
    string name;
    string phone;
    string email;
    string address;
};

// chức năng hiển thị tất cả danh bạ
void displayContacts(vector<Contact> &contacts)
{
    cout << "ID\tTen\tSDT\t\tEmail\t\t\tDia chi" << endl;
    for (auto &contact : contacts)
    {
        cout << contact.id << "\t" << contact.name << "\t" << contact.phone << "\t" << contact.email << "\t\t" << contact.address << endl;
    }
}

// chức năng thêm số liên lạc vào danh bạ
void addContact(vector<Contact> &contacts)
{
    Contact newContact;
    cout << "Nhap ten lien he: ";
    getline(cin, newContact.name);
    cout << "Nhap SDT lien he: ";
    getline(cin, newContact.phone);
    cout << "Nhap Email lien he: ";
    getline(cin, newContact.email);
    cout << "Nhap dia chi lien he: ";
    getline(cin, newContact.address);
    if (contacts.empty())
    {
        newContact.id = 1;
    }
    else
    {
        newContact.id = contacts.back().id + 1;
    }
    contacts.push_back(newContact);
    cout << "Lien he duoc them thanh cong!" << endl;
}

// chức năng tìm một số liên lạc theo tên
void findContact(vector<Contact> &contacts)
{
    string name;
    cout << "Nhap ten lien he: ";
    getline(cin, name);
    bool found = false;
    for (auto &contact : contacts)
    {
        if (contact.name == name)
        {
            cout << "ID\tTen\tSDT\t\tEmail\t\tDia chi" << endl;
            cout << contact.id << "\t" << contact.name << "\t" << contact.phone << "\t" << contact.email << "\t" << contact.address << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Khong tim thay lien he!" << endl;
    }
}

// Chức năng thay đổi thông tin danh bạ
void changeContact(vector<Contact> &contacts)
{
    int id;
    cout << "Nhap ID lien he: ";
    cin >> id;
    cin.ignore();
    bool found = false;
    for (auto &contact : contacts)
    {
        if (contact.id == id)
        {
            cout << "Nhap ten lien he moi: ";
            getline(cin, contact.name);
            cout << "Nhap SDT lien he moi: ";
            getline(cin, contact.phone);
            cout << "Nhap Email lien he moi: ";
            getline(cin, contact.email);
            cout << "Nhap dia chi lien he moi: ";
            getline(cin, contact.address);
            cout << "Thong tin lien he duoc cap nhat thanh cong!" << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Khong tim thay lien he!" << endl;
    }
}

// chức năng xóa số liên lạc trong danh bạ
void deleteContact(vector<Contact> &contacts)
{
    int id;
    cout << "Nhap ID lien he: ";
    cin >> id;
    cin.ignore();
    bool found = false;
    for (auto it = contacts.begin(); it != contacts.end(); it++)
    {
        if (it->id == id)
        {
            contacts.erase(it);
            cout << "Da xoa lien he thanh cong!" << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Khong tim thay lien he!" << endl;
    }
}

// chức năng lấy số liên lạc trong danh bạ
int getContactCount(vector<Contact> &contacts)
{
    return contacts.size();
}

// chức năng sao lưu dữ liệu danh bạ vào tập tin
void backupContacts(vector<Contact> &contacts)
{
    ofstream file("Danhba.data");
    for (auto &contact : contacts)
    {
        file << contact.id << " | " << contact.name << " | " << contact.phone << " | " << contact.email << " | " << contact.address << endl;
    }
    file.close();
    cout << "Da tao thanh cong ban sao luu danh ba!" << endl;
}

// chức năng khôi phục dữ liệu danh bạ từ tệp
void restoreContacts(vector<Contact> &contacts)
{
    ifstream file("Danhba.data");
    if (!file)
    {
        cout << "Khong tim thay tap tin sao luu danh ba!" << endl;
        return;
    }
    contacts.clear();
    string line;
    while (getline(file, line))
    {
        Contact contact;
        string id, name, phone, email, address;
        int pipeCount = 0;
        for (auto &c : line)
        {
            if (c == '|')
            {
                pipeCount++;
            }
            else
            {
                switch (pipeCount)
                {
                case 0:
                    id += c;
                    break;
                case 1:
                    name += c;
                    break;
                case 2:
                    phone += c;
                    break;
                case 3:
                    email += c;
                    break;
                case 4:
                    address += c;
                    break;
                }
            }
        }
        contact.id = stoi(id);
        contact.name = name.substr(1);
        contact.phone = phone.substr(1);
        contact.email = email.substr(1);
        contact.address = address.substr(1);
        contacts.push_back(contact);
    }
    file.close();
    cout << "Da khoi phuc danh ba thanh cong!" << endl;
}

// chức năng chính
int main()
{
    vector<Contact> contacts;
    restoreContacts(contacts);
    while (true)
    {
        cout << "----------------------------------------------" << endl;
        cout << "===== QUAN LY DANH BA DIEN THOAI =====" << endl;
        cout << "1. Hien thi toan bo thong tin cua danh ba" << endl;
        cout << "2. Them 1 contact vao danh ba" << endl;
        cout << "3. Tim contact theo ten" << endl;
        cout << "4. Thay doi thong tin cua contact trong danh ba" << endl;
        cout << "5. Xoa mot contact ra khoi danh ba" << endl;
        cout << "6. Thong ke contact trong danh ba" << endl;
        cout << "7. khoi phuc contact" << endl;
        cout << "8. Thoat" << endl;
        cout << "----------------------------------------------" << endl;
        int choice;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            displayContacts(contacts);
            break;
        case 2:
            addContact(contacts);
            break;
        case 3:
            findContact(contacts);
            break;
        case 4:
            changeContact(contacts);
            break;
        case 5:
            deleteContact(contacts);
            break;
        case 6:
            cout << "So lien lac: " << getContactCount(contacts) << endl;
            break;
        case 7:
            backupContacts(contacts);
            break;
        case 8:
            backupContacts(contacts);
            cout << "Tam biet!" << endl;
            return 0;
        default:
            cout << "Lua chon khong hop le, vui long thu lai!" << endl;
            break;
        }
    }
    return 0;
}