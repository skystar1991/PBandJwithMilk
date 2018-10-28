// question 1

function EvenOdd(x) {
	if (isNaN(x)) return 'not a valid number';
	else {
		if (x === 0) return 'Even';
		if (x === 1) return 'Odd';
		return EvenOdd(x - 2);
	}
}
console.log('*** question 1 ***');
console.log(EvenOdd(5));
console.log(EvenOdd(10));
console.log(EvenOdd(255));
console.log(EvenOdd('One'));
console.log(EvenOdd(0));
console.log('*** end of question 1 ***');

// question 2
function Multiply(X, Y) {
	return X * Y;
}

function Divide(X, Y) {
	if (Y === 0) return 'Cannot Divide by 0!';
	else return X / Y;
}

function Add(X, Y) {
	return X + Y;
}

function Subtract(X, Y) {
	return X - Y;
}

function MyMathFunction(X, Y, func) {
	return func(X, Y);
}

console.log(' ');
console.log('*** question 2 ***');
console.log(MyMathFunction(10, 10, Multiply));
console.log(MyMathFunction(50, 10, Divide));
console.log(MyMathFunction(10, 0, Divide));
console.log(MyMathFunction(20, 25, Add));
console.log(MyMathFunction(25, 20, Subtract));
console.log('*** end of question 2 ***');

// question 3

function SortMyArray(arr) {
	if (arr.length === 0) return 'Cannot sort an Empty Array!';
	else {
		var oneMoreRun;
		do {
			oneMoreRun = false;
			for (var i = 0; i < arr.length - 1; i++) {
				if (arr[i] > arr[i + 1]) {
					var temp = arr[i + 1];
					arr[i + 1] = arr[i];
					arr[i] = temp;
					oneMoreRun = true;
				}
			}
		} while (oneMoreRun);
		return arr;
	}
}

console.log(' ');
console.log('*** question 3 ***');
var arr1 = [-3, 8, 7, 6, 5, -4, 3, 2, 1];
console.log(SortMyArray(arr1));
var test_array = [1, 2, 3, 4, 5];
console.log(SortMyArray(test_array));
var test_array = [];
console.log(SortMyArray(test_array));
var test_array = [1, -1, -2, 2, 3, -3, -4, 4, 5, -5, 0];
console.log(SortMyArray(test_array));
var test_array = [1, 1, 1, 100, 75, 2, 2, 37, 55, 55];
console.log(SortMyArray(test_array));
console.log('*** end of question 3 ***');

// question 4

function myFib(x) {
	if (isNaN(x) || x % 1 !== 0) return 'Not an integer value!';
	else {
		if (x === 0 || x == 1) return 1;
		return myFib(x - 1) + myFib(x - 2);
	}
}
console.log(' ');
console.log('*** question 4 ***');
console.log(myFib(5));
console.log(myFib(10));
console.log(myFib(8));
console.log(myFib('Thirtyfive'));
console.log(myFib(3.5));
console.log('*** end of question 4 ***');
