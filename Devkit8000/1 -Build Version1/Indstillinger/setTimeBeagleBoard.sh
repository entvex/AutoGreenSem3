//----------setTimeBeagleBoard0----------
#!/bin/bash
echo $1
echo $2
echo $3
echo $4
# for goldenImage
#date -s "2 OCT 2006 18:00:00"
#date -s "$1 $2 $3 $4:$5:00"
#For devkit date 2011.01.11-20:00
date $1.$2.$3-$4:$5
//----------setTimeBeagleBoard1----------