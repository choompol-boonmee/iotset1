
# การติดตั้งโปรแกรมสำหรับไอโอที

## 1.โปรแกรม git
<https://git-scm.com/download/win>

## 2.โปรแกรม python
<https://www.python.org/downloads/windows/>

## 3.โปรแกรม nodejs
<https://nodejs.org/en/download/>

# คำสั่งสำหรับการเขียนโปรแรแกม ไอโอที
```
- to upload
pio run -t upload
pio run -t upload --upload-port COM3

- to monitor
pio device monitor
pio device monitor -port COM3
```

# ตามตรวจสอบ USB-serial บน windows
```
เปิด Control Panel
เลือก Device Manager
มองหา Ports (COM/LPT)
```

# การโหลดโปรแกรมด้วย git
git clone https://github.com/choompol-boonmee/iotset1.git


# - การแก้ไขกรณี Windows 10
uninstall python ทั้งหมด
ลบโฟลเดอร์ C:\Users\user\AppData\Local\Programs\Python
ลบโฟลเดอร์ C:\pip
ตรวจสอบตัวแปร PATH ว่ามีเกี่ยวกับ python หรือไม่
install Python3.9

# - กรณีใช้ Microsoft Store
uninstall python ทั้งหมด
ลบโฟลเดอร์ C:\Users\user\AppData\Local\Package\Python...
install Python3.9

# - การแก้ไขกรณี Windows 8
uninstall python ทั้งหมด
ลบโฟลเดอร์ C:\Users\user\AppData\Local\Programs\Python
ลบโฟลเดอร์ C:\pip
ตรวจสอบตัวแปร PATH ว่ามีเกี่ยวกับ python หรือไม่
install Python3.9

# - การแก้ไขกรณี Windows 7
uninstall python ทั้งหมด
ลบโฟลเดอร์ C:\Users\user\AppData\Local\Programs\Python
ลบโฟลเดอร์ C:\pip
ตรวจสอบตัวแปร PATH ว่ามีเกี่ยวกับ python หรือไม่
install Python3.9 สำหรับ Windows 7 หรือก่อนหน้านั้น


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


