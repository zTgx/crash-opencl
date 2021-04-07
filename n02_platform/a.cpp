#include <iostream>
#include <boost/compute/types.hpp>
#include <boost/compute/system.hpp>
#include <vector>

namespace compute = boost::compute;

// 给 namespace boost::compute 添加 打印 platform 信息的方法
namespace boost {
	namespace compute {
        // 重载 operator << , 方便打印。
		std::ostream& operator << (std::ostream& os, const platform& pf) {
             static size_t pre_blank = 25;
             static size_t end_blank = 35;

            // platform ID
            os.width(pre_blank);
			os << "platform id      : ";
            os.width(end_blank);
            os << pf.id() << "\n";

            // platform name
            os.width(pre_blank);
			os << "platform name    : ";
            os.width(end_blank);
            os << pf.name() << "\n";

            // platform vendor
            os.width(pre_blank);
            os << "platform vendor  : ";
            os.width(end_blank);
            os << pf.vendor() << "\n";

            // platform profile
            os.width(pre_blank);
            os << "platform profile : ";
            os.width(end_blank);
            os << pf.profile() << "\n";

            // platform version
            os.width(pre_blank);
            os << "platform version : ";
            os.width(end_blank);
            os << pf.version() << "\n";

            // platform extensions
            os.width(pre_blank);
            os << "platform extensions : ";
            os.width(end_blank);
            for(auto& e : pf.extensions()) {
                os.width(0);
                os << e << " ";
            }
            os << "\n";

            // platform device count
            os.width(pre_blank);
            os << "platform device count : ";
            os.width(end_blank);
            os<< pf.device_count() << "\n";

			return os;
		}
	}
}

int main()
{
	// 获取支持的 platform 列表
	std::vector<compute::platform> platforms = compute::system::platforms();
	size_t platform_count = compute::system::platform_count();
	if ( platform_count <= 0 ) {
		return -1;
	}

	// 使用第一个 platform
	compute::platform pf = platforms[0]; 
	std::cout << pf << std::endl;
		

    return 0;
}
