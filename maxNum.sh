echo "enter num 1"
read num1
echo "enter num 2"
read num2

if [ $num1 -gt $num2 ]
then
    echo "num1 is greater"
else
    echo "num2 is greater"
fi