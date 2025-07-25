/* 프로그래밍 언어 */
// 각 언어마다 고유한 특징을 파악하여
// 업무 처리의 효율성을 확보하고,
// 다른 언어의 협업을 통해 효과적으로 프로그래밍 한다.
// 따라서 적절한 언어 선택이 필요하다.

// 1. 명료
// 2. 쉬운 적용
// 3. 언어 구조 체계적
// 4. 언어 확장 쉬움
// 5. 효율적
// 6. 외부적으로 & 광범위하게 사용 가능

// 프로그래밍 언어 : 저급 언어(기계어, 어셈블리어) / 고급 언어
// 명령형/절차적 언어 (imperative/procedural language)
// 함수형 언어 (functional language)
// 논리 언어 (logic language)
// 객체지향 언어(object-oriented language)

/* 언어 처리*/
// 컴파일러(compiler) or 인터프리터(interpreter) 형식
// 전처리기(preprocessor): 프로그래밍 언어가 번역되기 전에 실행되는 프로그램
//     문자 치환 or 매크로 확장 or 그에 대응하는 다른 고급 언어로 전환

// 1. Compiler Process
// Source Program -> Lexical analyzer -> {Lexical units} >> Syntax analyzer -> {Parse trees + Symbol table} >> Intermediate code generator(semantic analyzer) ->
// {{Optimization -> Intermediate code} + Symbol table} >> Code generator -> {Machine language} -> Computer + [Input data] -> Results

// 2. Interpreter Process
// Source Program -> Lexical analyzer -> {Lexical units} >> Syntax analyzer -> {Parse trees} >> Intermediate code generator ->
// {Intermediate code} >> Interpreter + [Input data] -> Results

/* Load module, Linking */
// Load module : 링커가 생성한 실행 가능한 바이너리 파일, 프로그램을 실제로 메모리에 load해서 실행할 때 사용한다.
// Linking : 여러 개의 오브젝트 파일이나 라이브러리 등을 하나의 실행 파일 또는 Load Module로 결합한다.
// 컴파일러가 하는 것 Load module : 유저코드 + 시스템 코드, static Linking, dynamic Linking은 주소값만 주고, Runtime에 실제 실행된다.

// 목적파일 == 오브젝트 파일(.o, .obj) vs 실행 파일(a.out, .exe)
// 컴파일 후 오브젝트 파일 생성
// 링킹 후 실행 파일 생성
// 오브젝트 파일은 실행할 수 없고, 실행 파일은 실행할 수 있다.

/* 프로그래밍 순서 */
// 문제 분석 -> 입출력 설계 -> 순서도 작성 -> 프로그램 코딩 -> 프로그램 입력 -> 모의 실험
// -> 오류 확인 -> 데이터 입력 & 실행 -> 문서화

// 사용자와의 상호작용 (GUI: Graphic User Interface)