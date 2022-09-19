#ifndef LISTENER_H
#define LISTENER_H

#pragma once

#include "mfrc522.h"

class Listener
{
public:
    Listener(mfrc522 *rfid);
    ~Listener();
   void checkEvent();
   mfrc522 *rfid;
    uint8_t RFIDData[16];
private:

};

#endif