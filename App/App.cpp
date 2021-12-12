#include <arrayfire.h>

int main() { 

	af::info(); 

	af::array test = af::randu(10);

	af_print(test); 

}