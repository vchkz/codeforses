#include <iostream>
#include <cmath>

int main() {
    int inn;
    std::cin >> inn;
    for (int i = 0; i < inn; i++) {
        int ch;
        std::cin >> ch;
        int chCopy = ch;

        int co = 0;
        int len = 0;
        int coun = 0;
        int ww = 0;
        int nn = 0;



        //разрядность числа
        while (ch) {

            ww = ch % 10;
            if (ww != 0){
                nn += 1;
            }

            ch /= 10;
            len += 1;
        }


        std::cout << nn << "\n";

        //количество неноликов




        for (int j = 0; j < len; j++) {


            int tem = 0;
            tem = chCopy % 10;
            chCopy /= 10;

            if (tem != 0) {
                std::cout << tem * pow(10, j) << " ";

            }

        }




    }


    return 0;
}