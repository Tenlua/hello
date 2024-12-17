#include <iostream>
#include <string>
#include <unordered_map>

// Lớp SinhVien đại diện cho thông tin của một sinh viên
class SinhVien {
public:
    // Thuộc tính
    std::string hoTen;
    std::string email;
    std::string soDienThoai;
    std::string maSV; // Mã số sinh viên dưới dạng chuỗi

    // Phương thức khởi tạo
    SinhVien(std::string ten, std::string ma, std::string mail, std::string sdt) {
        hoTen = ten;
        maSV = ma;
        email = mail;
        soDienThoai = sdt;
    }

    // Phương thức in thông tin sinh viên
    void inThongTin() {
        std::cout << "Mã SV: " << maSV << std::endl;
        std::cout << "Họ tên: " << hoTen << std::endl;
        std::cout << "Email: " << email << std::endl;
        std::cout << "Số điện thoại: " << soDienThoai << std::endl;
    }
};

// Hàm băm mã số sinh viên thành giá trị băm (SHA-256)
std::string hashMASV(const std::string& masv) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256(reinterpret_cast<const unsigned char*>(masv.c_str()), masv.length(), hash);

    std::string hashedValue;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        hashedValue += std::to_string(hash[i]);
    }

    return hashedValue;
}

int main() {
    // Tạo một danh sách liên kết (hash table) lưu trữ thông tin sinh viên
    std::unordered_map<std::string, SinhVien> danhSachSV;

    // Thêm thông tin sinh viên vào danh sách
    danhSachSV[hashMASV("12345")] = SinhVien("John Doe", "12345", "john.doe@example.com", "123-456-7890");

    // Tra cứu thông tin sinh viên dựa trên mã số sinh viên
    std::string masvDuocTraCuu = "12345";
    std::string hashedMASVDuocTraCuu = hashMASV(masvDuocTraCuu);
    if (danhSachSV.find(hashedMASVDuocTraCuu) != danhSachSV.end()) {
        danhSachSV[hashedMASVDuocTraCuu].inThongTin();
    } else {
        std::cout << "Không tìm thấy thông tin cho mã số sinh viên " << masvDuocTraCuu << std::endl;
    }

    return 0;
}
