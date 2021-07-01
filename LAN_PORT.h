#ifndef LAN_PORT_H
#define  LAN_PORT_H


#define MCU_PORT_LAN_LEDA OUTPUT
#define MCU_PORT_LAN_LEDB OUTPUT
#define MCU_PORT_LAN_TPOUTP OUTPUT
#define MCU_PORT_LAN_TPOUTM OUTPUT
#define MCU_PORT_LAN_TPINP INPUT
#define MCU_PORT_LAN_TPINM INPUT

unsigned int _LAN_LEDA; //
unsigned int _LAN_LEDB; //
unsigned int _LAN_TPOUTP; //
unsigned int _LAN_TPOUTM; //
unsigned int _LAN_TPINP; //
unsigned int _LAN_TPINM; //

class LAN_PORT{
  public:
  LAN_PORT(int CONN9_LEDA, int CONN12_LEDB, int CONN1_TPOUTP, int CONN2_TPOUTM, int CONN3_TPINP, int CONN6_TPINM){
    _LAN_LEDA = CONN9_LEDA;
    _LAN_LEDB = CONN12_LEDB;
    _LAN_TPOUTP = CONN1_TPOUTP;
    _LAN_TPOUTM = CONN2_TPOUTM;
    _LAN_TPINP = CONN3_TPINP;
    _LAN_TPINM = CONN6_TPINM;

  };

 void initial(){
  }

 void transmitter(){
    
  }

 void receiver(){
    
  }
  
 void finalize(){
    
  }
    
  private:
  protected:
};
#endif
