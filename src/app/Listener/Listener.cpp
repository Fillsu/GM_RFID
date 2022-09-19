#include "Listener.h"

Listener::Listener(mfrc522 *rfid)
{
this->rfid=rfid;
}

Listener::~Listener()
{

}


void Listener::checkEvent()
{
    uint8_t byte;

if((byte=rfid->mfrc522_request(PICC_REQALL,RFIDData)) == CARD_FOUND )
{

rfid->mfrc522_get_card_serial(RFIDData);
for(int i=0;i<5;i++)
{

    printf("%02x",RFIDData[i]);
}
}
    
}