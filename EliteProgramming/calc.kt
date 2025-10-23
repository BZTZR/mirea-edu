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


    while(true) {
    val op = readln()
    
    println("Введите числа через пробел:")
    val input = readln()
    val numbers = try {
        input.split(" ").map { it.toDouble() }
    } catch (e: NumberFormatException) {
        println("Ошибка! Вводите только числа.")
        continue
    }
        when(op){
            "+" -> println(summa(numbers))
            "*" -> println(multy(numbers))
            "-" -> println(vichet(numbers[0], numbers[1]))
            "/" -> println(division(numbers[0], numbers[1]))
            "%" -> println(ostdiv(numbers[0], numbers[1]))
            "^" -> println(step(numbers[0], numbers[1]))
            else -> println("Ошибка!")
        }
    }
}

fun summa(numbers: List<Double>): Double {
    var result = 0.0
    for (num in numbers) {
        result += num
    }
    return result
}

fun multy(numbers: List<Double>): Double {
    var result = 1.0
    for (num in numbers) {
        result *= num
    }
    return result
}

fun vichet(a: Double, b: Double): Double = a - b
fun division(a: Double, b: Double): Double = a / b
fun ostdiv(a: Double, b: Double): Double = a % b
fun step(a: Double, b: Double): Double = a.pow(b)
