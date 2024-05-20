led_dict={
    "0":6, "1":2, "2":5, "3":5, "4":4, "5":5, "6":6,
    "7":3, "8":7, "9":6
}
t=int(input())
for i in range(t):
    n=input()
    led = 0
    total_led = 0
    for value in n:
        led = led_dict[value]
        total_led += led
    print(total_led,"leds")