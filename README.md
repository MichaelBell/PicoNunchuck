# Read a Wii Nunchuck status over I2C

I have an old Wii nunchuck with one of these to connect it to the Pico: https://todbot.com/blog/2008/02/18/wiichuck-wii-nunchuck-adapter-available/

I2C is used to read the status of the nunchuck.  Timers are used to automatically query the status at around 50 times/second.

Joystick and button state is exposed - see the header.

A simple example program prints the state to stdout.
