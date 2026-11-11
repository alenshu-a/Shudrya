MAIN="main.cpp io.cpp sort.cpp util.cpp"
APP="build/sortings"

mkdir -p build

if [-f $APP ]; then rm "$APP"
fi


g++ $MAIN -o $APP

./$APP
