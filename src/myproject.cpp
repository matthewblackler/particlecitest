#include <application.h>
#include <MyLibrary.h>

#define PIN D7
int state = 0;

void setup() {
    pinMode(PIN, OUTPUT);
}
void loop() {
    digitalWrite(PIN, (state) ? HIGH : LOW);

    state = !state;

    int delayTime = add_two_numbers(200, 600);

    delay(delayTime);
}
