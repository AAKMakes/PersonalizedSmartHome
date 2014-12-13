int switches[2];
int plugs[10];
int lights[2];
void setup(){
  Serial.begin(9600);
  for(int i = 0; i < 10; i++){
    plugs[i]=53-i;
    pinMode(plugs[i],OUTPUT);
  }
  for(int i = 0; i < 2; i++){
    switches[i]=i+3;
    lights[i]=i+5;
    pinMode(switches[i],INPUT);
    pinMode(lights[i],OUTPUT);
  }
}
void loop(){
  if(Serial.available()){
    
    
  }
}
