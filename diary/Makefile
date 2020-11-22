Execute : memoObject calendarObject mainObject #해당 구문은 분기, 아래 구문은 실행을 의미함. 실행구문에는 반드시 tab키를 넣어 구분시켜야함.
	gcc -o ExecuteDaily memo.o calendar.o main.o 
memoObject : #o는 object파일을 의미, c는 c언어로 컴파일된 소스파일
	gcc -c -o memo.o memo.c 
calendarObject :
	gcc -c -o calendar.o calendar.c 
mainObject : main.c
	gcc -c -o main.o main.c 
clean : #분기를 모두 실행한 후 Object파일 전부 삭제
	rm *.o ExecuteDaily 