#!/bin/bash
clear
echo "Enter the file/folder path to be copied:"
read userPath
echo "Be patient, your file/folder is being copied..."
scp -r $userPath root@10.9.8.2:/home/root/
