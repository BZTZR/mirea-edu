import kotlin.math.pow
fun main() {
    println("calc.kt\n")
    println("Добро пожаловать в калькулятор!")
    println("Всё очень просто! Для начала, ведите символ операции. Список возможных:")
    println("Сложение: + ; вычитание: - ; умножение: * ; деление: / ; остаток от деления: % ; число в степень: ^ ;")
    println("Главвное введи только одну операцию и обязательно из строки выше!" +
            " Иначе будет ошибка. Далее, перейдя на следущую строку")
    println("Введи одно, затем после отправки предыдущего ещё и второе число. Вводить только числа! Иначе - ошибка " +
            "и программу придется перезапускать.")
    println("Удачных Ариф. операций!!!")

    while(true){
        var op = readln()
        var a = readln().toDouble()
        var b = readln().toDouble()
        when(op){
            "+" ->{
                println(summa(a,b))
            }
            "-" ->{
                println(vichet(a,b))
            }
            "*" ->{
                println(multy(a,b))
            }
            "/" ->{
                println(division(a,b))
            }
            "%" ->{
                println(ostdiv(a,b))
            }
            "^" ->{
                println(step(a,b))
            }
            else ->{
                println("ошибка! Что-то пошло не так. Попробуй еще раз")
            }
        }
    }
}
fun summa(a:Double,b:Double):Double{
    return a + b
}
fun vichet(a:Double,b:Double):Double{
    return a - b
}
fun multy(a:Double,b:Double):Double{
    return a * b
}
fun division(a:Double,b:Double):Double{
    return a / b
}
fun ostdiv(a:Double,b:Double):Double{
    return a % b
}
fun step(a:Double,b:Double):Double{
    return a.pow(b)
}
