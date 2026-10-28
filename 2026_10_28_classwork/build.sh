MAIN="example1.cpp "
APP="build/classwork"

mkdir -p build

if [-f $APP ]; then rm "$APP"
fi


g++ $MAIN -o $APP

./$APP 