#include <sys/utsname.h>
#include <stdio.h>

int main(void){
    struct utsname info;
    uname(&info);

    printf("\nSysname: %s \nNodename: %s \nRelease: %s \nVersion: %s \nMachine: %s\n\n", 
            info.sysname, info.nodename, info.release, info.version, info.machine);

    return 0;
}