import RPi.GPIO as GPIO

PIR_input = 11			
LED = 3					
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)		
GPIO.setup(PIR_input, GPIO.IN)	
GPIO.setup(LED, GPIO.OUT)
GPIO.output(LED, GPIO.HIGH)
GPIO.output(LED, GPIO.LOW)

while True:
    if(GPIO.input(PIR_input)):
        GPIO.output(LED, GPIO.HIGH)
    else:
        GPIO.output(LED, GPIO.LOW)
