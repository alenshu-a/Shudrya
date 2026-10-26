MAIN="main.cpp io.cpp sortings.cpp "
APP=menu


if [ $APP ]; then rm "$APP"
fi


g++ $MAIN -o $APP

./$APP
