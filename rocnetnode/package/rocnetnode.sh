#!/bin/bash
cd /opt/rocrail/
rm -f nohup.out
nohup ./rocnetnode -l /opt/rocrail&
echo "$!" > rocnetnoded.pid