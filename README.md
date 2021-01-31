
# การติดตั้งโปรแกรมสำหรับไอโอที

## โปรแกรม git
<https://git-scm.com/download/win>

## โปรแกรม python
<https://www.python.org/downloads/windows/>

## โปรแกรม nodejs
<https://nodejs.org/en/download/>

### คำสั่งสำหรับการเขียนโปรแรแกม ไอโอที
```
คำสั่ง upload
pio run -t upload
pio run -t upload --upload-port COM3

คำสั่ง uonitor
pio device monitor
pio device monitor -port COM3
```

###ตามตรวจสอบ USB-serial บน windows
```
เปิด Control Panel
เลือก Device Manager
มองหา Ports (COM/LPT)
```


==============================================

1. ติดตั้ง git

	เปิดบราวเซอร์

	https://github.com/choompol-boonmee/iotset1

	เพื่อดาวน์โหลดโปรแกรม git

	Git-2.30.0.2-64-bit.exe

	แล้วติดตั้งที่เครื่องคอมพิวเตอร์

2. เปิด command prompt หรือ cmd
    รันคำสั่ง 

	git clone https://github.com/choompol-boonmee/iotset1.git

3.  รัน โปรแกรมที่อยู่ในโฟลเดอร์ software

	python-3.9.1-amd64.exe

	pip install -U platformio

	clip การติดตั้ง platformio

	3.1 ติดตั้ง platformio

	<https://youtu.be/ngTcU9QtK-M>

	3.2 กรณีต้องล้าง python ของเดิมออกก่อน

	<https://youtu.be/dI6IhS8MLw4>

	3.3 การติดตั้ง nodejs

	<https://youtu.be/t2zq3THYW3o>

4. เปิด command prompt หรือ cmd
	เข้าไปโฟลเดอร์ iotset1

	cd iotset1/examples

	dir

	ตรวจสอบดูโฟลเดอร์ตัวอย่าง ex01,ex02,ex03

5.  รันตัวอย่างที่ 1

	cd iotset1/examples/ex01

	pio run

6.  รันตัวอย่างที่ 2
	
	cd iotset1/examples/ex03

	pio run 


