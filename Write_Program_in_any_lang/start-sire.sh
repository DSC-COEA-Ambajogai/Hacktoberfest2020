#!/bin/bash
#killall direwolf >/dev/null 2>&1
killall kissattach >/dev/null 2>&1
#ifconfig eth0 down

#running=Flase
while true; do

        #running=$(ifconfig | grep ax0 | awk '{print $1}')
        #if [ -z "`ps ax | grep -v grep | grep direwolf`" ]; then
        if [ -z "`ps ax | grep -v grep | grep kissattach`" ]; then
        #if [ "$running" == "ax0:" ]; then
        #if [ -z $(ifconfig | grep ax0 | awk '{print $1}') ]; then
                #killall direwolf >/dev/null 2>&1
                killall kissattach >/dev/null 2>&1
                echo "--------------------------------------" >> /root/remote-start/run.log
                echo "$(date +%Y-%m-%d_%H:%M:%S): Starting Kissattach" >> /root/remote-start/run.log
                #/root/remote-start/direwolf/direwolf -t 0 -c /root/remote-start/wolf.conf -p -q hd & >/dev/null 2>&1
                #sleep 1
                #ax=$(ls -la /tmp | grep kisstnc | awk '{ print $11 }' | sed 's/\/dev\/pts\///')
                kissattach /dev/ttyAMA0 1 44.56.4.118
                arp -H ax25 -i ax0 -s 44.56.4.119 N0CALL
                kissparms -c 1 -p 1
                #/root/remote-start/controls/touch.py
        else
                echo "Successfully running" #>> /root/remote-start/run.log
                sleep 21600

        fi

done
