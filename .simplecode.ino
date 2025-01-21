void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  hello();

  int A = 4;
  int AA = 7;
  Serial.println(add(A,AA));
  delay(1000);

}
void hello(){
  Serial.println("hello");
  delay(1000);
}
int add(int a,int b){
  return a+b;
}
