echo "cd ~/Documents/GitHub/solved_problem/codeforces/$1/$2"
cd ~/Documents/GitHub/solved_problem/codeforces
cf parse $1 $2 
cd $1/$2 
cf gen
geany $2.cpp
