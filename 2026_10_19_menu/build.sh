MAIN="main.cpp menu_functions.cpp menu_items.cpp "
APP="build/menu"

mkdir -p build

if [-f $APP ]; then rm "$APP"
fi


g++ $MAIN -o $APP

./$APP
