Smart plug is a device which can make any ordinary appliance smart by plug the device in Smart plug. User will be able to control the device manually like an ordinary socket or user can use mobile app to control the device. Smart plug uses bluetooth connection to communicate with Mobile phone. User can switch on and off the device by the app.  

Technologies: Arduino programming, Serial Communication via Bluetooth  
Electronics : arduino, HC-05 bluetooth module, relay module, AC-DC converter(5v), plug and socket  

The smart plug look like this:  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/xplug.JPG)

LINK for the video here: https://youtu.be/4e0f6LBuB6s  

Below is the circuit diagram:  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/Circuit/Circuit.png)  

Here, i will not discuss how to connect the circuit. I will discuss how to interface the app for controlling the smart plug.
so, after connecting the circuit and burning the program in arduino micro, follow the steps below to configure the app.  

1. First, download the app "ROBOREMO" from the playstore, open the app and go to the MENU section  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/1.png)  

2. click on EDIT UI

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/2.png)  

3. click on middle of the screen to add items  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/3.png) 

4. click on BUTTON  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/4.png)  

5. the mainpage will appear like this, now click on button to configure  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/5.png)  

6. click on SET PRESS ACTION  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/6.png)  

7. set press action as ON  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/7.png)  

8. Go back and add another button, same as the previous one and set it's press action as OFF  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/10.png)  

9. go back and click back once more, so it will look like this  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/11.png)  

10. Now, plug the smart plug on. Open the bluetooth in phone and pair it with the HC-05 bluetooth module using pin 1234 or 0000. Now, open the app and go to MENU section and click on CONNECT.  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/12.png)  

11. click on BLUETOOTH  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/13.png)  

12. select the device HC-05  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/14.png)  

13. select the port 1  

![alt text](https://github.com/rajatsharma369007/Smart-plug/blob/master/images/15.png)  

Note: for heavy appliance use Relay having higher rating of amp, to avoid burning of the relay.  

Use any adapter casing to enclose all the circuit as i have enclosed mine.  

Thank you for visiting here,  
Rajat Sharma  
Bachelor in technology (2015-2019)  
Computer Science and Engineering  
Tezpur University  

Feel free to contact me,  
Email: rajatsharma369007@gmail.com  
LinkedIn: https://www.linkedin.com/in/rajat-sharma-1144a1119/

