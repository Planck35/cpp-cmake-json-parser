Step1: install vcpkg following this [link](https://vcpkg.io/en/docs/users/buildsystems/cmake-integration.html)

Step2: Add related DCMAKE_TOOLCHAIN_FILE on your editor

Step3: Install JsonCPP vcpkge library following:

Windows for example:
```shell
vcpkg.exe install jsoncpp:x64-windows
vcpkg.exe install jsoncpp:x86-windows
```

Step4: Build and Run!