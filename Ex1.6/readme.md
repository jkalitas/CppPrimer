The fragment it's not legal, because has syntax errors.
The second line uses the output operator "<<" but doesn't specify where it should  redirect.
A possible solution would be:
'''c
	std::cout << "The sum of " << v1;
	std::cout << " and " << v2;
	std::cout << " is " << v1 + v2 << std::endl;
'''
