import kotlin.math.max
import kotlin.math.min
import kotlin.math.pow

fun main() {
//    print("Hello World!")
//    print("\nBye World!")
//    print("\nHello again World!\n")
//    println("Hello hello World!")
//    println("Hi world!")
    //KEK
    /*
    kek
    типы данный
    chislovye
     целочисленные byte short int long
     вещественные float double
    Символьный char
    Строковый string
    Логический boolean(true false)
    Nullble: Nothing - null
    Переменные
    неизм. - val
    Изм. - var
     */
    //Неявн. объявления
//    val a = 1
//    val b = 2.5
//    var g = "kek"
//    println(g)
//    g = "k3k"
//    println(g)
//    //Явные
//    var h: Long = 6
//    println("Значение h = " + h)
//    println("Значение h = ${h - 5}")

//
//    Ввод
//    var p = readln()
//    println("Значение p = $p")
//    //Вывод типа данных переменной
//    println(p::class)
//    //Преобразование типов
//    val m = p.toInt()
//    println("Значение p = $m")
//    //Ариф. операции
//    println(23 + 3)
//    println(23 - 3)
//    println(23 * 3)
//    println(23 / 3)
//    println(23 % 3)
//    val j = 10
//    println(b.pow(2))
//    println(a.toFloat().pow(2))
//    println(a::class)
//    //сравнение
//    println(a == 1)
//    println(a == 2)
//    println(3 != 3)
//    println(3 > 4)
//    println(5 < 9)
//    println(3 >= 3)
//    println(4 <= 3)
//    if (1 > 2){
//        println("1 < 2")
//    }
//    else if (1 == 2) {
//        println("1 == 2")
//    }
//    else{
//        println("не может быть")
//    }
//    val mas = if (3<6) 3 else 6
//    println(mas)
//
//    // Максимальное и минимальное двух чисел
//    println(max(2, 5))
//    println(min(6, 3))
//    val z = readln()
//    when(z){
//        "Hello" ->{
//            println("Hi")
//        }
//        "Bye" ->{
//            println("Bye!")
//        }
//    }
//    val t = readln().toInt()
//
//    when(t) {
//        1 -> println(1)
//    }
//    var h = 2
//    while(h>0) {
//        h--
//        println("h = $h")
//    }
//    var y = 5
//    do{
//        y--
//        println(y)
//    }while(y>0)
//    val str = "Hello Wrld!"
//    for(i in str){
//        println(i)
//    }
//    str.forEach {k ->// лямбда
//        println(k)
//    }
//    // цикл for для промежутков
//    for (i in 1..20){
//        println(i)
//    }
//    //until - промежуток в котором не учитывается конец
//    for (i in 1 until 5){
//        println(i)
//    }
//    for (i in 1..10 step 2){
//        println(i)
//    }
//    //DownTo - прохождение промежутка в обратном порядке
//    for (i in 10 downTo 5){
//        println(i)
//    }
//    //break - остаановка цикла и выход
//    //continue - продолжение
//    //return - остановка ВСЕХ циклов
//    for (i in 1..20){
//        if(i==5){
//            continue
//        }
//        if(i==7){
//            for (j in 1..20){
//                if(j==2){
//                    return
//                }
//            }
//        }
//        if(i==10)
//            break
//    }
//    //Коллекции
//    //массив
    val array = arrayOf(1,2,3)
    val intarray = intArrayOf(1,2,3)
    val emptyArray = emptyArray<String>()
    //операции с ними
    array[0] = 0//замена элемента по индексу
    println(array.size)// razmer
    println(array.first())// array[0]
    println(array.last())//последний
    println(array.indexOf(2))//проверка наличия
    println(array.contains(2))
    println(array.contains(100))
    println(array.sort())
    //Список
    //неизм
    val list = listOf(1,2,3)
    //изм
    val mutableList = mutableListOf("1","2","3")
    //операции с изм
    mutableList.add("4")
    mutableList.add(2,"6")
    mutableList.addAll(listOf("5","8"))
    mutableList.addAll(4, listOf("5","8"))
    mutableList.remove("8")
    mutableList.removeAt(2)
    val subList = mutableList.subList(0,5)
    subList.clear()
    //Множество
    val mutableset1 = mutableSetOf(1,1,1,1,2,3,4)
    val mutableset2 = mutableSetOf(4,5,6,7)
    //операции
    //объединение
    println(mutableset1.union(mutableset2))
    //пересечение
    println(mutableset1.intersect(mutableset2))
    //разность
    println(mutableset1.subtract(mutableset2))
    //ассоциативный массив
    val mutableMap = mutableMapOf(
        //ключ to значение
        3 to "fast",
        true to 4,
        "fasdf" to 1
    )
    //добавление
    mutableMap.put(9, "fasfsa")
    //удаление
    mutableMap.remove(3, "fast")
    //вызов функции
    sum1(2,3)
    //запись результата в переменну
    val f = sum2(1, 2)
    println(sum4(3,4))
    //Анонимные т.е. внутренние функции(Доступны только внутри другой и нигде больше)
    val square = {
        //лямбда - параметр
        number1:Int, number2:Int -> number1*number2
    }
    println(square(5,2))
    //работа с nullable типами данных
    val nullList = listOf<Long?>(1,2,3, null)
    nullList.forEach{
        //оператор безопасного вызова
        it?.toInt()
        //оператор Элвиса - оп. по умол. ?:
        it?.toInt() ?: 0
        //оператор не безопасного вызова !!
        //it!!.toInt()
    }
    //let/run
    val email: String? = null
    email?.let{
        println("Шлите на почту $it")
    }?: run{//else
        println("404")
    }
    example(1,2,3)
    //список через ввод в консоль
    val l = readln().strip().split(" ").map{it.toInt()}
    //инцилизация неск перемнных через консоль
    val (v,u,g) = readln().strip().split(" ").map{it.toInt()}
}
fun example(vararg int: Int){
    println(int)
    val (a,b,c) = int
    println(a)
    println(b)
    println(c)

}
// Пример функции в Kotlin
fun sum1(a:Int, b:Int){
    println(a+b)
}
fun sum2(a:Int, b:Int): Int{
    return a + b
}
//Пример однострочной функции
fun sum3(a: Int, b: Int): Int = a + b

fun sum4(a:Int, b:Int, c:Int = 3) = a+b+c
