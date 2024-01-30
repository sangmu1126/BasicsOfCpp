/*********************************************************
 * 파일에서 0~9 범위의 정수를 읽어 들이고                *
 * 빈도 배열과 히스토그램을                              *
 * 만들어서 출력하는 프로그램                            *
 *********************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <locale>
#include <codecvt>
using namespace std;

// string utf8_to_ascii(const std::string& utf8_string) {
//     std::string ascii_string;

//     for (char c : utf8_string) {
//         // ASCII 문자인 경우에만 유지
//         if (c <= 127) {
//             ascii_string += c;
//         }
//         // ASCII 문자가 아닌 경우에는 무시
//     }

//     return ascii_string;
// }

int main()
{
    // 선언과 초기화
    const int CAPACITY = 10;
    int frequencies[CAPACITY] = {0};
    ifstream integerFile;

    std::string utf8_filename = "integerFile.dat";
    // ASCII로 인코딩된 파일의 경로
    std::string ascii_filename = "output_ascii.dat";

    // 입력 파일 열기
    std::ifstream input_file(utf8_filename);
    if (!input_file.is_open()) {
        std::cerr << "입력 파일을 열 수 없습니다." << std::endl;
        return 1;
    }

    // 출력 파일 열기
    std::ofstream output_file(ascii_filename);
    if (!output_file.is_open()) {
        std::cerr << "출력 파일을 열 수 없습니다." << std::endl;
        input_file.close();
        return 1;
    }

    // 파일 내용 읽어오기 및 ASCII로 변환하여 출력 파일에 쓰기
    std::string line;
    while (std::getline(input_file, line)) {
        // ASCII 문자만을 유지하여 출력 파일에 쓰기
        for (char c : line) {
            if (static_cast<unsigned char>(c) <= 127) {
                output_file.put(c);
            }
        }
    }

    // 파일 닫기
    input_file.close();
    output_file.close();
    // 정수 파일 열기
    
    integerFile.open("output_ascii.dat");
    

    if (!integerFile)
    {
        cout << "숫자 파일을 열 수 없습니다." << endl;
        cout << "프로그램을 중단합니다.";
        return 0;
    }
    // 파일에서 정수 읽어 들이고, 빈도 배열 생성
    int data;
    int size = 0;
    while (integerFile >> data)
    {
        if (data >= 0 && data <= 9)
        {
            size++;
            frequencies[data]++;
        }
    }
    // 정수 파일 닫기
    integerFile.close();
    // 빈도 배열과 히스토그램 출력
    cout << "파일 안에 " << size << "개의 유효한 데이터가 있습니다." << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << setw(3) << i << " ";

        for (int f = 1; f <= frequencies[i]; f++)
        {
            cout << '*';
        }
        cout << " " << frequencies[i] << endl;
    }
    return 0;
}