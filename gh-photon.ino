int analogIn = 0;
int analogOut = 0;

Timer myTimer(1500, publish);

void setup() {
    myTimer.start();
    Particle.variable("analogIn", analogIn);
}

void loop() {
  analogIn = analogRead(0);
}

void publish(){
    Particle.publish("analogVal", String(analogIn));
}
