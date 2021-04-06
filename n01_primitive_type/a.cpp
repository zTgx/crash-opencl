#include <iostream>
#include <boost/compute/types.hpp>

int main()
{
    std::cout << "打印 scalar type " << std::endl;

    std::cout << "size of cl_char   : " << sizeof(cl_char) << std::endl;    
    std::cout << "size of cl_uchar  : " << sizeof(cl_uchar) << std::endl;    
    std::cout << "size of cl_short  : " << sizeof(cl_short) << std::endl;    
    std::cout << "size of cl_ushort : " << sizeof(cl_ushort) << std::endl;    
    std::cout << "size of cl_int    : " << sizeof(cl_int) << std::endl;    
    std::cout << "size of cl_uint   : " << sizeof(cl_uint) << std::endl;    
    std::cout << "size of cl_long   : " << sizeof(cl_long) << std::endl;    
    std::cout << "size of cl_ulong  : " << sizeof(cl_ulong) << std::endl;    
    std::cout << "size of cl_float  : " << sizeof(cl_float) << std::endl;    
    std::cout << "size of cl_double : " << sizeof(cl_double) << std::endl;    

    return 0;
}
