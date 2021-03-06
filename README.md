4d-plugin-growl
===============

4D plugin to display Growl notification.

##Platform

| carbon | cocoa | win32 | win64 |
|:------:|:-----:|:---------:|:---------:|
|🆗|🆗|🚫|🚫|

##About

This plugin is based on the [Growl-2.0.1-SDK](http://growl.info).

If you don't have Growl running, or if you have configured Growl to used the Notification Center, a system notification will be posted instead.

<img width="524" alt="2016-07-22 18 10 34" src="https://cloud.githubusercontent.com/assets/1725068/17052278/b9192fc0-5037-11e6-9ab3-1456d172f771.png">

Unlike the ``DISPLAY NOTIFICATION`` command of 4D, the notification will always be displayed, even if the application is running as the frontmost. However, you have less control of the icon if you don't use Growl; the icon is decided by the application name.

![default](https://cloud.githubusercontent.com/assets/1725068/17052371/207b0bca-5038-11e6-9d8b-b7f5fabcb2b5.png)

On the other hand, with Growl you can specify the icon image.

<img width="300" alt="2016-07-22 18 31 00" src="https://cloud.githubusercontent.com/assets/1725068/17052930/8738ac26-503a-11e6-88b5-a3663da01395.png">

Commands
---

```
Growl Set notification method
Growl SET MIST ENABLED
Growl Get mist enabled
Growl POST NOTIFICATION
Growl Get notification method
```

##Example

```
Growl SET NOTIFICATION METHOD ("cb")
$method:=Growl Get notification method 

$title:="TITLE"
$description:="description"

READ PICTURE FILE(Get 4D folder(Current resources folder)+"4D-main.png";$icon)
$priority:=0  //-2 to 2
$sticky:=1
$context:="wawawa"
$identifier:="callback1"

Growl POST NOTIFICATION ($title;$description;$icon;$priority;$sticky;$context;$identifier)
```

###Description

A new local process is launched to execute the callback method. Use the ``context`` string to keep track of which notification was clicked. The ``identifier`` can be used to group related notifications.

###Callback

```
C_LONGINT($1;$type)
C_TEXT($2;$clickContext)

$type:=$1
$clickContext:=$2

Case of 
: ($type=Growl Notification Clicked)

: ($type=Growl Notification Timeout)

End case 

TRACE
```
