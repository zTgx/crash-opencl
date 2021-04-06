#include <iostream>

#include <boost/compute.hpp>

namespace compute = boost::compute;

namespace boost {
	namespace compute {
	void print_device(const device& device) {
		std::cout << device.name() << std::endl;
	}
	}
}
int main()
{
    // get the default device
    compute::device device = compute::system::default_device();

    // print the device's name
    std::cout << "hello from device : " << device.name() << " , and vendor : " << device.vendor() << std::endl;
    std::cout << "profile : " << device.profile() << std::endl;

    compute::print_device(device);

    // platform 
    for(const auto &platform : boost::compute::system::platforms()){
        std::cout << "platform name : " << platform.name() << std::endl;
    }

    return 0;
}
