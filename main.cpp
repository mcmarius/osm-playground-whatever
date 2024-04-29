#include <tangram.h>
#include <linuxPlatform.h>
int main() {
    std::unique_ptr<Tangram::Platform> p = std::make_unique<Tangram::LinuxPlatform>();
    auto map = new Tangram::Map(std::move(p));
    map->setupGL();
    // see https://github.com/tangrams/tangram-es/blob/main/platforms/linux/src/main.cpp
}
