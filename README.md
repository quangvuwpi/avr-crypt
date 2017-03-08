# avr-crypt
Arduino IDE library wrapper for AVR-Crypto-Lib

* This is a direct Arduino IDE library wrapper for AVR-Crypto-Lib.
* At the moment, only the basic RSA encrypt/decrypt functions are available.
* All of the available functions and data types will be ported...eventually. 

Hint
========
* Use "git archive -o avr-crypt.zip HEAD" to generate a zip file for Arduino IDE to import.
  
Examples
========
```c
#include <avr-crypt.h>
void loop() {
  bigint_t         data;
  rsa_publickey_t  pub;
  avr_crypt.rsa_enc(&data, &pub);
}
```


