// ----------------------------------------
// Pin Assign
// ----------------------------------------
/*
PIN		|	Function
----------------|--------------------------
PC10		|	SO Serial Data
PC11		|	S1 Serial Data
PC12		|	S2 Serial Data
PD2		|	S3 Serial Data
----------------|--------------------------
PA15		|	Shift Register Clock
PA4		|	Shift Register Clear (Negative)
PB7		|	Shift Register Output Enable (Negative)
PC3		|	Shift Register Read Clock
----------------|--------------------------
PC2		|	Decoder Enable
PC1		|	Decoder Address 0
PA0		|	Decoder Address 1
PB0		|	Decoder Address 2


*/

// ----------------------------------------
// Predefine Dataset for Angle
// ----------------------------------------
uint8_t angle_0_horn_26_deg[20][10]={
            {0,1,0,0,0,0,0,0,1,0},
            {0,0,1,1,1,1,1,1,0,0},
            {0,1,0,0,1,1,0,0,1,0},
            {1,1,0,0,0,0,0,0,1,1},
            {0,1,0,1,1,1,1,0,1,0},

            {0,0,1,1,1,1,1,1,0,0},
            {0,1,0,1,1,1,1,0,1,0},
            {1,1,0,0,0,0,0,0,1,1},
            {0,1,0,0,1,1,0,0,1,0},
            {0,0,1,1,1,1,1,1,0,0},

            {1,0,1,0,0,0,0,1,0,1},
            {0,1,1,0,0,0,0,1,1,0},
            {0,1,0,1,1,1,1,0,1,0},
            {1,1,0,0,0,0,0,0,1,1},
            {0,1,0,1,0,0,1,0,1,0},

            {1,1,0,0,1,1,0,0,1,1},
            {1,1,0,1,0,0,1,0,1,1},
            {0,1,0,0,1,1,0,0,1,0},
            {1,0,0,1,1,1,1,0,0,1},
            {0,1,0,0,0,0,0,0,1,0}
};
uint8_t angle_30_horn_26_deg[20][10]={
            {0,0,0,0,0,1,0,0,1,1},
            {0,1,0,1,0,0,1,1,0,0},
            {1,1,1,1,1,0,1,1,1,0},
            {0,1,0,1,0,1,1,1,1,1},
            {0,0,0,0,0,1,0,0,0,0},

            {1,0,1,0,1,1,0,0,0,0},
            {0,0,1,1,0,0,1,1,1,1},
            {1,0,1,0,1,0,0,0,0,0},
            {0,1,1,1,1,0,1,0,0,1},
            {1,0,1,0,1,0,0,1,1,0},

            {0,1,1,1,1,0,1,0,0,1},
            {1,0,1,0,1,0,0,1,1,0},
            {0,0,1,1,0,0,1,1,1,1},
            {1,0,1,0,1,0,0,0,0,0},
            {0,0,0,0,0,1,0,0,0,0},

            {1,0,1,0,1,1,0,0,0,0},
            {1,1,1,1,1,0,1,1,1,0},
            {0,1,0,1,0,1,1,1,1,1},
            {0,0,0,0,0,1,0,0,1,1},
            {0,1,0,1,0,0,1,1,0,0}
};

uint8_t angle_15_horn_26_deg[20][10]={
            {1,0,1,1,1,1,1,1,0,1},
            {0,1,1,1,1,1,1,1,1,0},
            {1,1,0,0,1,1,0,0,1,1},
            {1,1,0,0,0,0,0,0,1,1},
            {0,0,1,0,0,0,0,1,0,0},

            {0,0,0,1,1,1,1,0,0,0},
            {1,1,0,0,1,1,0,0,1,1},
            {0,0,1,1,1,1,1,1,0,0},
            {1,0,1,1,0,0,1,1,0,1},
            {0,1,1,1,0,0,1,1,1,0},

            {0,1,1,0,0,0,0,1,1,0},
            {1,1,1,0,0,0,0,1,1,1},
            {0,1,0,0,0,0,0,0,1,0},
            {1,1,0,0,0,0,0,0,1,1},
            {0,1,0,0,0,0,0,0,1,0},

            {1,1,0,0,0,0,0,0,1,1},
            {0,1,0,0,0,0,0,0,1,0},
            {1,1,0,0,0,0,0,0,1,1},
            {0,1,0,0,0,0,0,0,1,0},
            {1,1,0,0,0,0,0,0,1,1}
};
uint8_t angle_45_horn_26_deg[20][10]={
            {1,0,1,1,1,1,1,1,0,1},
            {0,1,1,1,1,1,1,1,1,0},
            {1,0,1,1,1,1,1,1,0,1},
            {1,0,0,0,0,0,0,0,0,1},
            {0,0,1,1,0,0,1,1,0,0},

            {1,1,1,1,0,0,1,1,1,1},
            {1,0,1,1,1,1,1,1,0,1},
            {1,0,0,0,0,0,0,0,0,1},
            {1,0,0,1,1,1,1,0,0,1},
            {0,1,1,1,1,1,1,1,1,0},

            {0,1,0,0,0,0,0,0,1,0},
            {1,1,0,0,0,0,0,0,1,1},
            {0,0,1,1,0,0,1,1,0,0},
            {0,0,0,0,1,1,0,0,0,0},
            {1,1,0,0,1,1,0,0,1,1},

            {0,0,1,1,1,1,1,1,0,0},
            {1,0,1,1,1,1,1,1,0,1},
            {0,1,1,1,1,1,1,1,1,0},
            {0,1,0,0,0,0,0,0,1,0},
            {1,1,0,0,0,0,0,0,1,1}
};

//idle setup
HardwareTimer timer(TIM1);
int num_element=11; // order of elements
int num_trans=5; //number time of transfering
int count_element=0; //count elements
int count_trans=0; // count the number of transfering

int SR_CLK=0;  //SR clock
int SR_delay=0; //check delay after transfer 10 bits

int DE_ADD=0; //decoder address
int DE_ADD0=0; //decoder bit 0
int DE_ADD1=0; //decoder bit 1
int DE_ADD2=0; //decoder bit 2

int array[20][10]; //array data
int in_angle;

//choosing codebook from serial input data
void send_data(){
  switch (in_angle){
    case 0x01:
      for (int i=0;i<20;i++){
        for (int j=0;j<10;j++){
          array[i][j]=angle_0_horn_26_deg[i][j];
        }
      }  
      break;
    case 0x02:
      for (int i=0;i<20;i++){
        for (int j=0;j<10;j++){
          array[i][j]=angle_15_horn_26_deg[i][j];
        }
      }  
      break;
    case 0x03:
      for (int i=0;i<20;i++){
        for (int j=0;j<10;j++){
          array[i][j]=angle_30_horn_26_deg[i][j];
        }
      }  
      break;
    
    case 0x04:
      for (int i=0;i<20;i++){
        for (int j=0;j<10;j++){
          array[i][j]=angle_45_horn_26_deg[i][j];
        }
      }  
      break;
    default:
      for (int i=0;i<20;i++){
        for (int j=0;j<10;j++){
          array[i][j]=1;
        }
      } 
  }
  
  //send data out:
  if (count_trans<num_trans) {
    if (count_element<num_element){
      if (SR_CLK ==1){

        digitalWrite(PA4,HIGH); //SR_CLR
        digitalWrite(PC10, array[count_trans][count_element]); 
        digitalWrite(PC11, array[count_trans+5][count_element]);
        digitalWrite(PC12, array[count_trans+10][count_element]);
        digitalWrite(PD2, array[count_trans+15][count_element]);

        SR_CLK=0;
        digitalWrite(PA15,SR_CLK);
        //timer.pause();
        //delay(1);
        //timer.resume();

        digitalWrite(PC2,LOW); //disenable Decoder
        digitalWrite(PB7,HIGH); //SR_nOEs=1;
        digitalWrite(PC3,LOW); //r_CLK=0;
        count_element=count_element+1;
        //all decoder address signals =0
        digitalWrite(PC1,LOW); //D0 decoder
        digitalWrite(PA0,LOW); //D1 decoder
        digitalWrite(PB0,LOW); //D2 decoder

        
        //when finish transfering enough 10 bits: transfer data for decoder address signals and move to next row
        if (count_element==11) {
          
          digitalWrite(PB7,LOW); //SR_nOEs=0;
          digitalWrite(PC3,HIGH);//SR_rCLK=1
          
          //address signal for decoder
          DE_ADD0=DE_ADD&0x01; 
          digitalWrite(PC1,DE_ADD0); 
          DE_ADD1=(DE_ADD>>1)&0x01;
          digitalWrite(PA0,DE_ADD1); 
          DE_ADD2=(DE_ADD>>2)&0x01;
          digitalWrite(PB0,DE_ADD2);
          
          //check decoder address signal by UART
          Serial.print("ADD0:");Serial.println(DE_ADD0, DEC);
          Serial.print("ADD1:");Serial.println(DE_ADD1, DEC);
          Serial.print("ADD2:");Serial.println(DE_ADD2, DEC);
          Serial.print("ADD:");Serial.println(DE_ADD, DEC);

          //push data signal in the idle state
          digitalWrite(PC10, LOW); //data S0
          digitalWrite(PC11, LOW); ////data S1
          digitalWrite(PC12, LOW); ////data S2
          digitalWrite(PD2, LOW); // //data S3
          digitalWrite(PA4,LOW); //SR_CLR

          //delay to wait for decoder address signal
          timer.pause();
          delay(10);
          digitalWrite(PC2,HIGH);//enable Decoder
          delay(20);
          timer.resume(); 
          
          //next row
          count_trans=count_trans+1; 
          count_element=0;

          Serial.print("count_trans");Serial.println(count_trans,DEC);
          DE_ADD=DE_ADD+1;
        
        }

      } 
      else {
        
        SR_CLK=1;
        digitalWrite(PA15,SR_CLK);

      }
    } 
  }
  else {
            timer.pause();
            count_trans=0;
            count_element=0;
            DE_ADD=0;
            SR_CLK=0;
            digitalWrite(PA15,SR_CLK);

            //idle state
            digitalWrite(PC2,LOW); //disenable Decoder
            digitalWrite(PB7,HIGH); //SR_nOEs=1;
            digitalWrite(PC3,LOW); //r_CLK=0;

            digitalWrite(PC10, LOW); //data S0
            digitalWrite(PC11, LOW); ////data S1
            digitalWrite(PC12, LOW); ////data S2
            digitalWrite(PD2, LOW); // //data S3
            Serial.println("done");


  }
}

void setup() {
  Serial.begin(115200);
  timer.pause();
  timer.setOverflow(100, HERTZ_FORMAT);
  timer.attachInterrupt(send_data);
  

  //serial data init output
  pinMode(PC10, OUTPUT); //S0
  pinMode(PC11, OUTPUT); //S1
  pinMode(PC12, OUTPUT); //S2
  pinMode(PD2, OUTPUT); //S3
  //SR
  pinMode(PA15, OUTPUT);  //SR_CLK
  digitalWrite(PA15, LOW);
  pinMode(PB7,OUTPUT);  //SR_nOEs 
  digitalWrite(PB7,HIGH);
  pinMode(PC3,OUTPUT); //SR_rCLK
  digitalWrite(PC3,LOW);
  pinMode(PA4,OUTPUT); //SR_CLR
  digitalWrite(PA1,LOW);
  //Decoder
  pinMode(PC2, OUTPUT);//DE_ena
  digitalWrite(PC2,LOW);
  pinMode(PC1, OUTPUT);//DE_ADD0
  digitalWrite(PC1,DE_ADD0);
  pinMode(PA0, OUTPUT);//DE_ADD1
  digitalWrite(PA0,DE_ADD1);
  pinMode(PB0, OUTPUT);//DE_ADD2
  digitalWrite(PB0,DE_ADD2);

  //pinMode(PA3, OUTPUT);//pincheck
  //digitalWrite(PA3,HIGH);
  //pinMode(PA2, OUTPUT);//pincheck
  //digitalWrite(PA2,HIGH);


 // timer.resume(); //wait for data signal

}

void loop(){
  if (Serial.available() > 0){
    in_angle=Serial.read();
    
    timer.resume();
    
  }
}