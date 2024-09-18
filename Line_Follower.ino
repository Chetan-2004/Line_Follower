// infra red input
#define r2 12
#define r1 8
#define c  7
#define l1 4
#define l2 2

// motor input
#define M11 6
#define M12 9
#define M21 11
#define M22 10



void setup()  
{  pinMode(r2,INPUT);
  pinMode(r1,INPUT);
  pinMode(c,INPUT);
  pinMode(l1,INPUT);
  pinMode(l2,INPUT);

  pinMode(M11,OUTPUT);
  pinMode(M12,OUTPUT);
  pinMode(M21,OUTPUT);
  pinMode(M22,OUTPUT);

  Serial.begin(9600);

}

void loop() {
  int a,b,x,d,e;
  
    a = digitalRead(l2);
    b = digitalRead(l1);
    x = digitalRead(c);
    d= digitalRead(r1);
    e = digitalRead(r2);

  if(a==1 && b==1 && x==0 && d==1 && e==1){ 
  Serial.println("FORWARD");
  analogWrite(M11,255);
  analogWrite(M12,0);
  analogWrite(M21,210);
  analogWrite(M22,0);
  }

////  // slight left turn
  else if(a==1&& b==0 && x==1 && d==1 && e==1){
  Serial.println("LEFT TURN");
  analogWrite(M11,0);
  analogWrite(M12,0);
  analogWrite(M21,200);
  analogWrite(M22,0);
  }
//
////  // sharp left
else if( a==0 && b==0 && x==0 && d==1 && e==1){
  Serial.println("SEVERE LEFT TURN");
  analogWrite(M11,0);
  analogWrite(M12,200);
  analogWrite(M21,200);
  analogWrite(M22,0);
  }
  else if( a==0 && b==0 && x==1 && d==1 && e==1){
  Serial.println("SEVERE LEFT TURN");
  analogWrite(M11,0);
  analogWrite(M12,200);
  analogWrite(M21,200);
  analogWrite(M22,0);
  }
  else if( a==0 && b==1 && x==1 && d==1 && e==1){
  Serial.println("SEVERE LEFT TURN");
  analogWrite(M11,0);
  analogWrite(M12,200);
  analogWrite(M21,200);
  analogWrite(M22,0);
  }
  else if( a==0 && b==0 && x==0 && d==0 && e==1){
  Serial.println("SEVERE LEFT TURN");
  analogWrite(M11,0);
  analogWrite(M12,255);
  analogWrite(M21,255);
  analogWrite(M22,0);
  }

//  // slight right
  else if(a==1&& b==1 && x==1 && d==0 && e==1){
  Serial.println("RIGHT TURN");
  analogWrite(M11,200);
  analogWrite(M12,0);
  analogWrite(M21,0);
  analogWrite(M22,0);
  }
//
  // sharp right
   else if(a==1 && b==1  && x==0 && d==0&&e==0){
  Serial.print("SEvere RIGHT TURN");
  analogWrite(M11,200);
  analogWrite(M12,0);
  analogWrite(M21,0);
  analogWrite(M22,200);
  }
  else if(a==1 && b==1  && x==1 && d==0&&e==0){
  Serial.print("SEvere RIGHT TURN");
  analogWrite(M11,200);
  analogWrite(M12,0);
  analogWrite(M21,0);
  analogWrite(M22,200);
  }
  else if(a==1 && b==1  && x==1 && d==1&&e==0){
  Serial.print("SEvere RIGHT TURN");
  analogWrite(M11,200);
  analogWrite(M12,0);
  analogWrite(M21,0);
  analogWrite(M22,200);

  }
  else if(a==1 && b==0  && x==0 && d==0&&e==0){
  Serial.print("SEvere RIGHT TURN");
  analogWrite(M11,200);
  analogWrite(M12,0);
  analogWrite(M21,0);
  analogWrite(M22,200);
  }

  else if(a==1 && b==0  && d==0&&e==1){
  Serial.print("SEvere RIGHT TURN");
  analogWrite(M11,200);
  analogWrite(M12,0);
  analogWrite(M21,200);
  analogWrite(M22,0);
  }

    else if(a==0 && b==1  && d==1 &&e==0){
  Serial.print("SEvere RIGHT TURN");
  analogWrite(M11,200);
  analogWrite(M12,0);
  analogWrite(M21,200);
  analogWrite(M22,0);
  }


//  // route se bahar to halka sa reverse
  else if(b==1  && x==1 && d==1 && e==1){
  analogWrite(M11,0);
  analogWrite(M12,195);
  analogWrite(M21,0);
  analogWrite(M22,195);
  }

}