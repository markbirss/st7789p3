# st7789p3
ST7789P3 1.47 inch 172 x 320 test


```
sudo apt -y install python3-full python3-virtualenv
virtualenv .
source bin/activate
pip3 install platformio

pip3 install --upgrade pip
python3 -m pip install --upgrade setuptools

git clone https://github.com/markbirss/st7789p3.git
cd st7789p3

pio run -e rp2040-zero -t upload 
```
