#include <iostream>

using namespace std;

extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libswscale/swscale.h"
#include "libavdevice/avdevice.h"
}

int main()
{
    cout << "Hello World!" << endl;

    unsigned version = avcodec_version();
    cout << "version is:" << version << endl;
    return 0;
}
