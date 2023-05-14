main_output=$(./main)
test_string="Gavrilov Andrei I993"
if [ "$main_output" == "$test_string" ]; then
	echo "\nv \t Test passed\n"
else
	echo "\nx \t Test failed\n"
fi
