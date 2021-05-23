soapcpp2 -c calc.h # pakiet gSOAP
cc -lgsoap -o calcclient calcclient.c soapC.c soapClient.c
cc -lgsoap -o calcserver soapClient.c soapC.c soapServer.c calcserver.c -lm
cc -lgsoap -o calcserver2 soapClient.c soapC.c soapServer.c calcserver.c -lm