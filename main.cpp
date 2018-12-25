#include "pxt.h"

namespace robobloq {





    /**
    * Send a buffer through serial connection
    */
  
    //% help=robobloq/write-buffer
    void writeBuffer(Buffer buffer) {
      if (!buffer) return;

      uBit.serial.send(buffer->data, buffer->length);
    }
}