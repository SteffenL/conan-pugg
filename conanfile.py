from conans import ConanFile, CMake
import os

class PuggConan(ConanFile):
    name = "pugg"
    version = "1.0.0"
    url = "https://github.com/SteffenL/conan-pugg"
    license = "Boost"
    settings = None
    exports = "pugg/*"

    def build(self):
        pass

    def package(self):
        self.copy(pattern="*.h", dst="include/pugg", src="pugg/include/pugg")

    def package_info(self):
        pass
