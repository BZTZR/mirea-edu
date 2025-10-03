import kotlin.math.pow

fun main() {
    print("Hello World!")
    print("\nBye World!")
    print("\nHello again World!\n")
    println("Hello hello World!")
    println("Hi world!")
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
    val a = 1
    val b = 2.5
    var g = "kek"
    println(g)
    g = "k3k"
    println(g)
    //Явные
    var h:Long = 6
    println("Значение h = "+ h)
    println("Значение h = ${h-5}")


    //Ввод
    var p = readln()
    println("Значение p = $p")
    //Вывод типа данных переменной
    println(p::class)
    //Преобразование типов
    val m = p.toInt()
    println("Значение p = $m")
    //Ариф. операции
    println(23+3)
    println(23-3)
    println(23*3)
    println(23/3)
    println(23%3)
    val j = 10
    println(b.pow(2))
    println(a.toFloat().pow(2))
    println(a::class)
    //сравнение
    println(a==1)
    println(a==2)
    println(3!=3)
    println(3>4)
    println(5<9)
    println(3>=3)
    println(4<=3)
